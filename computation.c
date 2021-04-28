#include "computation.h"
#include <stdio.h> 

Bool validateReading(int * input_set , int size)
 { 
   Bool readingisvalid = TRUE;
   
   if(size == 0)
   { 
    readingisvalid = FALSE;
   } 
  return readingisvalid;
 }
