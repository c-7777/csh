#ifndef _STDLIB_H
# define _STDLIB_H

#define EXIT_SUCCESS
#define EXIT_FAILURE
#define RAND_MAX
#define MB_CUR_MAX
#define NULL

typedef size_t;
typedef wchar_t;
typedef struct div_t div_t;
typedef struct ldiv_t ldiv_t;

double atof(char*);
int atoi(char*);
long atol(char*);
double strtod(char*, char**);
long strtol(char*, char**, int);
unsigned long strtoul(char*, char**, int);
int rand(void);
void srand(unsigned int);
void *calloc(size_t, size_t);
void free(void*);
void *malloc(size_t);
void *realloc(void*, size_t);
void abort(void);
int atexit(void (*)(void));
void exit(int);
char *getenv(char*);
int system(char*);
void *bsearch(void*, void*, size_t, size_t, int (*)(void*, void*));
void qsort(void*, size_t, size_t, int (*)(void*, void*));
int abs(int);
long int labs(long int);
div_t div(int, int);
ldiv_t ldiv(long int, long int);
void free_sized(void*, size_t); /*C23*/
void free_aligned_sized(void*, size_t, size_t); /*C23*/
size_t memalignment(void*); /*C23*/

struct div_t {
  int quot;
  int rem;
};
struct ldiv_t {
  long quot;
  long rem;
};

#endif /* _STDLIB_H */
