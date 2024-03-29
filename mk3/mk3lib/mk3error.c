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

#include "mk3error.h"
#include "mk3_common.h"
#include "mk3lib.h"

#include <stdio.h>

static const char *const _mk3array_errors[] = {
  "All ok",
  "Error during capture",
  "Invalid value for \"req data frame per buffer\"",
  "Invalid value for \'megabytes\'",
  "Null value for one handler",
  "Problem allocating memory", 
  "Could not create socket",
  "Could not bind socket",
  "Destination IP error",
  "Operation does not follow authorized order",
  "Error sending data to Mk3", 
  "Error receiving data from Mk3",
  "Unexpected data / do not know how to parse",
  "Error with \'speed\' value",
  "Error with \'slave\' value",
  "Error with \'id\' value",
  "Error with \'prom_nb\' value",
  "Error with value of \"network data frame number\"",
  "Error with value of \"frames to drop\"",
  "Error with value of \"sample delay\"",
  "Internal error",
  "Error with value of \"display warnings\"",
  "Too many cursors created",
  "Value of \'req data frame per buffer\' not a multiple of the value given to the \'mk3array_create\' function",
  "Error working with this cursor",
  "Error reading from normalization files",
};

void mk3array_init_mk3error(mk3error *err)
{
  err->error_code = MK3_OK;
}

void mk3array_perror(const mk3error *err, const char *comment)
{
  if(err->error_code <0 || (err->error_code > (sizeof(_mk3array_errors)/sizeof(_mk3array_errors[0]))))
    fprintf(stderr, "%s: unknown error\n", comment);
  else
    fprintf(stderr, "%s: %s\n", comment, _mk3array_errors[err->error_code]);
}

int mk3array_check_mk3error(mk3error *err)
{
  return (err->error_code == MK3_OK) ? mk3_false : mk3_true;
}
