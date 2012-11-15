/* 7zMemInStream.h -- Memory input stream
** 2012 - Birunthan Mohanathas
**
** This file is public domain.
*/

#ifndef __7Z_MEMINSTREAM_H
#define __7Z_MEMINSTREAM_H

#include "Types.h"

typedef struct
{
  ILookInStream s;
  Byte *begin;
  Byte *pos;
  Byte *end;
} CMemInStream;

void MemInStream_Init(CMemInStream *p, void *begin, size_t length);

#endif
