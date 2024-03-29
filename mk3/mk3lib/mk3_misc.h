//========================= Official Notice ===============================
//
// "This software was developed at the National Institute of Standards
// and Technology by employees of the Federal Government in the course of
// their official duties. Pursuant to Title 17 Section 105 of the United
// States Code this software is not subject to copyright protection and
// is in the public domain.
//
// The NIST Data Flow System (NDFS) is an experimental system and is
// offered AS IS. NIST assumes no responsibility whatsoever for its use
// by other parties, and makes no guarantees and NO WARRANTIES, EXPRESS
// OR IMPLIED, about its quality, reliability, fitness for any purpose,
// or any other characteristic.
//
// We would appreciate acknowledgement if the software is used.
//
// This software can be redistributed and/or modified freely provided
// that any derivative works bear some notice that they are derived from
// it, and any modified versions bear some notice that they have been
// modified from the original."
//
//=========================================================================

#ifndef __MK3_MISC_H__
#define __MK3_MISC_H__

/********************/
// Misc functions

// Print current time (with '\n' at the end of line)
char *_mk3array_showtime();

// Greatest Common Denominator
int _mk3array_gcd(int x, int y);

// Least Common Multiple
int _mk3array_lcm(int x, int y);

// Convert a time value to long long int (ns orig)
unsigned long long int _mk3array_uint64ts(unsigned int sec, unsigned int nsec);

#endif
