#ifndef _WCHAR_H
# define _WCHAR_H

#define WEOF /*C95*/
#define WCHAR_MIN /*C95*/
#define WCHAR_MAX /*C95*/
#define NULL

typedef wchar_t; /*C95*/
typedef wint_t; /*C95*/
typedef size_t; /*C95*/
typedef mbstate_t; /*C95*/

wchar_t *wcscpy(wchar_t*, wchar_t*); /*C95*/
wchar_t *wcsncpy(wchar_t*, wchar_t*, size_t); /*C95*/
wchar_t *wcscat(wchar_t*, wchar_t*); /*C95*/
wchar_t *wcsncat(wchar_t*, wchar_t*, size_t); /*C95*/
int wcscmp(wchar_t*, wchar_t*); /*C95*/
int wcsncmp(wchar_t*, wchar_t*, size_t); /*C95*/
int wcscoll(wchar_t*, wchar_t*); /*C95*/
size_t wcsxfrm(wchar_t*, wchar_t*, size_t); /*C95*/
wchar_t *wcschr(wchar_t*, wint_t); /*C95*/
wchar_t *wcsrchr(wchar_t*, wint_t); /*C95*/
size_t wcsspn(wchar_t*, wchar_t*); /*C95*/
size_t wcscspn(wchar_t*, wchar_t*); /*C95*/
wchar_t *wcspbrk(wchar_t*, wchar_t*); /*C95*/
wchar_t *wcsstr(wchar_t*, wchar_t*); /*C95*/
wchar_t *wcstok(wchar_t*, wchar_t*, wchar_t**); /*C95*/
size_t wcslen(wchar_t*); /*C95*/
wchar_t *wmemcpy(wchar_t*, wchar_t*, size_t); /*C95*/
wchar_t *wmemmove(wchar_t*, wchar_t*, size_t); /*C95*/
wchar_t *wmemset(wchar_t*, wchar_t, size_t); /*C95*/
int wmemcmp(wchar_t*, wchar_t*, size_t); /*C95*/
wchar_t *wmemchr(wchar_t*, wchar_t, size_t); /*C95*/
wint_t btowc(int); /*C95*/
int wctob(wint_t); /*C95*/
int mbsinit(mbstate_t*); /*C95*/
size_t mbrlen(char*, size_t, mbstate_t*); /*C95*/
size_t mbrtowc(wchar_t*, char*, size_t, mbstate_t*); /*C95*/
size_t wcrtomb(char*, wchar_t, mbstate_t*); /*C95*/
size_t mbsrtowcs(wchar_t*, char**, size_t, mbstate_t*); /*C95*/
size_t wcsrtombs(char*, wchar_t**, size_t, mbstate_t*); /*C95*/
int fwprintf(FILE*, wchar_t*, ...); /*C95*/
int fwscanf(FILE*, wchar_t*, ...); /*C95*/
int swprintf(wchar_t*, size_t, wchar_t*, ...); /*C95*/
int swscanf(wchar_t*, wchar_t*, ...); /*C95*/
int vfwprintf(FILE*, wchar_t*, va_list); /*C95*/
int vfwscanf(FILE*, wchar_t*, va_list); /*C99*/
int vswprintf(wchar_t*, size_t, wchar_t*, va_list); /*C95*/
int vswscanf(wchar_t*, wchar_t*, va_list); /*C99*/
int vwprintf(wchar_t*, va_list); /*C95*/
int vwscanf(wchar_t*, va_list); /*C99*/
int wprintf(wchar_t*, ...); /*C95*/
int wscanf(wchar_t*, ...); /*C95*/
wint_t fgetwc(FILE*); /*C95*/
wchar_t *fgetws(wchar_t*, int, FILE*); /*C95*/
wint_t fputwc(wint_t, FILE*); /*C95*/
int fputws(wchar_t*, FILE*); /*C95*/
int fwide(FILE*, int); /*C95*/
wint_t getwc(FILE*); /*C95*/
wint_t getwchar(void); /*C95*/
wint_t putwc(wint_t, FILE*); /*C95*/
wint_t putwchar(wint_t); /*C95*/
wint_t ungetwc(wint_t, FILE*); /*C95*/
double wcstod(wchar_t*, wchar_t**); /*C99*/
float wcstof(wchar_t*, wchar_t**); /*C99*/
long double wcstold(wchar_t*, wchar_t**); /*C99*/
long int wcstol(wchar_t*, wchar_t**, int); /*C99*/
long long int wcstoll(wchar_t*, wchar_t**, int); /*C99*/
unsigned long int wcstoul(wchar_t*, wchar_t**, int); /*C99*/
unsigned long long int wcstoull(wchar_t*, wchar_t**, int); /*C99*/

#endif /* _WCHAR_H */
