#include <ctype.h>
#include "_ctype.h"
extern "C" int toupper(int c) {
    if(isupper(c))
        return c;
    return c+0x20;
}
extern "C" int tolower(int c) {
    if(islower(c))
        return c;
    return c-0x20;
}