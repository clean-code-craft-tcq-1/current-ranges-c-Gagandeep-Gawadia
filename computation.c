#include "computation.h"
#include <stdio.h> 

Bool valid_flag validateReading(int * input_set , int size)
 { 
   Bool readingisvalid = TRUE;
   
   if(size == 0)
   { 
    readingisvalid = FALSE;
   } 
  return readingisvalid;
 }
