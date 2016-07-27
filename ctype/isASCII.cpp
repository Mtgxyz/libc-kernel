#include <ctype.h>
#include "_ctype.h"
extern "C" isascii(int c) {
    assert(c<256);
    return c >= 0 && c < 128;
}