#ifndef _STRING_H
# define _STRING_H

#define NULL

typedef size_t;

void *memcpy(void*, void*, size_t);
void *memmove(void*, void*, size_t);
char *strcpy(char*, char*);
char *strncpy(char*, char*, size_t);
char *strcat(char*, char*);
char *strncat(char*, char*, size_t);
int memcmp(void*, void*, size_t);
int strcmp(char*, char*);
int strcoll(char*, char*);
int strncmp(char*, char*, size_t);
size_t strxfrm(char*, char*, size_t);
void *memchr(void*, int, size_t);
char *strchr(char*, int);
size_t strcspn(char*, char*);
char *strpbrk(char*, char*);
char *strrchr(char*, int);
size_t strspn(char*, char*);
char *strstr(char*, char*);
char *strtok(char*, char*);
void *memset(void*, int, size_t);
char *strerror(int);
size_t strlen(char*);
void *memset_explicit(void*, int, size_t); /*C23*/
void *memccpy(void*, void*, int, size_t); /*C23*/
char *strdup(char*); /*C23*/
char *strndup(char*, size_t); /*C23*/

#endif /* _STRING_H */
