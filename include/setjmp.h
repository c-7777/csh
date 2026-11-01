#ifndef _SETJMP_H
# define _SETJMP_H

typedef jmp_buf;

int setjmp(jmp_buf);
void longjmp(jmp_buf, int);

#endif /* _SETJMP_H */
