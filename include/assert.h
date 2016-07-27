#ifndef __ASSERT_H
#define __ASSERT_H
#ifdef __cplusplus
extern "C" {
#endif
void __assert(const char *msg, const char *file, int line, int res);
#ifdef NDEBUG
#define assert(EX)
#else
#define assert(EX) (void)(__assert(#EX, __FILE__, __LINE__, EX))
#endif
#ifdef __cplusplus
}
#endif
#endif