#ifndef _THREADS_H
# define _THREADS_H

#define thread_local /*C11*/
#define ONCE_FLAG_INIT /*C11*/
#define TSS_DTOR_ITERATIONS /*C11*/
#define mtx_plain /*C11*/
#define mtx_recursive /*C11*/
#define mtx_timed /*C11*/
#define thrd_busy /*C11*/
#define thrd_error /*C11*/
#define thrd_nomem /*C11*/
#define thrd_success /*C11*/
#define thrd_timedout /*C11*/

typedef thrd_t; /*C11*/
typedef thrd_start_t; /*C11*/
typedef mtx_t; /*C11*/
typedef cnd_t; /*C11*/
typedef tss_t; /*C11*/
typedef tss_dtor_t; /*C11*/
typedef once_flag; /*C11*/

void call_once(once_flag*, void (*)(void)); /*C11*/
int cnd_broadcast(cnd_t*); /*C11*/
void cnd_destroy(cnd_t*); /*C11*/
int cnd_init(cnd_t*); /*C11*/
int cnd_signal(cnd_t*); /*C11*/
int cnd_timedwait(cnd_t*, mtx_t*, struct timespec*); /*C11*/
int cnd_wait(cnd_t*, mtx_t*); /*C11*/
void mtx_destroy(mtx_t*); /*C11*/
int mtx_init(mtx_t*, int); /*C11*/
int mtx_lock(mtx_t*); /*C11*/
int mtx_timedlock(mtx_t*, struct timespec*); /*C11*/
int mtx_trylock(mtx_t*); /*C11*/
int mtx_unlock(mtx_t*); /*C11*/
int thrd_create(thrd_t*, thrd_start_t, void*); /*C11*/
thrd_t thrd_current(void); /*C11*/
int thrd_detach(thrd_t); /*C11*/
int thrd_equal(thrd_t, thrd_t); /*C11*/
void thrd_exit(int); /*C11*/
int thrd_join(thrd_t, int*); /*C11*/
int thrd_sleep(struct timespec*, struct timespec*); /*C11*/
void thrd_yield(void); /*C11*/
int tss_create(tss_t*, tss_dtor_t); /*C11*/
void tss_delete(tss_t); /*C11*/
void *tss_get(tss_t); /*C11*/
int tss_set(tss_t, void*); /*C11*/

#endif /* _THREADS_H */
