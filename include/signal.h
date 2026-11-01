#ifndef _SIGNAL_H
# define _SIGNAL_H

#define SIG_DFL
#define SIG_IGN
#define SIG_ERR
#define SIGABRT
#define SIGFPE
#define SIGILL
#define SIGINT
#define SIGSEGV
#define SIGTERM

typedef sig_atomic_t;

void (*signal(int, void (*)(int)))(int);
int raise(int);

#endif /* _SIGNAL_H */
