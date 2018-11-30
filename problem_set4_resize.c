#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"

int main(int argc, char *argv[])
{
//Your program should accept exactly 3 command lines!!
//create an outfile that scales that bitmap by n
//take the value from the user say n
//increase the size by value n
    // ensure proper usage
    if (argc != 3)
    {
        fprintf(stderr, "Usage: copy infile outfile\n");
        return 1;
    }

    // remember filenames
    int n = argv[0];
    char *infile = argv[1];
    char *outfile = argv[2];

    if(n<0 || n>100){
        fprintf(stderr, n);
    }

    // open input
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }
    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

//really don't know if this is the place I want to change my code at
//here!!!
    // write outfile's BITMAPFILEHEADER
//with a resized bitmap, we will have an updated header!
//what's changing in the header?
//the file size is changing,
//image size is changing,
//image size and the width and height of the file

//the file size of the bitmapfileheader is mentioned here
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
//the size of of the bitmapinfoheader is mentioned here
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // iterate over infile's scanlines
///every row is rotated n times
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
/////Every pixel is repeated n times

        // iterate over pixels in scanline
        for (int j = 0; j < bi.biWidth; j++)
        {
            // temporary storage
            RGBTRIPLE triple;
            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

            ///Resize Horizontally
            ///Remember Padding!!!

            ///There are two methods.
            ///rewrite methods
                ///remeber pixels in an array
                ///write array as many times as needed
            ///Re-copy method
                ///go back to start of the original scanline
                ///re-scan scanline

            // write RGB triple to outfile
            fwrite(&triple, sizeof(RGBTRIPLE)*n, 1, outptr);
            //try to see if you can implement resize by simply stretching n
            //horizontally first then you can move on to resizing vertically
        }
        // skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);

        // then add it back (to demonstrate how)
        for (int k = 0; k < padding; k++)
        {
            fputc(0x00, outptr);
        }
    }


    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}
