#ifndef _FENV_H
# define _FENV_H

#define FE_DIVBYZERO /*C99*/
#define FE_INEXACT /*C99*/
#define FE_INVALID /*C99*/
#define FE_OVERFLOW /*C99*/
#define FE_UNDERFLOW /*C99*/
#define FE_ALL_EXCEPT /*C99*/
#define FE_DOWNWARD /*C99*/
#define FE_TONEAREST /*C99*/
#define FE_TOWARDZERO /*C99*/
#define FE_UPWARD /*C99*/
#define FE_DFL_ENV /*C99*/
#define FE_TONEARESTFROMZERO /*C23*/
#define FE_DFL_MODE /*C23*/

typedef fenv_t; /*C99*/
typedef fexcept_t; /*C99*/
typedef femode_t; /*C23*/

int feclearexcept(int); /*C99*/
int fegetexceptflag(fexcept_t*, int); /*C99*/
int feraiseexcept(int); /*C99*/
int fesetexceptflag(fexcept_t*, int); /*C99*/
int fetestexcept(int); /*C99*/
int fegetround(void); /*C99*/
int fesetround(int); /*C99*/
int fegetenv(fenv_t*); /*C99*/
int feholdexcept(fenv_t*); /*C99*/
int fesetenv(fenv_t*); /*C99*/
int feupdateenv(fenv_t*); /*C99*/
int fesetexcept(int); /*C23*/
int fetestexceptflag(fexcept_t*, int); /*C23*/
int fegetmode(femode_t*); /*C23*/
int fesetmode(femode_t*); /*C23*/

#endif /* _FENV_H */
