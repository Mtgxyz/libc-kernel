#include "_ctype.h"
int ascii_table[256] {
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    SPACE  ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,
    OPEN   ,CLOSE  ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,
    NUMBER ,NUMBER ,NUMBER ,NUMBER ,NUMBER ,NUMBER ,NUMBER ,NUMBER ,
    NUMBER ,NUMBER ,SYMBOL ,SYMBOL ,OPEN   ,SYMBOL ,CLOSE  ,SYMBOL ,
    SYMBOL ,HEXNUM ,HEXNUM ,HEXNUM ,HEXNUM ,HEXNUM ,HEXNUM ,UPPER  ,
    UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,
    UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,
    UPPER  ,UPPER  ,UPPER  ,OPEN   ,SYMBOL ,CLOSE  ,SYMBOL ,SYMBOL ,
    SYMBOL ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,
    LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,
    LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,
    LOWER  ,LOWER  ,LOWER  ,OPEN   ,SYMBOL ,CLOSE  ,SYMBOL ,CONTROL,
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,CONTROL,
    SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,
    SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,
    SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,
    SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,SYMBOL ,
    UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,
    UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,
    UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,SYMBOL ,
    UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,UPPER  ,LOWER  ,
    LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,
    LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,
    LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,SYMBOL ,
    LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  ,LOWER  
};