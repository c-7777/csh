#ifndef _WCTYPE_H
# define _WCTYPE_H

#define WEOF /*C95*/

typedef wint_t; /*C95*/
typedef wctype_t; /*C95*/
typedef wctrans_t; /*C95*/

int iswalnum(wint_t); /*C95*/
int iswalpha(wint_t); /*C95*/
int iswblank(wint_t); /*C99*/
int iswcntrl(wint_t); /*C95*/
int iswdigit(wint_t); /*C95*/
int iswgraph(wint_t); /*C95*/
int iswlower(wint_t); /*C95*/
int iswprint(wint_t); /*C95*/
int iswpunct(wint_t); /*C95*/
int iswspace(wint_t); /*C95*/
int iswupper(wint_t); /*C95*/
int iswxdigit(wint_t); /*C95*/
int iswctype(wint_t, wctype_t); /*C95*/
wctype_t wctype(char*); /*C95*/
wint_t towlower(wint_t); /*C95*/
wint_t towupper(wint_t); /*C95*/
wint_t towctrans(wint_t, wctrans_t); /*C95*/
wctrans_t wctrans(char*); /*C95*/

#endif /* _WCTYPE_H */
