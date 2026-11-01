#ifndef _TIME_H
# define _TIME_H

#define CLOCKS_PER_SEC
#define NULL

typedef clock_t;
typedef time_t;
typedef size_t;

clock_t clock(void);
double difftime(time_t, time_t);
time_t mktime(struct tm*);
time_t time(time_t*);
char *asctime(struct tm*);
char *ctime(time_t*);
struct tm *gmtime(time_t*);
struct tm *localtime(time_t*);
size_t strftime(char*, size_t, char*, struct tm*);
int timespec_get(struct timespec*, int); /*C11*/
int timespec_getres(struct timespec*, int); /*C23*/
struct tm *gmtime_r(time_t*, struct tm*); /*C23*/
struct tm *localtime_r(time_t*, struct tm*); /*C23*/
time_t timegm(struct tm*); /*C23*/

struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};

#endif /* _TIME_H */
