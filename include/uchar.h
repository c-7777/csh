#ifndef _UCHAR_H
# define _UCHAR_H

#define __STDC_UTF_16__ /*C11*/
#define __STDC_UTF_32__ /*C11*/

typedef char16_t; /*C11*/
typedef char32_t; /*C11*/
typedef char8_t; /*C23*/
typedef mbstate_t; /*C11*/
typedef size_t; /*C11*/

size_t mbrtoc16(char16_t*, char*, size_t, mbstate_t*); /*C11*/
size_t c16rtomb(char*, char16_t, mbstate_t*); /*C11*/
size_t mbrtoc32(char32_t*, char*, size_t, mbstate_t*); /*C11*/
size_t c32rtomb(char*, char32_t, mbstate_t*); /*C11*/
size_t mbrtoc8(char8_t*, char*, size_t, mbstate_t*); /*C23*/
size_t c8rtomb(char*, char8_t, mbstate_t*); /*C23*/

#endif /* _UCHAR_H */
