**7z-memstream** is an extension to the ANSI C subset of the [LZMA SDK](http://www.7-zip.org/sdk.html) to allow processing 7z files located in memory (instead of a 7z file on disk).

Usage
-------
Copy `7zMemInStream.c` and `7zMemInStream.h` to the `C` directory of the LZMA SDK (along with `7z.h` et al.) and configure your makefile/project to include them. Usage is very simple and similar to using the default `CFileInStream`:

```c
void* arcData = ...;   // Data of the 7z archive.
size_t arcSize = ...;  // Size of the 7z archive.
CMemInStream memStream;
MemInStream_Init(&memStream, arcData, arcSize);

// Pass &memStream.s to SzArEx_Open().
```

License
-------
Included files are *public domain*.