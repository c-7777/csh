#ifndef _STDIO_H
# define _STDIO_H

#define EOF
#define BUFSIZ
#define FOPEN_MAX
#define FILENAME_MAX
#define L_tmpnam
#define SEEK_SET
#define SEEK_CUR
#define SEEK_END
#define TMP_MAX
#define _IOFBF
#define _IOLBF
#define _IONBF
#define stdin
#define stdout
#define stderr
#define NULL

typedef FILE;
typedef fpos_t;
typedef size_t;

int remove(char*);
int rename(char*, char*);
FILE *tmpfile(void);
char *tmpnam(char*);
int fclose(FILE*);
int fflush(FILE*);
FILE *fopen(char*, char*);
FILE *freopen(char*, char*, FILE*);
void setbuf(FILE*, char*);
int setvbuf(FILE*, char*, int, size_t);
int fprintf(FILE*, char*, ...);
int fscanf(FILE*, char*, ...);
int printf(char*, ...);
int scanf(char*, ...);
int sprintf(char*, char*, ...);
int sscanf(char*, char*, ...);
int fgetc(FILE*);
char *fgets(char*, int, FILE*);
int fputc(int, FILE*);
int fputs(char*, FILE*);
int getc(FILE*);
int getchar(void);
char *gets(char*);
int putc(int, FILE*);
int putchar(int);
int puts(char*);
int ungetc(int, FILE*);
size_t fread(void*, size_t, size_t, FILE*);
size_t fwrite(void*, size_t, size_t, FILE*);
int fgetpos(FILE*, fpos_t*);
int fseek(FILE*, long, int);
int fsetpos(FILE*, fpos_t*);
long ftell(FILE*);
void rewind(FILE*);
void clearerr(FILE*);
int feof(FILE*);
int ferror(FILE*);
void perror(char*);

#endif /* _STDIO_H */
