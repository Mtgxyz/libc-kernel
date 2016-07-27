#ifndef __CTYPE_H
#define __CTYPE_H
#ifdef __cplusplus
extern "C" {
#endif
int isalnum(int);
int isalpha(int);
int isascii(int);
int isblank(int);
int iscntrl(int);
int isdigit(int);
int islower(int);
int isgraph(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int toupper(int);
int tolower(int);
#ifdef __cplusplus
}
#endif
#endif