#include <ctype.h>
#include "_ctype.h"
#include <assert.h>
extern "C" int isupper(int c) {
    assert(c<256);
    return ascii_table[c] & (UPPER);
}