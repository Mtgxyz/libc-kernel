#ifndef __STRING_H
#define __STRING_H
#ifdef __cplusplus
extern "C" {
#define NULL nullptr
#else
#define NULL 0
#endif
typedef unsigned long size_t;
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *, int c, size_t n);
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);
char *strchr(const char *, int c);
char *strrchr(const char *, int c);
int strcmp(const char *, const char *);
int strncmp(const char *, const char *, size_t n);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
char *strerror(int);
size_t strlen(const char *);
size_t strspn(const char *, const char *accept);
size_t strcspn(const char *, const char *reject);
char *strpbrk(const char *, const char *accept);
char *strstr(const char *haystack, const char *needle);
char *strtok(char *, const char * delim);
#ifdef __cplusplus
}
#endif
#endif