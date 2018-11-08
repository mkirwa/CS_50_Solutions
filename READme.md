# Questions

## What's `stdint.h`?
Allow programmers to write more portable code by providing a set of typedefs that specify exact-width integer types,
together with the defined minimum and maximum allowable values for each type, using macros[1] .
This header is particularly useful for embedded programming which often involves considerable 
manipulation of hardware specific I/O registers requiring integer data of fixed widths, specific locations and exact alignments.


## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?
A UINT8 is an 8-bit unsigned integer (range: 0 through 255 decimal). 
Because a UINT8 is unsigned, its first bit (Most Significant Bit (MSB)) is not reserved for signing.
This type is declared as follows:
 typedef unsigned char UINT8;
 uint8_t is the same as a byte. 
 its shorthand for: a type of unsigned integer of length 8 bits

A UINT32 is a 32-bit unsigned integer (range: 0 through 4294967295 decimal). 
Because a UINT32 is unsigned, its first bit (Most Significant Bit (MSB)) is not reserved for signing.
This type is declared as follows:
 typedef unsigned int UINT32
 
 An INT32 is a 32-bit signed integer (range: –2147483648 through 2147483647 decimal).
 The first bit (Most Significant Bit (MSB)) is the signing bit.
This type is declared as follows:
 typedef signed int INT32;
The most significant bit is the bit in a binary number that is of the greatest numerical value.
 
 A UINT16 is a 16-bit unsigned integer (range: 0 through 65535 decimal).
 Because a UINT16 is unsigned, its first bit (Most Significant Bit (MSB)) is not reserved for signing.
This type is declared as follows:
 typedef unsigned short UINT16;


## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?
A BYTE is an 8-bit unsigned value that corresponds to a single octet in a network protocol.
This type is declared as follows:
typedef unsigned char BYTE, *PBYTE, *LPBYTE;
The octet type specifies an 8-bit data item.
An octet is an 8-bit data type as specified in [C706] section 14.2.

A DWORD is a 32-bit unsigned integer (range: 0 through 4294967295 decimal).
Because a DWORD is unsigned, its first bit (Most Significant Bit (MSB)) is not reserved for signing.
This type is declared as follows:
typedef unsigned long DWORD, *PDWORD, *LPDWORD;

A LONG is a 32-bit signed integer, in twos-complement format (range: –2147483648 through 2147483647 decimal). The first bit (Most Significant Bit (MSB)) is the signing bit.
This type is declared as follows:
typedef long LONG, *PLONG, *LPLONG;
 
A WORD is a 16-bit unsigned integer (range: 0 through 65535 decimal). Because a WORD is unsigned, its first bit (Most Significant Bit (MSB)) is not reserved for signing.
This type is declared as follows:
typedef unsigned short WORD, *PWORD, *LPWORD;

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? 
## Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

Hex:    0x424d
ASCII:  BM (bitmap!)
This value is stored in "bfType".

## What's the difference between `bfSize` and `biSize`?

bfSize is the total number of bytes in the file (246 for smiley.bmp).
biSize is the number of bytes in the info header (40 for a bitmap).


## What does it mean if `biHeight` is negative?

For uncompressed RGB bitmaps, if biHeight is positive, the bitmap is a bottom-
up DIB with the origin at the lower left corner. If biHeight is negative, the
bitmap is a top-down DIB with the origin at the upper left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

If it can't find the file, it will.

## Why is the third argument to `fread` always `1` in our code?

Because it specifies how many elements you want to read, and we're always
reading a struct so we only need 1 struct.

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

The padding would be 3, because 3 pixels * 3 bytes per pixel * 3 padding = 12,
which is a multiple of 4.

## What does `fseek` do?

It moves to a specific location in a file.

## What is `SEEK_CUR`?

An integer constant which, when used as the 'whence' argument to the
fseek or fseeko function, specifies that the offset provided is relative to
the current file position.

