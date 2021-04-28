#include "computation.h"
#include <stdio.h> 

Bool validateReading(int * input_set , int size)
 { 
   Bool readingisvalid = TRUE;
   
   if((size == 0)||(input_set == NULL))
   { 
    readingisvalid = FALSE;
   } 
  return readingisvalid;
 }
