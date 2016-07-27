#ifndef __SIGNAL_H
#define __SIGNAL_H
#ifdef __cplusplus
extern "C" {
#endif
#define SIG_DFL &__signal_h_sig_dfl
#define SIG_ERR &__signal_h_sig_err
#define SIG_IGN  &__signal_h_sig_ign
#define SIGINT 1
#define SIGILL 2
#define SIGABRT 3
#define SIGFPE 4
#define SIGSEGV 5
#define SIGTERM 6
#ifdef __cplusplus
}
#endif
#endif