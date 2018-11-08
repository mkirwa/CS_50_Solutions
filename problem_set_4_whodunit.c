//Your program should accept exactly two command-line arguments:
//the name of an input file to open for reading followed by the
//name of an output file to open for writing.
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    //If your program is executed with fewer or more than two command-line arguments
    //it should remind the user of correct usage, as with fprintf (to stderr),
    //and main should return 1.
    if (argc != 3)
    {
        fprintf(stderr, "Usage: copy infile outfile\n");
        return 1;
    }

    // remember filenames
    char *infile = argv[1];
    char *outfile = argv[2];

    // open input file
    //If the input file cannot be opened for reading,
    //your program should inform the user as much,
    //as with fprintf (to stderr), and main should return 2.

    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    //If the output file cannot be opened for writing,
    //your program should inform the user as much,
    //as with fprintf (to stderr), and main should return 3

    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    //If the input file is not a 24-bit uncompressed BMP 4.0,
    //your program should inform the user as much,
    //as with fprintf (to stderr), and main should return 4.

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


      // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        // iterate over pixels in scanline
        for (int j = 0; j < bi.biWidth; j++)
        {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);


            //Does my code go here???
            //changing the colors as necessary and writing them in

            if(triple.rgbtRed==0xff){
                triple.rgbtRed=0x00;
            }

            if(triple.rgbtGreen==0xff){
                triple.rgbtGreen=0x00;
            }

            if(triple.rgbtBlue==0xff){
                triple.rgbtBlue=0x00;
            }

            // write RGB triple to outfile
            fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
        }

        // skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);

        // then add it back (to demonstrate how)
        for (int k = 0; k < padding; k++)
        {
            fputc(0x00, outptr);
        }
    }

        fclose(inptr);
        fclose(outptr);

    // success
    return 0;
}
