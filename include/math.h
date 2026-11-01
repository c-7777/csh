#ifndef _MATH_H
# define _MATH_H

#define HUGE_VAL
#define FP_INFINITE /*C99*/
#define FP_NAN /*C99*/
#define FP_NORMAL /*C99*/
#define FP_SUBNORMAL /*C99*/
#define FP_ZERO /*C99*/
#define FP_FAST_FMA /*C99*/
#define FP_FAST_FMAF /*C99*/
#define FP_FAST_FMAL /*C99*/
#define FP_ILOGB0 /*C99*/
#define FP_ILOGBNAN /*C99*/
#define MATH_ERRNO /*C99*/
#define MATH_ERREXCEPT /*C99*/
#define math_errhandling /*C99*/

double acos(double);
double asin(double);
double atan(double);
double atan2(double, double);
double cos(double);
double sin(double);
double tan(double);
double cosh(double);
double sinh(double);
double tanh(double);
double exp(double);
double frexp(double, int *);
double ldexp(double, int);
double log(double);
double log10(double);
double modf(double, double *);
double pow(double, double);
double sqrt(double);
double ceil(double);
double fabs(double);
double floor(double);
double fmod(double, double);
float acosf(float); /*C99*/
long double acosl(long double); /*C99*/
float asinf(float); /*C99*/
long double asinl(long double); /*C99*/
float atanf(float); /*C99*/
long double atanl(long double); /*C99*/
float atan2f(float, float); /*C99*/
long double atan2l(long double, long double); /*C99*/
float cosf(float); /*C99*/
long double cosl(long double); /*C99*/
float sinf(float); /*C99*/
long double sinl(long double); /*C99*/
float tanf(float); /*C99*/
long double tanl(long double); /*C99*/
float acoshf(float); /*C99*/
double acosh(double); /*C99*/
long double acoshl(long double); /*C99*/
float asinhf(float); /*C99*/
double asinh(double); /*C99*/
long double asinhl(long double); /*C99*/
float atanhf(float); /*C99*/
double atanh(double); /*C99*/
long double atanhl(long double); /*C99*/
float coshf(float); /*C99*/
long double coshl(long double); /*C99*/
float sinhf(float); /*C99*/
long double sinhl(long double); /*C99*/
float tanhf(float); /*C99*/
long double tanhl(long double); /*C99*/
float expf(float); /*C99*/
long double expl(long double); /*C99*/
float exp2f(float); /*C99*/
double exp2(double); /*C99*/
long double exp2l(long double); /*C99*/
float expm1f(float); /*C99*/
double expm1(double); /*C99*/
long double expm1l(long double); /*C99*/
float frexpf(float, int*); /*C99*/
long double frexpl(long double, int*); /*C99*/
int ilogbf(float); /*C99*/
int ilogb(double); /*C99*/
int ilogbl(long double); /*C99*/
float ldexpf(float, int); /*C99*/
long double ldexpl(long double, int); /*C99*/
float logf(float); /*C99*/
long double logl(long double); /*C99*/
float log10f(float); /*C99*/
long double log10l(long double); /*C99*/
float log1pf(float); /*C99*/
double log1p(double); /*C99*/
long double log1pl(long double); /*C99*/
float log2f(float); /*C99*/
double log2(double); /*C99*/
long double log2l(long double); /*C99*/
float logbf(float); /*C99*/
double logb(double); /*C99*/
long double logbl(long double); /*C99*/
float modff(float, float*); /*C99*/
long double modfl(long double, long double*); /*C99*/
float scalbnf(float, int); /*C99*/
double scalbn(double, int); /*C99*/
long double scalbnl(long double, int); /*C99*/
float scalblnf(float, long); /*C99*/
double scalbln(double, long); /*C99*/
long double scalblnl(long double, long); /*C99*/
float cbrtf(float); /*C99*/
double cbrt(double); /*C99*/
long double cbrtl(long double); /*C99*/
float fabsf(float); /*C99*/
long double fabsl(long double); /*C99*/
float hypotf(float, float); /*C99*/
double hypot(double, double); /*C99*/
long double hypotl(long double, long double); /*C99*/
float powf(float, float); /*C99*/
long double powl(long double, long double); /*C99*/
float sqrtf(float); /*C99*/
long double sqrtl(long double); /*C99*/
float erff(float); /*C99*/
double erf(double); /*C99*/
long double erfl(long double); /*C99*/
float erfcf(float); /*C99*/
double erfc(double); /*C99*/
long double erfcl(long double); /*C99*/
float lgammaf(float); /*C99*/
double lgamma(double); /*C99*/
long double lgammal(long double); /*C99*/
float tgammaf(float); /*C99*/
double tgamma(double); /*C99*/
long double tgammal(long double); /*C99*/
float ceilf(float); /*C99*/
long double ceill(long double); /*C99*/
float floorf(float); /*C99*/
long double floorl(long double); /*C99*/
float nearbyintf(float); /*C99*/
double nearbyint(double); /*C99*/
long double nearbyintl(long double); /*C99*/
float rintf(float); /*C99*/
double rint(double); /*C99*/
long double rintl(long double); /*C99*/
long lrintf(float); /*C99*/
long lrint(double); /*C99*/
long lrintl(long double); /*C99*/
long long llrintf(float); /*C99*/
long long llrint(double); /*C99*/
long long llrintl(long double); /*C99*/
float roundf(float); /*C99*/
double round(double); /*C99*/
long double roundl(long double); /*C99*/
long lroundf(float); /*C99*/
long lround(double); /*C99*/
long lroundl(long double); /*C99*/
long long llroundf(float); /*C99*/
long long llround(double); /*C99*/
long long llroundl(long double); /*C99*/
float truncf(float); /*C99*/
double trunc(double); /*C99*/
long double truncl(long double); /*C99*/
float fmodf(float, float); /*C99*/
long double fmodl(long double, long double); /*C99*/
float remainderf(float, float); /*C99*/
double remainder(double, double); /*C99*/
long double remainderl(long double, long double); /*C99*/
float remquof(float, float, int*); /*C99*/
double remquo(double, double, int*); /*C99*/
long double remquol(long double, long double, int*); /*C99*/
float copysignf(float, float); /*C99*/
double copysign(double, double); /*C99*/
long double copysignl(long double, long double); /*C99*/
float nanf(char*); /*C99*/
double nan(char*); /*C99*/
long double nanl(char*); /*C99*/
float nextafterf(float, float); /*C99*/
double nextafter(double, double); /*C99*/
long double nextafterl(long double, long double); /*C99*/
float nexttowardf(float, long double); /*C99*/
double nexttoward(double, long double); /*C99*/
long double nexttowardl(long double, long double); /*C99*/
float fdimf(float, float); /*C99*/
double fdim(double, double); /*C99*/
long double fdiml(long double, long double); /*C99*/
float fmaxf(float, float); /*C99*/
double fmax(double, double); /*C99*/
long double fmaxl(long double, long double); /*C99*/
float fminf(float, float); /*C99*/
double fmin(double, double); /*C99*/
long double fminl(long double, long double); /*C99*/
float fmaf(float, float, float); /*C99*/
double fma(double, double, double); /*C99*/
long double fmal(long double, long double, long double); /*C99*/

#endif /* _MATH_H */
