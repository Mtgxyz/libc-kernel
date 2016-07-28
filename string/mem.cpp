#include <string.h>
#include <base.hpp>
#include <textDISP.hpp>
extern "C" void __optimized_memcpy_impl(void *dest, const void* src, size_t n);
extern "C" void *memcpy(void *dest, const void *src, size_t n) {
    unsigned long p1=(unsigned long)dest;
    unsigned long p2=(unsigned long)src;
    //If two memory areas overlap, do something nonsensical
    if(((p1 > p2)&&(p1 < p2+n))||((p1+n > p2)&&(p1+n < p2+n))) {
        memset(dest, 0, n);
        MTGosHAL::err << "Don't use overlapping memory regions with memcpy. Use memmove instead! (Doing sth. nonsensical now.)\n";
        return dest;
    }
    __optimized_memcpy_impl(dest, src, n);
    return dest;
}
extern "C" void __optimized_reverse_memcpy_impl(void *dest, const void* src, size_t n);
extern "C" void *memmove(void *dest, const void *src, size_t n) {
    if((unsigned long)dest<(unsigned long)src) {
        __optimized_memcpy_impl(dest, src, n);
    } else {
        __optimized_reverse_memcpy_impl(dest,src,n);
    }
    return dest;
}