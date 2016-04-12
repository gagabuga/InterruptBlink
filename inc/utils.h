/**************************************************************************
*
*  Description: Useful functions header
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
*
***************************************************************************
*  Filename: utils.h
***************************************************************************
*
**************************************************************************/
#if !defined(__utils_h)
#define __utils_h




/**************************************************************************
* definitions
**************************************************************************/

 // MACRO: Switch two values without a third temporary variable
#define SWAP(a,b) do { (b)^=(a); (a)^=(b); (b)^=(a); } while (0)

#define BCD(a) ((((a) / 10) << 4) | ((a) % 10))

#define PRG_RDB     pgm_read_byte

#define _NOP()     asm volatile ("nop;"::);

#define DEBUG uart_putstr

#define DEBUG_OUTP(fmt, args...) {\
 strcpy_P(&szBuffer[0], fmt);\
 sprintf(&szBuffer[350], &szBuffer[0], ##args);\
 DEBUG(&szBuffer[350]);\
}

#define HIBYTE(_x) (BYTE)((_x >> 8) & 0x00FF)
#define LOBYTE(_x) (BYTE)(_x & 0x00FF)




/**************************************************************************
* declarations
**************************************************************************/


/**************************************************************************
* function prototypes
**************************************************************************/


void write_byte_spi(u08 data);

u08 read_byte_spi(void);

void Beep(u32 wTime);
void StrToUpper(u08 * Dst, u08 const * Str);

int UpperCase(int bSymb);

unsigned char bin2ascii(unsigned char bin);

u16 GetMultipl(u08 bCurPos);

void PowerOff(u08 On);
void GoSleep(void);


#endif /* __utils_h  */
/*********************************** EOF *********************************/
