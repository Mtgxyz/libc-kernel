#include <ctype.h>
#include "_ctype.h"
#include <assert.h>
extern "C" isgraph(int c) {
    assert(c<256);
    return ascii_table[c] & (SYMBOL|UPPER|LOWER|NUMBER);
}
extern "C" isprint(int c) {
    assert(c<256);
    return ascii_table[c] & (SYMBOL|UPPER|LOWER|NUMBER|SPACE);
}