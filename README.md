# Redbricks
 Simple C library to load and generate the `Redbricks.bmp` file described on [Microsoft Docs](https://docs.microsoft.com/pt-br/windows/win32/gdi/bitmap-storage?redirectedfrom=MSDN).

I was frustrated that I couldn't find the original `Redbricks.bmp` file. 

So I used my own (yet) unfinished `bmp.h` Bitmap library to load it and work with it. 



## Download `Redbricks.bmp` original file

Just download it from [here](https://github.com/niloedson/Redbricks/blob/main/Redbricks.bmp).



## `Redbricks.bmp` hexadecimal output

* `Redbricks.bmp` hexadecimal output given is:

```
0000    42 4d 76 02 00 00 00 00  00 00 76 00 00 00 28 00 
0010    00 00 20 00 00 00 20 00  00 00 01 00 04 00 00 00 
0020    00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00 
0030    00 00 00 00 00 00 00 00  00 00 00 00 80 00 00 80 
0040    00 00 00 80 80 00 80 00  00 00 80 00 80 00 80 80 
0050    00 00 80 80 80 00 c0 c0  c0 00 00 00 ff 00 00 ff 
0060    00 00 00 ff ff 00 ff 00  00 00 ff 00 ff 00 ff ff 
0070    00 00 ff ff ff 00 00 00  00 00 00 00 00 00 00 00 
0080    00 00 00 00 00 00 00 00  00 00 00 00 00 00 09 00 
0090    00 00 00 00 00 00 11 11  01 19 11 01 10 10 09 09 
00a0    01 09 11 11 01 90 11 01  19 09 09 91 11 10 09 11 
00b0    09 11 19 10 90 11 19 01  19 19 10 10 11 10 09 01 
00c0    91 10 91 09 10 10 90 99  11 11 11 11 19 00 09 01 
00d0    91 01 01 19 00 99 11 10  11 91 99 11 09 90 09 91 
00e0    01 11 11 11 91 10 09 19  01 00 11 90 91 10 09 01 
00f0    11 99 10 01 11 11 91 11  11 19 10 11 99 10 09 10 
0100    01 11 11 11 19 10 11 09  09 10 19 10 10 10 09 01 
0110    11 19 00 01 10 19 10 11  11 01 99 01 11 90 09 19 
0120    11 91 11 91 01 11 19 10  99 00 01 19 09 10 09 19 
0130    10 91 11 01 11 11 91 01  91 19 11 00 99 90 09 01 
0140    01 99 19 01 91 10 19 91  91 09 11 99 11 10 09 91 
0150    11 10 11 91 99 10 90 11  01 11 11 19 11 90 09 11 
0160    00 19 10 11 01 11 99 99  99 99 99 99 99 99 09 99 
0170    99 99 99 99 99 99 00 00  00 00 00 00 00 00 00 00 
0180    00 00 00 00 00 00 90 00  00 00 00 00 00 00 00 00 
0190    00 00 00 00 00 00 99 11  11 11 19 10 19 19 11 09 
01a0    10 90 91 90 91 00 91 19  19 09 01 10 09 01 11 11 
01b0    91 11 11 11 10 00 91 11  01 19 10 11 10 01 01 11 
01c0    90 11 11 11 91 00 99 09  19 10 11 90 09 90 91 01 
01d0    19 09 91 11 01 00 90 10  19 11 00 11 11 00 10 11 
01e0    01 10 11 19 11 00 90 19  10 91 01 90 19 99 00 11 
01f0    91 01 11 01 91 00 99 09  09 01 10 11 91 01 10 91 
0200    99 11 10 90 91 00 91 11  00 10 11 01 10 19 19 09 
0210    10 00 99 01 01 00 91 01  19 91 19 91 11 09 10 11 
0220    00 91 00 10 90 00 99 01  11 10 09 10 10 19 09 01 
0230    91 90 11 09 11 00 90 99  11 11 11 90 19 01 19 01 
0240    91 01 01 19 09 00 91 10  11 91 99 09 09 90 11 91 
0250    01 19 11 11 91 00 91 19  01 00 11 00 91 10 11 01 
0260    11 11 10 01 11 00 99 99  99 99 99 99 99 99 99 99 
0270    99 99 99 99 99 90
```



## Getting `Redbricks.bmp` as an `unsigned char` array

I also just used the `xxd` command to generate an additional `Redbricks_bmp.h` file, so you can load it right away as an `unsigned char` array.

``` bash
xxd -i Redbricks.bmp > Redbricks_bmp.h
```

You can also just download it from [here](https://github.com/niloedson/Redbricks/blob/main/Redbricks_bmp.h).



## `RedBricks.bmp` file binary content

### BITMAPFILEHEADER

```
42 4d 		- bfType 		- "BM"
76 02 00 00 - bfSize 		- 630 (  BITMAPFILEHEADER 
                                   + BITMAPINFOHEADER 
                                   + RGBQUAD 
                                   + PIXELARRAY)
00 00  		- bfReserved1 	- 0
00 00 		- bfReserved2 	- 0
76 00 00 00 - bfOffBits 	- 118
```

### BITMAPINFOHEADER

```
28 00 00 00 - biSize 			- 40
20 00 00 00 - biWidth 			- 32
20 00 00 00 - biHeight 			- 32
01 00 		- biPlanes 			- 1
04 00 		- biBitCount 		- 4
00 00 00 00 - biCompression 	- 0 (BI_RGB)
00 00 00 00 - biSizeImage 		- 0 (May be set to zero for BI_RGB bitmaps)
00 00 00 00 - biXPelsPerMeter 	- 0 (unapplicable)
00 00 00 00 - biYPelsPerMeter 	- 0 (unapplicable)
00 00 00 00 - biClrUsed 		- 0 (Uses the maximum number of colors 
                                     corresponding to the 'biBitCount' 
                                     value for the compression mode 
                                     specified by 'biCompression')
00 00 00 00 - biClrImportant 	- 0 (How many color indexes required 
                                     for displaying the bitmap. In this 
                                     case, all colors are required)
```

### RGBQUAD

Reachable after `bfOffBits` offset.

```
00 00 00 00 - 0 - Black
00 00 80 00 - 1 - Dark Red
00 80 00 00 - 2 - Dark Green
00 80 80 00 - 3 - Dark Yellow
80 00 00 00 - 4 - Dark Blue
80 00 80 00 - 5 - Dark Magenta
80 80 00 00 - 6 - Dark Cyan
80 80 80 00 - 7 - Dark Gray
c0 c0 c0 00 - 8 - Light Gray
00 00 ff 00 - 9 - Light Red
00 ff 00 00 - A - Light Green
00 ff ff 00 - B - Light Yellow
ff 00 00 00 - C - Light Blue
ff 00 ff 00 - D - Light Magenta
ff ff 00 00 - E - Light Cyan
ff ff ff 00 - F - White
```

### PIXELARRAY

```
00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00  09 00 00 00 00 00 00 00 
11 11 01 19 11 01 10 10  09 09 01 09 11 11 01 90 
11 01 19 09 09 91 11 10  09 11 09 11 19 10 90 11 
19 01 19 19 10 10 11 10  09 01 91 10 91 09 10 10 
90 99 11 11 11 11 19 00  09 01 91 01 01 19 00 99 
11 10 11 91 99 11 09 90  09 91 01 11 11 11 91 10 
09 19 01 00 11 90 91 10  09 01 11 99 10 01 11 11 
91 11 11 19 10 11 99 10  09 10 01 11 11 11 19 10 
11 09 09 10 19 10 10 10  09 01 11 19 00 01 10 19 
10 11 11 01 99 01 11 90  09 19 11 91 11 91 01 11 
19 10 99 00 01 19 09 10  09 19 10 91 11 01 11 11 
91 01 91 19 11 00 99 90  09 01 01 99 19 01 91 10 
19 91 91 09 11 99 11 10  09 91 11 10 11 91 99 10 
90 11 01 11 11 19 11 90  09 11 00 19 10 11 01 11 
99 99 99 99 99 99 99 99  09 99 99 99 99 99 99 99 
00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00 
90 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00 
99 11 11 11 19 10 19 19  11 09 10 90 91 90 91 00 
91 19 19 09 01 10 09 01  11 11 91 11 11 11 10 00 
91 11 01 19 10 11 10 01  01 11 90 11 11 11 91 00 
99 09 19 10 11 90 09 90  91 01 19 09 91 11 01 00 
90 10 19 11 00 11 11 00  10 11 01 10 11 19 11 00 
90 19 10 91 01 90 19 99  00 11 91 01 11 01 91 00 
99 09 09 01 10 11 91 01  10 91 99 11 10 90 91 00 
91 11 00 10 11 01 10 19  19 09 10 00 99 01 01 00 
91 01 19 91 19 91 11 09  10 11 00 91 00 10 90 00 
99 01 11 10 09 10 10 19  09 01 91 90 11 09 11 00 
90 99 11 11 11 90 19 01  19 01 91 01 01 19 09 00 
91 10 11 91 99 09 09 90  11 91 01 19 11 11 91 00 
91 19 01 00 11 00 91 10  11 01 11 11 10 01 11 00 
99 99 99 99 99 99 99 99  99 99 99 99 99 99 99 90 
```

