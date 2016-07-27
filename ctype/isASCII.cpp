#include <ctype.h>
#include "_ctype.h"
extern "C" isascii(int c) {
    return c >= 0 && c < 128;
}