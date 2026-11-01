#ifndef _STDATOMIC_H
# define _STDATOMIC_H

#define ATOMIC_BOOL_LOCK_FREE /*C11*/
#define ATOMIC_CHAR_LOCK_FREE /*C11*/
#define ATOMIC_CHAR16_T_LOCK_FREE /*C11*/
#define ATOMIC_CHAR32_T_LOCK_FREE /*C11*/
#define ATOMIC_WCHAR_T_LOCK_FREE /*C11*/
#define ATOMIC_SHORT_LOCK_FREE /*C11*/
#define ATOMIC_INT_LOCK_FREE /*C11*/
#define ATOMIC_LONG_LOCK_FREE /*C11*/
#define ATOMIC_LLONG_LOCK_FREE /*C11*/
#define ATOMIC_POINTER_LOCK_FREE /*C11*/
#define ATOMIC_CHAR8_T_LOCK_FREE /*C23*/
#define ATOMIC_VAR_INIT /*C11*/
#define ATOMIC_FLAG_INIT /*C11*/

typedef atomic_bool; /*C11*/
typedef atomic_char; /*C11*/
typedef atomic_schar; /*C11*/
typedef atomic_uchar; /*C11*/
typedef atomic_short; /*C11*/
typedef atomic_ushort; /*C11*/
typedef atomic_int; /*C11*/
typedef atomic_uint; /*C11*/
typedef atomic_long; /*C11*/
typedef atomic_ulong; /*C11*/
typedef atomic_llong; /*C11*/
typedef atomic_ullong; /*C11*/
typedef atomic_char16_t; /*C11*/
typedef atomic_char32_t; /*C11*/
typedef atomic_char8_t; /*C23*/
typedef atomic_wchar_t; /*C11*/
typedef atomic_int_least8_t; /*C11*/
typedef atomic_uint_least8_t; /*C11*/
typedef atomic_int_least16_t; /*C11*/
typedef atomic_uint_least16_t; /*C11*/
typedef atomic_int_least32_t; /*C11*/
typedef atomic_uint_least32_t; /*C11*/
typedef atomic_int_least64_t; /*C11*/
typedef atomic_uint_least64_t; /*C11*/
typedef atomic_int_fast8_t; /*C11*/
typedef atomic_uint_fast8_t; /*C11*/
typedef atomic_int_fast16_t; /*C11*/
typedef atomic_uint_fast16_t; /*C11*/
typedef atomic_int_fast32_t; /*C11*/
typedef atomic_uint_fast32_t; /*C11*/
typedef atomic_int_fast64_t; /*C11*/
typedef atomic_uint_fast64_t; /*C11*/
typedef atomic_intptr_t; /*C11*/
typedef atomic_uintptr_t; /*C11*/
typedef atomic_size_t; /*C11*/
typedef atomic_ptrdiff_t; /*C11*/
typedef atomic_intmax_t; /*C11*/
typedef atomic_uintmax_t; /*C11*/
typedef struct atomic_flag atomic_flag; /*C11*/
typedef enum memory_order memory_order; /*C11*/

void atomic_thread_fence(memory_order); /*C11*/
void atomic_signal_fence(memory_order); /*C11*/
int atomic_is_lock_free(void*); /*C11*/
void atomic_store(void*, void*); /*C11*/
void atomic_store_explicit(void*, void*, memory_order); /*C11*/
void atomic_load(void*, void*); /*C11*/
void atomic_load_explicit(void*, void*, memory_order); /*C11*/
void atomic_exchange(void*, void*, void*); /*C11*/
void atomic_exchange_explicit(void*, void*, void*, memory_order); /*C11*/
int atomic_compare_exchange_strong(void*, void*, void*); /*C11*/
int atomic_compare_exchange_strong_explicit(void*, void*, void*, memory_order, memory_order); /*C11*/
int atomic_compare_exchange_weak(void*, void*, void*); /*C11*/
int atomic_compare_exchange_weak_explicit(void*, void*, void*, memory_order, memory_order); /*C11*/
void atomic_fetch_add(void*, void*); /*C11*/
void atomic_fetch_add_explicit(void*, void*, memory_order); /*C11*/
void atomic_fetch_sub(void*, void*); /*C11*/
void atomic_fetch_sub_explicit(void*, void*, memory_order); /*C11*/
void atomic_fetch_or(void*, void*); /*C11*/
void atomic_fetch_or_explicit(void*, void*, memory_order); /*C11*/
void atomic_fetch_xor(void*, void*); /*C11*/
void atomic_fetch_xor_explicit(void*, void*, memory_order); /*C11*/
void atomic_fetch_and(void*, void*); /*C11*/
void atomic_fetch_and_explicit(void*, void*, memory_order); /*C11*/
void atomic_flag_test_and_set(atomic_flag*); /*C11*/
void atomic_flag_test_and_set_explicit(atomic_flag*, memory_order); /*C11*/
void atomic_flag_clear(atomic_flag*); /*C11*/
void atomic_flag_clear_explicit(atomic_flag*, memory_order); /*C11*/
void atomic_init(void*, void*); /*C11*/
void kill_dependency(void*); /*C11*/

#endif /* _STDATOMIC_H */
