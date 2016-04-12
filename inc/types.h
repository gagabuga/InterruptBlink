/**************************************************************************
*
*  Description: Some type definitions
*
*  Copyright (c) 2005-2009 by Govorukhin Alexey
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*  1. Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the
*     documentation and/or other materials provided with the distribution.
*  3. Neither the name of the author nor the names of its contributors may
*     be used to endorse or promote products derived from this software
*     without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
*  THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
*  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
*  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
*  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
*  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
*  SUCH DAMAGE.
*
***************************************************************************
*  Filename: types.h
***************************************************************************
**************************************************************************/
#if !defined(__types_h)
#define __types_h


/**************************************************************************
* definitions
**************************************************************************/

//
// easy to type types, type
//
typedef unsigned char  u08;
typedef unsigned short u16;
typedef unsigned long  u32;

typedef char  s08;
typedef short s16;
typedef long  s32;

typedef u16 hsize_t;

struct u16bytes
{
	u08 low, high;
};

union u16convert
{
	u16 value;
	struct u16bytes bytes;
};
struct u32bytes
{
	u08 byte1, byte2, byte3, byte4;
};

struct u32words
{
	u16 low, high;
};

union u32convert 
{
	u32 value;
	struct u32bytes bytes;
	struct u32words words;
};

#define WORD    u16
#define BYTE    u08
#define DWORD   u32

//#define NULL    0

#define ON  1
#define OFF 0

#define TRUE  1
#define FALSE 0

#define true  1
#define false 0

typedef void * HANDLE;


/**************************************************************************
* declarations
**************************************************************************/
 

/**************************************************************************
* function prototypes
**************************************************************************/



#endif /* __types_h  */
/*********************************** EOF *********************************/
