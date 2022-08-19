/**/

#define _GNU_SOURCE
#define _FILE_OFFSET_BITS 64
#define _LARGE_FILES
#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)

/* #define __NO_INLINE__ ! why was it here ? */

#include <unistd.h>

#include <stdlib.h>
/*** typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__))); ununderstood ***/
/*** typedef __float128 _Float128; ununderstood ***/
/*** extern _Float128 strtof128 (const char *restrict __nptr,
			 char **restrict __endptr) ununderstood ***/
/*** extern _Float128 strtof128_l (const char *restrict __nptr,
			 char **restrict __endptr,
			 locale_t __loc) ununderstood ***/

#include <stdio.h>

#include <fcntl.h>

#include <math.h>
/*** enum ununderstood ***/
/*** {
 FP_INT_UPWARD =

 0,
 FP_INT_DOWNWARD =

 1,
 FP_INT_TOWARDZERO =

 2,
 FP_INT_TONEARESTFROMZERO =

 3,
 FP_INT_TONEAREST =

 4,
 }; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 acosf128 (_Float128 __x) ;  extern _Float128 __acosf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 asinf128 (_Float128 __x) ;  extern _Float128 __asinf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atanf128 (_Float128 __x) ;  extern _Float128 __atanf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atan2f128 (_Float128 __y, _Float128 __x) ;  extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x) ; ununderstood ***/
/*** extern _Float128 cosf128 (_Float128 __x) ;  extern _Float128 __cosf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 sinf128 (_Float128 __x) ;  extern _Float128 __sinf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 tanf128 (_Float128 __x) ;  extern _Float128 __tanf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 coshf128 (_Float128 __x) ;  extern _Float128 __coshf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 sinhf128 (_Float128 __x) ;  extern _Float128 __sinhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 tanhf128 (_Float128 __x) ;  extern _Float128 __tanhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 acoshf128 (_Float128 __x) ;  extern _Float128 __acoshf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 asinhf128 (_Float128 __x) ;  extern _Float128 __asinhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atanhf128 (_Float128 __x) ;  extern _Float128 __atanhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 expf128 (_Float128 __x) ;  extern _Float128 __expf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 frexpf128 (_Float128 __x, int *__exponent) ;  extern _Float128 __frexpf128 (_Float128 __x, int *__exponent) ; ununderstood ***/
/*** extern _Float128 ldexpf128 (_Float128 __x, int __exponent) ;  extern _Float128 __ldexpf128 (_Float128 __x, int __exponent) ; ununderstood ***/
/*** extern _Float128 logf128 (_Float128 __x) ;  extern _Float128 __logf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log10f128 (_Float128 __x) ;  extern _Float128 __log10f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr) ;  extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr)  ; ununderstood ***/
/*** extern _Float128 exp10f128 (_Float128 __x) ;  extern _Float128 __exp10f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 expm1f128 (_Float128 __x) ;  extern _Float128 __expm1f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log1pf128 (_Float128 __x) ;  extern _Float128 __log1pf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 logbf128 (_Float128 __x) ;  extern _Float128 __logbf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 exp2f128 (_Float128 __x) ;  extern _Float128 __exp2f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log2f128 (_Float128 __x) ;  extern _Float128 __log2f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 powf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __powf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 sqrtf128 (_Float128 __x) ;  extern _Float128 __sqrtf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 hypotf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 cbrtf128 (_Float128 __x) ;  extern _Float128 __cbrtf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 ceilf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __ceilf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fabsf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __fabsf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 floorf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __floorf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmodf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 nanf128 (const char *__tagb) ;  extern _Float128 __nanf128 (const char *__tagb) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 j0f128 (_Float128) ;  extern _Float128 __j0f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 j1f128 (_Float128) ;  extern _Float128 __j1f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 jnf128 (int, _Float128) ;  extern _Float128 __jnf128 (int, _Float128) ; ununderstood ***/
/*** extern _Float128 y0f128 (_Float128) ;  extern _Float128 __y0f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 y1f128 (_Float128) ;  extern _Float128 __y1f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 ynf128 (int, _Float128) ;  extern _Float128 __ynf128 (int, _Float128) ; ununderstood ***/
/*** extern _Float128 erff128 (_Float128) ;  extern _Float128 __erff128 (_Float128) ; ununderstood ***/
/*** extern _Float128 erfcf128 (_Float128) ;  extern _Float128 __erfcf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 lgammaf128 (_Float128) ;  extern _Float128 __lgammaf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 tgammaf128 (_Float128) ;  extern _Float128 __tgammaf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 lgammaf128_r (_Float128, int *__signgamp) ;  extern _Float128 __lgammaf128_r (_Float128, int *__signgamp) ; ununderstood ***/
/*** extern _Float128 rintf128 (_Float128 __x) ;  extern _Float128 __rintf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 nextdownf128 (_Float128 __x) ;  extern _Float128 __nextdownf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 nextupf128 (_Float128 __x) ;  extern _Float128 __nextupf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 remainderf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 scalbnf128 (_Float128 __x, int __n) ;  extern _Float128 __scalbnf128 (_Float128 __x, int __n) ; ununderstood ***/
/*** extern _Float128 scalblnf128 (_Float128 __x, long int __n) ;  extern _Float128 __scalblnf128 (_Float128 __x, long int __n) ; ununderstood ***/
/*** extern _Float128 nearbyintf128 (_Float128 __x) ;  extern _Float128 __nearbyintf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 roundf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __roundf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 truncf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __truncf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo) ;  extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo) ; ununderstood ***/
/*** extern _Float128 fdimf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) ;  extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) ; ununderstood ***/
/*** extern _Float128 roundevenf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __roundevenf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 getpayloadf128 (const _Float128 *__x) ;  extern _Float128 __getpayloadf128 (const _Float128 *__x) ; ununderstood ***/
/*** extern _Float128 scalbf128 (_Float128 __x, _Float128 __n) ;  extern _Float128 __scalbf128 (_Float128 __x, _Float128 __n) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/

#include <limits.h>

#include <float.h>

#include <string.h>


#include <time.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <setjmp.h>

#include <errno.h>

#include <signal.h>
#ifdef nofenv
  #define feenableexcept(fpe)
  #define feclearexcept(fpe)
#else
  #include <fenv.h>
  #ifdef modfenv
    #include "feenableexceptosx.h"
  #endif
  #define fpe FE_INVALID | FE_OVERFLOW | FE_DIVBYZERO
#endif

char errortemp_[(80+1)];


struct arrptr{int l,h; ssize_t i; char *a;};
struct dynptr{void* p; int t;};
char INTERRUPT=0;
void (*traphandler)(const char *);
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};
struct freefunc* freestack=NULL;
#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}
#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name
#define commablockexit(name,func,p) name.f=func,name.ptr=p,name.next=freestack,freestack=&name
void traprestore(void *ptr){traphandler=ptr;}
void condfree(void *ptr){if(*(void **)ptr!=NULL)free(*(void **)ptr);}
int friexecerror(char** s){
  fprintf(stderr,"\rprogram must be run under icpl\n");
  sleep(1);
  return 0;
}
int (*friexec)(char** s)=friexecerror;

int dynptrerr(int type){
  snprintf(errortemp_,sizeof(errortemp_),"Argument of incompatible TYPE %d",type);
  traphandler(errortemp_);
  return 0;
}
void *errmalloc(void){
  traphandler("Not enough memory");
  return NULL;
}
void ioerr(FILE *fil){
  char where[11];
  off_t cn;
  int fn;
  fn=fileno(fil);
  cn=ftello(fil);
  if(ferror(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"%s in fd %d char %ld",strerror(errno),fn,(long)cn);
  } else if(feof(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"End of file in fd %d char %ld",fn,(long)cn);
  } else {
    if(!(cn>=0 && fscanf(fil,"%10s",where)>0)) where[0]=0;
    snprintf(errortemp_,sizeof(errortemp_),"Unrecognized input \"%s\" from fd %d char %ld",where,fn,(long)cn);
  }
  traphandler(errortemp_);
}
void errfclose(void *voidf){
  FILE **f=(FILE **)voidf;
  int fn;
  if(*f==NULL)return;
  fn=fileno(*f);
  if(fn>=0 && ftell(*f)>=0 && fclose(*f)!=0){
    snprintf(errortemp_,sizeof(errortemp_),"Error in closing fd %d: %s",fn,strerror(errno));
    traphandler(errortemp_);
    }
  *f=NULL;
}
void errfopen(FILE **f, const char *name, int mode){
  int fd;
/*  if(*f)errfclose(f);  causes segfault if used on copies of closed FILE descriptors */
  fd=open(name,mode,0666);
  if(fd>0 || mode==O_RDONLY){
    *f=fdopen(fd,mode==O_RDONLY?"r":"r+");
    if(*f!=NULL || mode==O_RDONLY)return;
    } 
  snprintf(errortemp_,sizeof(errortemp_),"Error in opening %s: %s",name,strerror(errno));
  traphandler(errortemp_);
}
int scanrec(FILE *f, const char *format, void *var) {
  off_t pos; int res;
  register int c;
  if (friexec!=friexecerror && isatty(fileno(f))){
    char *s="\357\201i\362\371\376";
    if (friexec(&s) && sscanf(s,format,var)==1) return 1;
  }
  pos=ftello(f);
  if(pos<0)return 0;
  while((c=getc(f))<=' '&&(c!='\n')&&(c!=EOF)){};
  if(c!='\n')ungetc(c,f);
  while((c=getc(f))=='!') {while(!feof(f)&&getc(f)!='\n'){};};
  ungetc(c,f);
  res=fscanf(f,format,var);
  if (res<=0 && var!=NULL) fseeko(f,pos,SEEK_SET);
  c=getc(f); if(c!='\n')ungetc(c,f);
  return res;
}
int scanbool(FILE *f, const char *format, int *var) {
  char c;
  return scanrec(f,format,&c)&&((*var=(c=='T')||(c=='Y')||(c=='t')||(c=='y'))||(c=='F')||(c=='N')||(c=='f')||(c=='n'));
  }
int myfgets(char *name, char *var, char *varend, FILE *f) {
  off_t pos;
  register int c;
  pos=ftello(f);
  if(feof(f))return 0;
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  if(var<varend){
    do{c=getc(f); *var=c;}while(c!=EOF && c!='\n' && ++var < varend);
    *var=0;
  }
  return 1;
}
int mygetline(char *name, char **var, FILE *f) {
  off_t pos;
  int c,oldc;
  pos=ftello(f);
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  c=32; oldc=0;
  while(1){
  *var=realloc(*var,c);
  if (fgets(*var+oldc,c-oldc,f)==NULL) {fseeko(f,pos,SEEK_SET);return 0;};
  {char* c1=memchr(*var+oldc,'\n',c-oldc-1); if(c1) {*c1=0; return 1;}}
  oldc=c-1; c=2*c;
  }
  /*
  c=0;
  getline(var,&c,f);
  {char* c1=strchr(*var,'\n'); if(c1) *c1=0;}
  return 1;
  */
}
/* Note: fetestexcept always returns zero. Detecting the type of floating point
   exception requires testing the si_code field of sig_info (man sigaction) */
void trapsignal(int signum, siginfo_t *info, void *ucontext){
  feclearexcept(FE_ALL_EXCEPT);
  feenableexcept(fpe);
  if(signum==SIGINT) traphandler(&INTERRUPT);
  else if (signum==SIGFPE){
    switch(info->si_code){
    case FPE_INTDIV: traphandler("*** ERROR: integer division by zero");
    case FPE_FLTDIV: traphandler("*** ERROR: floating-point division by zero");
    case FPE_FLTOVF: traphandler("*** ERROR: floating-point overflow");
    default: traphandler("*** ERROR: invalid or unassigned floating-point value");
    }
  }
  else traphandler(strsignal(signum));
}
#if (defined __i386__ || defined __x86_64__)
#define mmovefrom(var,buf,type) *(type *)(buf)=*var
#define mmoveto(var,buf,type) *var=*(type *)(buf)
#else
#define mmovefrom(var,buf,type) memmove(buf,var,sizeof(type))
#define mmoveto(var,buf,type) memmove(var,buf,sizeof(type))
#endif
#define mainstart \
void default_traphandler(const char *errormessage){ \
  if(errormessage[0]){ \
    printERR; \
    freemem(NULL); \
    exit(EXIT_FAILURE); \
  }else{ \
    freemem(NULL); \
    exit(EXIT_SUCCESS); \
  } \
} \
int main(int argc, char **argv){ \
struct freefunc* es; \
			\
{struct sigaction act,oldact; \
act.sa_sigaction=trapsignal; \
sigemptyset(&act.sa_mask); \
act.sa_flags=SA_RESTART|SA_SIGINFO; \
sigaction(SIGSEGV,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGSEGV,&oldact,NULL); \
sigaction(SIGFPE,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGFPE,&oldact,NULL); \
sigaction(SIGILL,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGILL,&oldact,NULL); \
sigaction(SIGINT,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGINT,&oldact,NULL); \
/* \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
*/ \
else {traphandler=default_traphandler; \
      freestack=NULL; \
      feenableexcept(fpe); \
     }; \
} \
es=freestack;






/* INTEGER LIBRARY FUNCTION INTEGER[(int)rint](REAL x) */
/* INTEGER LIBRARY FUNCTION int[(int)](REAL x) */





/* to-do list
1) modificare STRUCTURED ARRAY in modo da evitare malloc quando possibile
2) separare il #define CPL da quello C
*/

struct COMPLEX_{double REAL_;double IMAG_;};
#define COMPLEX_s (ssize_t)sizeof(struct COMPLEX_)


extern void complex_1INV(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_2EXP(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_3SINH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_4COSH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_5TANH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_6COTH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);






extern void complex_7LOG(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_8POWER(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG,double y_REAL,double y_IMAG);


extern void complex_9SQRT(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_10ACOS(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);




extern void complex_11CRAND(struct COMPLEX_ *RESULT_);

extern void complex_12CGAUSS(struct COMPLEX_ *RESULT_);


void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

extern int fft_9FFTfit(int N_);


extern void fft_fft_10ReverseInc(int *K_,int N_);


extern int fft_fft_LASTN;

extern struct arrptr fft_fft_CEXP;

extern struct arrptr fft_fft_tempVEC;

extern struct arrptr fft_fft_RI;

extern char *fft_fft_RI2;
extern char *fft_fft_RI3;


extern void fft_fft_11SETUP(int N_);


extern double fft_fft_12C3;


extern void fft_fft_13BTFLY(int N_,int M_);




extern void fft_fft_14BTFLYI(int N_);


/*
SUBROUTINE BTFLY2(type R^(*))
  N=R.LENGTH
  INTEGER M=1
  COMPLEX C1=-1
  DO
    COMPLEX C=1
    M2=2*M
    LOOP FOR H=0 TO M-1
      C=C*C1
      DO
        A=C*R(J+M)
        R(J+M)=R(J)-A
        R(J)=R(J)+A
      FOR J=H TO N-1 BY M2
    REPEAT LOOP
    M=M2
    C1=SQRT(C1)
  UNTIL M=N
END BTFLY2

SUBROUTINE BTFLY2I(type R^(*))
  N=R.LENGTH
  INTEGER M2=2
  COMPLEX C1=-1
  DO
    M2=2*M2
    C1=SQRT(C1)
  UNTIL M2=N
  DO
    COMPLEX C=1
    INTEGER M=M2 DIV 2
    INTEGER H
    LOOP FOR H=0 TO M-1
      C=C*CONJG(C1)
      INTEGER J
      DO
	A=R(J)-R(J+M)
	R(J)=R(J)+R(J+M)
	R(J+M)=A*C
      FOR J=H TO N-1 BY M2
    REPEAT LOOP
    M2=M
    C1=C1*C1
  UNTIL M2=1
END BTFLY2I
*/

extern void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

  
extern void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern double *fft_15REALIFIED(const int x_l,const int x_h,const ssize_t x_i,char *x__,int y_);


extern double DotProduct(const int a_l,const int a_h,const ssize_t a_i,char *a__,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void rbmat_1LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___);




struct REALINVMAT_{int lo_;int hi_;};
#define REALINVMAT_s (ssize_t)sizeof(struct REALINVMAT_)





extern void rbmat_2MatEqu(const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,char *c___,double a_);


extern void rbmat_3MatEqu(FILE *c_f,const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,off_t c___,double a_);


extern void rbmat_4LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void rbmat_5RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,FILE *B_f,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,off_t B___);


extern void rbmat_6LUdecomp(const int AA_l,const int AA_h,const ssize_t AA_i,const int AA__l,const int AA__h,const ssize_t AA__i,char *AA___);


extern void rbmat_7LUdecomp(FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);


extern void rbmat_8LeftLDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_9LeftUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);




extern void rbmat_10LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_11RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___);


extern void rbmat_12RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);




/*
inclusa separatamente in cbmat e rbmat
REAL Lanczos_norm=0
SUBROUTINE Lanczos(POINTER TO ARRAY(*) OF number x
                   SUBROUTINE[ARRAY(*) OF number v2^,v1] A,B
                   ARRAY(*) OF number y1; REAL eps)
  ARRAY(x.LO..x.HI) OF number v=0,v1
  ARRAY(y1.LO..y1.HI) OF number y=y1,r=0,r1
  REAL n=1
  x=0
  INTEGER count=2*LENGTH(y)
  DO
    B(v1,y)
    A(r1,v1)
    l1=r|r1/n; r=r1-l1*r; v=v1-l1*v
    n=NORM(r)
    l2=r|y/n; y=y-l2*r; x=x+l2*v
    DEC count
    Lanczos_norm=NORM(y)
  UNTIL Lanczos_norm<eps*eps OR count=0
END Lanczos

SUBROUTINE Lanczos(POINTER TO ARRAY(*) OF number x
                   ARRAY(*,*) OF number M
                   ARRAY(*) OF number y1; REAL eps)
  SUBROUTINE A[ARRAY(*) OF number v2^,v1]
    v2=M*v1
  END A  
  SUBROUTINE B[ARRAY(*) OF number v2^,v1]
    v2=v1*M
  END B
  Lanczos(x,A,B,y1,eps)
END Lanczos
*/

extern void rbmat_13PLU(const int m_l,const int m_h,const ssize_t m_i,const int m__l,const int m__h,const ssize_t m__i,char *m___,struct REALINVMAT_ *RESULT_);




extern void rbmat_14LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,struct REALINVMAT_ *m_,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_15RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,struct REALINVMAT_ *m_);


extern void rbmat_16INV(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int RESULT_l,const int RESULT_h,const ssize_t RESULT_i,const int RESULT__l,const int RESULT__h,const ssize_t RESULT__i,char *RESULT___);


extern double rbmat_17DET(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___);

extern double REAL_Lanczos_norm_;

extern void rbmat_18Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,void (*A_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),void (*B_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),const int y1_l,const int y1_h,const ssize_t y1_i,char *y1__,double eps_);


void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

struct rbmat_Lanczos_R_s20 {int l,h; ssize_t i;struct arrptr a;};
extern struct rbmat_Lanczos_R_s20 rbmat_Lanczos_R_Lanczos_mat;

  extern void rbmat_Lanczos_R_21A(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);

  extern void rbmat_Lanczos_R_22B(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);

  
  extern void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

FILE *data_;
int scdns_1h;
ssize_t scdns_3i;
struct freefunc scdns_2f;char *scdns_2;

int nx_;
int ny_;
int nz_;

double alpha0_;
double beta0_;
double htcoeff_;
double scdns_4ymax;
double scdns_5ymin;
double t_max_;
double dt_field_;
double dt_save_;

double nu_;
double meanpx_;
double meanpz_;
double meanflowx_;
double meanflowz_;
double deltat_;
double time_;

struct freefunc restart_file_f;char *restart_file_;

int scdns_6h;
ssize_t scdns_7i;
ssize_t scdns_8st;
struct freefunc y_f;char *y_;
  ssize_t scdns_10st;
struct _scdns_s9{char d0_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d4_[(ssize_t)sizeof(double)*(2-(-2)+1)];};
#define _scdns_s9_s (ssize_t)sizeof(struct _scdns_s9)
int scdns_11h;
ssize_t scdns_12i;
struct freefunc derivatives_f;char *derivatives_;

char d040_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d140_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14m1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d04n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14np1_[(ssize_t)sizeof(double)*(2-(-2)+1)];

char scdns_setup_derivatives_M[(ssize_t)sizeof(double)*(4+1)*(4+1)];
char scdns_setup_derivatives_t[(ssize_t)sizeof(double)*(4+1)];

  








double scdns_14yintegr(const int f_l,const int f_h,const ssize_t f_i,char *f__){{struct freefunc* es=freestack;double RESULT_;
  RESULT_=0.;
   {int iy_=1  ;while(iy_<=ny_-1 ){
    double _15yp1;
double _16ym1;
double _17a1;
double _18a3;
double _19a2;
_15yp1=(*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_));
   _16ym1=(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_) );
 
    _17a1=-1./3.*_16ym1+1./6.*_15yp1+1./6.*_15yp1*_15yp1/_16ym1;
 
    _18a3=1./3.*_15yp1-1./6.*_16ym1-1./6.*_16ym1*_16ym1/_15yp1;
 
    _19a2=_15yp1-_16ym1-_17a1-_18a3;
 
    RESULT_+=_17a1*(*(double *)((iy_-1)*f_i+f__)) + _19a2*(*(double *)(iy_*f_i+f__)) + _18a3*(*(double *)((iy_+1)*f_i+f__))    ;
  iy_+= 2;}}
return RESULT_;}}

struct VELOCITY_{struct COMPLEX_ u_;struct COMPLEX_ v_;struct COMPLEX_ w_;};
#define VELOCITY_s (ssize_t)sizeof(struct VELOCITY_)

extern int convolutions_1l;
extern int convolutions_2h;
extern ssize_t convolutions_3i;
extern ssize_t convolutions_4i;
extern ssize_t convolutions_5i;
extern ssize_t convolutions_6st;
extern ssize_t convolutions_7st;
extern struct freefunc V_f;
extern char *V_;

struct MOMFLUX_{struct COMPLEX_ uu_;struct COMPLEX_ uv_;struct COMPLEX_ vv_;struct COMPLEX_ vw_;struct COMPLEX_ ww_;struct COMPLEX_ uw_;};
#define MOMFLUX_s (ssize_t)sizeof(struct MOMFLUX_)

extern int convolutions_8l;
extern ssize_t convolutions_9i;
extern ssize_t convolutions_10i;
extern ssize_t convolutions_11st;
extern ssize_t convolutions_12st;
extern struct freefunc VV_f;
extern char *VV_;

extern int nxd_;
extern int dtemp;
;
  extern int nzd_;
  extern int convolutions_13h;
extern int convolutions_14h;
extern ssize_t convolutions_15i;
extern ssize_t convolutions_16i;
extern struct freefunc Vd_f;
extern char *Vd_;

extern int convolutions_17h;
extern int convolutions_18h;
extern ssize_t convolutions_19i;
extern ssize_t convolutions_20i;
extern struct freefunc VVd_f;
extern char *VVd_;


extern int convolutions_21l;
struct _convolutions_s22{struct COMPLEX_ eta_;struct COMPLEX_ D2v_;};
#define _convolutions_s22_s (ssize_t)sizeof(struct _convolutions_s22)
extern ssize_t convolutions_23i;

extern char newrhs_[(ssize_t)sizeof(char*)*(-(-2)+1)];

extern int convolutions_26h;
extern ssize_t convolutions_27i;
extern ssize_t convolutions_28i;
extern ssize_t convolutions_29st;
extern ssize_t convolutions_30st;
extern ssize_t convolutions_31st;
extern struct freefunc oldrhs_f;
extern char *oldrhs_;


extern void convolutions_32convolutions(const int Vplane_l,const int Vplane_h,const ssize_t Vplane_i,const int Vplane__l,const int Vplane__h,const ssize_t Vplane__i,char *Vplane___,const int VVplane_l,const int VVplane_h,const ssize_t VVplane_i,const int VVplane__l,const int VVplane__h,const ssize_t VVplane__i,char *VVplane___);



void scdns_17buildrhs(void (*timescheme_)(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unknown_REAL,double unknown_IMAG,double implicit_part_REAL,double implicit_part_IMAG,double explicit_part_REAL,double explicit_part_IMAG)){{struct freefunc* es=freestack;
   {int iy_= - 1  ;do{{ convolutions_32convolutions(0,nx_,convolutions_4i,convolutions_1l,nz_,convolutions_3i,iy_*VELOCITY_s+V_,0,nx_,convolutions_9i,convolutions_8l,nz_,MOMFLUX_s*(2-(-2)+1),iy_*MOMFLUX_s+VV_) ;}iy_+=1;}while(iy_<=2);}
   {int iy_=1  ;while(iy_<=ny_-1){
    char *_84temp;
  {int ix_=nx_;do{{int iz_=convolutions_8l;do{  {int i_= - 2  ;do{{ (*(struct MOMFLUX_ *)(i_*MOMFLUX_s+iz_*MOMFLUX_s*(2-(-2)+1)+ix_*convolutions_9i+VV_))=(*(struct MOMFLUX_ *)((i_+1)*MOMFLUX_s+iz_*MOMFLUX_s*(2-(-2)+1)+ix_*convolutions_9i+VV_) );}i_+=1;}while(i_<=1);}iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}
    convolutions_32convolutions(0,nx_,convolutions_4i,convolutions_1l,nz_,convolutions_3i,(iy_+2)*VELOCITY_s+V_,0,nx_,convolutions_9i,convolutions_8l,nz_,MOMFLUX_s*(2-(-2)+1),2*MOMFLUX_s+VV_);
    {struct _scdns_s9 *_18w;
_18w=(struct _scdns_s9 *)(iy_*_scdns_s9_s+derivatives_) ;
  {int ix_=nx_;do{   {int iz_=convolutions_8l;do{
      double _19r;
double _21r_20ialpha;
double _22i_20ialpha;
double _23r;
double _25r_24ibeta;
double _26i_24ibeta;
double _27k2;
_19r=alpha0_*(double)(ix_);
_21r_20ialpha=0.;
_22i_20ialpha=_19r;
/*ialpha=_21r_20ialpha,_22i_20ialpha*/  _23r=beta0_*(double)(iz_);
_25r_24ibeta=0.;
_26i_24ibeta=_23r;
/*ibeta=_25r_24ibeta,_26i_24ibeta*/
      _27k2=((alpha0_*(double)(ix_))*(alpha0_*(double)(ix_)))+((beta0_*(double)(iz_))*(beta0_*(double)(iz_)));
 
      {
      char *_28w;
char *_29w;
double _30r;
double _31r;
double _32r;
double _33r;
double _34r;
double _36r_35rhsu;
double _37i_35rhsu;
double _38r;
double _39r;
double _40r;
double _41r;
double _42r;
double _44r_43rhsv;
double _45i_43rhsv;
double _46r;
double _47r;
double _48r;
double _49r;
double _50r;
double _52r_51rhsw;
double _53i_51rhsw;
struct COMPLEX_ _55D2vimpl;
double _56r;
double _57r;
double _58r;
double _59r;
double _60r;
double _61r;
double _62r;
double _63r;
double _64r;
double _65i;
double _66r;
double _67r;
double _68r;
double _69r;
double _70r;
double _71r;
double _72i;
_28w=iz_*MOMFLUX_s*(2-(-2)+1)+ix_*convolutions_9i+VV_;
_29w=iy_*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_;
_30r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_))));
_31r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))));
_32r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)((*_18w).d1_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_))));
_33r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_))));
_34r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))));
_36r_35rhsu=((-_21r_20ialpha)*_31r-(-_22i_20ialpha)*_30r)-((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)((*_18w).d1_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_))))-(_25r_24ibeta*_34r-_26i_24ibeta*_33r);
_37i_35rhsu=((-_21r_20ialpha)*_30r+(-_22i_20ialpha)*_31r)-_32r-(_25r_24ibeta*_33r+_26i_24ibeta*_34r);
/*rhsu=_36r_35rhsu,_37i_35rhsu*/
      _38r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_))));
_39r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))));
_40r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).IMAG_)))+(*(double *)((*_18w).d1_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).IMAG_))));
_41r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_))));
_42r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))));
_44r_43rhsv=((-_21r_20ialpha)*_39r-(-_22i_20ialpha)*_38r)-((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).REAL_)))+(*(double*)((*_18w).d1_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vv_))).REAL_))))-(_25r_24ibeta*_42r-_26i_24ibeta*_41r);
_45i_43rhsv=((-_21r_20ialpha)*_38r+(-_22i_20ialpha)*_39r)-_40r-(_25r_24ibeta*_41r+_26i_24ibeta*_42r);
/*rhsv=_44r_43rhsv,_45i_43rhsv*/
      _46r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_))));
_47r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))));
_48r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)((*_18w).d1_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_))));
_49r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_))));
_50r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))));
_52r_51rhsw=((-_21r_20ialpha)*_47r-(-_22i_20ialpha)*_46r)-((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)((*_18w).d1_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_))))-(_25r_24ibeta*_50r-_26i_24ibeta*_49r);
_53i_51rhsw=((-_21r_20ialpha)*_46r+(-_22i_20ialpha)*_47r)-_48r-(_25r_24ibeta*_49r+_26i_24ibeta*_50r);
/*rhsw=_52r_51rhsw,_53i_51rhsw*/
       memset(&_55D2vimpl,0,COMPLEX_s); {int i_= - 2  ;do{{double _54r;
_54r=(nu_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_18w).d4_-scdns_10st))-2.*_27k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))+_27k2*_27k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))));
{register double temp=(*&_55D2vimpl).REAL_+(_54r*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).v_)).REAL_);(*&_55D2vimpl).IMAG_=(*&_55D2vimpl).IMAG_+(_54r*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).v_)).IMAG_);(*&_55D2vimpl).REAL_=temp;};}i_+=1;}while(i_<=2);} 
      _56r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)((*_18w).d2_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_))));
_57r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).IMAG_))));
_58r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))));
_59r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)((*_18w).d1_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).IMAG_))));
_60r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)((*_18w).d1_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uu_))).REAL_)))));
_61r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)((*_18w).d2_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).IMAG_))));
_62r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((*_18w).d1_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_))));
_63r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((*_18w).d1_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))));
_64r=((_21r_20ialpha*_60r-_22i_20ialpha*_59r)+((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)((*_18w).d2_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uv_))).REAL_))))+(_25r_24ibeta*_63r-_26i_24ibeta*_62r));
_65i=((_21r_20ialpha*_59r+_22i_20ialpha*_60r)+_61r+(_25r_24ibeta*_62r+_26i_24ibeta*_63r));
_66r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((*_18w).d1_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).IMAG_))));
_67r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((*_18w).d1_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).uw_))).REAL_)))));
_68r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)((*_18w).d2_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).IMAG_))));
_69r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)((*_18w).d1_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).IMAG_))));
_70r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)((*_18w).d1_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d1_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).ww_))).REAL_)))));
_71r=((_21r_20ialpha*_67r-_22i_20ialpha*_66r)+((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)((*_18w).d2_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_28w)).vw_))).REAL_))))+(_25r_24ibeta*_70r-_26i_24ibeta*_69r));
_72i=((_21r_20ialpha*_66r+_22i_20ialpha*_67r)+_68r+(_25r_24ibeta*_69r+_26i_24ibeta*_70r));
(*timescheme_)(&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_,1,1,convolutions_28i,(char*)&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+iy_*convolutions_27i+oldrhs_)).D2v_,((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)((*_18w).d2_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).v_))).REAL_))))-(_27k2*_58r),_56r-(_27k2*_57r)
        ,_55D2vimpl.REAL_,_55D2vimpl.IMAG_
        ,(_21r_20ialpha*_64r-_22i_20ialpha*_65i)+(_25r_24ibeta*_71r-_26i_24ibeta*_72i)-(_27k2*_44r_43rhsv),(_21r_20ialpha*_65i+_22i_20ialpha*_64r)+(_25r_24ibeta*_72i+_26i_24ibeta*_71r)-(_27k2*_45i_43rhsv));
             if( (ix_==0 )&&( iz_==0 )){ /* mean u stored in eta.REAL, mean w in eta.IMAG   */
               double _73r;
double _74r;
double _75r;
_73r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_))));
_74r=nu_*(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)((*_18w).d2_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).w_)).REAL_))));
_75r=((_52r_51rhsw)+meanpz_);
(*timescheme_)(&(*(struct _convolutions_s22 *)((*(char**)(newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_,1,1,convolutions_28i,(char*)&(*(struct _convolutions_s22 *)(iy_*convolutions_27i+oldrhs_)).eta_,((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))),_73r
                 ,nu_*((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)((*_18w).d2_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)))),_74r
                 ,_36r_35rhsu+meanpx_,_75r);
             }else{
               struct COMPLEX_ _79etaimpl;
double _80r;
double _81r;
double _82r;
double _83r;
 memset(&_79etaimpl,0,COMPLEX_s); {int i_= - 2  ;do{{double _76r;
double _77r;
double _78i;
_76r=(nu_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_18w).d2_-scdns_10st))-_27k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))));
_77r=((_25r_24ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).u_)).REAL_-_26i_24ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).u_)).IMAG_)-(_21r_20ialpha*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).w_)).REAL_-_22i_20ialpha*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).w_)).IMAG_));
_78i=((_25r_24ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).u_)).IMAG_+_26i_24ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).u_)).REAL_)-(_21r_20ialpha*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).w_)).IMAG_+_22i_20ialpha*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_29w)).w_)).REAL_)) ;
{register double temp=(*&_79etaimpl).REAL_+(_76r*_77r);(*&_79etaimpl).IMAG_=(*&_79etaimpl).IMAG_+(_76r*_78i);(*&_79etaimpl).REAL_=temp;};}i_+=1;}while(i_<=2);} 
               _80r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).IMAG_))));
_81r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).u_))).REAL_)))));
_82r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).IMAG_)))+(*(double *)((*_18w).d0_-scdns_10st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).IMAG_))));
_83r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).REAL_)))+(*(double*)((*_18w).d0_-scdns_10st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_18w).d0_-scdns_10st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_29w)).w_))).REAL_)))));
(*timescheme_)(&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_,1,1,convolutions_28i,(char*)&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+iy_*convolutions_27i+oldrhs_)).eta_,(_25r_24ibeta*_81r-_26i_24ibeta*_80r)-(_21r_20ialpha*_83r-_22i_20ialpha*_82r),(_25r_24ibeta*_80r+_26i_24ibeta*_81r)-(_21r_20ialpha*_82r+_22i_20ialpha*_83r)
                 ,_79etaimpl.REAL_,_79etaimpl.IMAG_
                 ,(_25r_24ibeta*_36r_35rhsu-_26i_24ibeta*_37i_35rhsu)-(_21r_20ialpha*_52r_51rhsw-_22i_20ialpha*_53i_51rhsw),(_25r_24ibeta*_37i_35rhsu+_26i_24ibeta*_36r_35rhsu)-(_21r_20ialpha*_53i_51rhsw+_22i_20ialpha*_52r_51rhsw));
             };
             {register double temp=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_.REAL_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).u_.IMAG_=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_.IMAG_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).u_.REAL_=temp;};  {register double temp=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_.REAL_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).v_.IMAG_=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_.IMAG_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).v_.REAL_=temp;};
           }iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}}
           _84temp=(*(char **)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))));
   (*(char **)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))))=(*(char **)(-(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))));  (*(char **)(-(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))))=(*(char **)(newrhs_-((-2)*(ssize_t)sizeof(char*))));  (*(char **)(newrhs_-((-2)*(ssize_t)sizeof(char*))))=_84temp;
         iy_+=1;}}
           {int ix_=nx_;do{{int iz_=convolutions_1l;do{  {int i_= - 2  ;do{{ {register double temp=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_.REAL_;(*(struct VELOCITY_ *)((ny_+i_)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).u_.IMAG_=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_.IMAG_;(*(struct VELOCITY_ *)((ny_+i_)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).u_.REAL_=temp;};  {register double temp=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_.REAL_;(*(struct VELOCITY_ *)((ny_+i_)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).v_.IMAG_=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_.IMAG_;(*(struct VELOCITY_ *)((ny_+i_)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).v_.REAL_=temp;};}i_+=1;}while(i_<= - 1);}iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}
       }}
       
       extern int linsolve_1h;
extern void linsolve_2bcLUdecomp(char *A_);


extern int linsolve_3h;
extern void linsolve_4bcLeftDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,char *A_);


extern int linsolve_5h;
extern ssize_t linsolve_6i;
extern ssize_t linsolve_7st;
extern struct freefunc D0mat_f;
extern char *D0mat_;
extern struct freefunc etamat_f;
extern char *etamat_;
extern struct freefunc D2vmat_f;
extern char *D2vmat_;


extern void linsolve_10deriv(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f1_l,const int f1_h,const ssize_t f1_i,char *f1__);


extern void linsolve_11linsolve(double lambda_);

void scdns_18RK1_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
         double _19r;
_19r=120./32./deltat_;
{register double temp=(_19r*unkn_REAL)+impl_REAL+(2.*expl_REAL);(*rhs_).IMAG_=(_19r*unkn_IMAG)+impl_IMAG+(2.*expl_IMAG);(*rhs_).REAL_=temp;};
         {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
       }}
       double scdns_19RK1_rai_coeff;

       
       void scdns_20RK2_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
         double _21r;
double _22r;
double _23r;
_21r=120./(8.*deltat_);
_22r=50./8.;
_23r=34./8.;
{register double temp=(_21r*unkn_REAL)+impl_REAL+(_22r*expl_REAL)-(_23r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_21r*unkn_IMAG)+impl_IMAG+(_22r*expl_IMAG)-(_23r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double scdns_21RK2_rai_coeff;


void scdns_22RK3_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _23r;
double _24r;
double _25r;
_23r=120./(20.*deltat_);
_24r=90./20.;
_25r=50./20.;
{register double temp=(_23r*unkn_REAL)+impl_REAL+(_24r*expl_REAL)-(_25r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_23r*unkn_IMAG)+impl_IMAG+(_24r*expl_IMAG)-(_25r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
}}
double scdns_23RK3_rai_coeff;



int cont_;

mainstart

/* For usage see fft.info.                                ! */
/*                                                        ! */
/* Copyright 1997-2020 Paolo Luchini http://CPLcode.net   ! */
/* Released under the attached LICENSE.                   ! */
/*                                                        ! */
/* Code maturity: green.                                  ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */



fft_fft_LASTN=1;fft_fft_12C3=sin((3.14159265358979323846)/3.);
 

fft_fft_exit:;



/* with "number" redefined to the respective numeric type.           ! */
/* See matrix.info for usage.                                        ! */
/*                                                                   ! */
/* Copyright 1999-2020 Paolo Luchini http://CPLcode.net              ! */
/* Released under the attached LICENSE.                              ! */
/*                                                                   ! */
/* Code maturity: green.                                             ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */



REAL_Lanczos_norm_=0.;
  rbmat_Lanczos_R_exit:;
/*USE rtchecks */

/* Read discretization and simulation parameters from input file */
data_=NULL;scdns_1h=snprintf((char*)NULL,0,"" "%s"".in""",(*(char **)(argv)) )+1;
scdns_3i=(scdns_1h+1);

scdns_2=malloc(scdns_3i);if(scdns_2==NULL)scdns_2=errmalloc();atblockexit(scdns_2f,free,scdns_2);snprintf(scdns_2,scdns_1h+1,"" "%s"".in""",(*(char **)(argv)) );errfopen(&data_,scdns_2,O_RDONLY);scdns_4ymax=2.;
scdns_5ymin=0.;
meanpx_=0.;meanpz_=0.;meanflowx_=0.;meanflowz_=0.;time_=0.;restart_file_=NULL;atblockexit(restart_file_f,condfree,&restart_file_);   if(!(scanrec( data_ ," nx = %d",&nx_)>0&&scanrec( data_ ," ny = %d",&ny_)>0&&scanrec( data_ ," nz = %d",&nz_)>0&&scanrec( data_ ," alpha0 = %lg",&alpha0_)>0&&scanrec( data_ ," beta0 = %lg",&beta0_)>0&&scanrec( data_ ," htcoeff = %lg",&htcoeff_)>0&&scanrec( data_ ," nu = %lg",&nu_)>0))ioerr( data_ );  nu_=1./nu_;
{do{  }while(   (scanrec( data_ ," meanpx = %lg",&meanpx_ )>0 ||scanrec( data_ ," meanflowx = %lg",&meanflowx_ )>0 ||scanrec( data_ ," meanpz = %lg",&meanpz_ )>0 ||scanrec( data_ ," meanflowz = %lg",&meanflowz_)>0));}
   if(!(scanrec( data_ ," deltat = %lg",&deltat_)>0 &&scanrec( data_ ," t_max = %lg",&t_max_)>0 &&scanrec( data_ ," dt_field = %lg",&dt_field_)>0 &&scanrec( data_ ," dt_save = %lg",&dt_save_)>0))ioerr( data_ );
if( !(   (mygetline(" restart_file =",&restart_file_ , data_ )))){ if(restart_file_!=NULL)free(restart_file_);
restart_file_=NULL;};

/* Define wall-normal mesh */
/* Alternative Options for uniform or channel-type with two walls and finer spacing near the walls */
scdns_6h=ny_+1;
scdns_7i=(ssize_t)sizeof(double)*(scdns_6h-(-1)+1);
scdns_8st=(-1)*(ssize_t)sizeof(double);

y_=malloc(scdns_7i);if(y_==NULL)y_=errmalloc();y_-=scdns_8st;atblockexit(y_f,free,y_+scdns_8st);  {int i_=(-1);do{{ (*(double *)(i_*(ssize_t)sizeof(double)+y_))=scdns_4ymax*(double)(i_)/(double)(ny_);}i_++;}while(i_<=scdns_6h);}
/* DO y(i)=ymax*i/ny FOR ALL i ! Uniform mesh */
  {int i_=(-1);do{ /* Channel with two walls */{ (*(double *)(i_*(ssize_t)sizeof(double)+y_))=scdns_5ymin+0.5*(scdns_4ymax-scdns_5ymin)*(tanh(htcoeff_*((double)(2*i_)/(double)(ny_)-1.))/tanh(htcoeff_)+0.5*(scdns_4ymax-scdns_5ymin)) ;}i_++;}while(i_<=scdns_6h);}

scdns_10st=(-2)*(ssize_t)sizeof(double);
scdns_11h=ny_-1;
scdns_12i=_scdns_s9_s*scdns_11h;

derivatives_=malloc(scdns_12i);if(derivatives_==NULL)derivatives_=errmalloc();derivatives_-=_scdns_s9_s;atblockexit(derivatives_f,free,derivatives_+_scdns_s9_s);
   {int iy_=1  ;while(iy_<=ny_-1 ){{
    struct _scdns_s9 *_13w;
_13w=(struct _scdns_s9 *)(iy_*_scdns_s9_s+derivatives_);
  {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+scdns_setup_derivatives_M))=pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),scdns_setup_derivatives_M);
    memset(scdns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(scdns_setup_derivatives_t))=24.;
    {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d4_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d4_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d4_-scdns_10st+(0)*(ssize_t)sizeof(double)));};}
      {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+scdns_setup_derivatives_M))=(double)((5-i_)*(6-i_)*(7-i_)*(8-i_))*pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),scdns_setup_derivatives_M);
      {int i_=4;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))=0.;  {int j_=(-2);do{ {(*(double *)(i_*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))+=((*(double *)(j_*(ssize_t)sizeof(double)+(*_13w).d4_-scdns_10st))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(8-i_))) ;}j_++;}while(j_<=2);}}i_--;}while(i_>=0);}
    {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d0_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d0_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d0_-scdns_10st+(0)*(ssize_t)sizeof(double)));};}
      {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+scdns_setup_derivatives_M))=pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),scdns_setup_derivatives_M);
    memset(scdns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));   {int i_=0  ;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))=0.;  {int j_=(-2);do{ {(*(double *)(i_*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))+=(*(double *)(j_*(ssize_t)sizeof(double)+(*_13w).d0_-scdns_10st))*(double)((4-i_))*(double)((3-i_))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(2-i_) );}j_++;}while(j_<=2);}}i_+=1;}while(i_<=2);}
    {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d2_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d2_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d2_-scdns_10st+(0)*(ssize_t)sizeof(double)));};}
    memset(scdns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));   {int i_=0  ;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))=0.;  {int j_=(-2);do{ {(*(double *)(i_*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))+=(*(double *)(j_*(ssize_t)sizeof(double)+(*_13w).d0_-scdns_10st))*(double)((4-i_))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(3-i_) );}j_++;}while(j_<=2);}}i_+=1;}while(i_<=3);}
    {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d1_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d1_-scdns_10st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_13w).d1_-scdns_10st+(0)*(ssize_t)sizeof(double)));};}
  }iy_+=1;}}
    {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+scdns_setup_derivatives_M))=pow(((*(double *)((-1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),scdns_setup_derivatives_M);
  memset(scdns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
    {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+scdns_setup_derivatives_M))=pow(((*(double *)((-1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(-(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),scdns_setup_derivatives_M);
  memset(scdns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
  memset(scdns_10st+d04n_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)((ssize_t)sizeof(double)+d04n_-((-2)*(ssize_t)sizeof(double))))=1.;  memset(scdns_10st+d040_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)(-(ssize_t)sizeof(double)+d040_-((-2)*(ssize_t)sizeof(double))))=1.;
    {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+scdns_setup_derivatives_M))=pow(((*(double *)((ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(ny_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),scdns_setup_derivatives_M);
  memset(scdns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
    {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+scdns_setup_derivatives_M))=pow(((*(double *)((ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)((ny_+1)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),scdns_setup_derivatives_M);
  memset(scdns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+scdns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(scdns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
scdns_setup_derivatives_exit:;convolutions_1l= - nz_;
convolutions_2h=ny_+1;
convolutions_3i=VELOCITY_s*(convolutions_2h-(-1)+1);
convolutions_4i=convolutions_3i*(nz_-convolutions_1l+1);
convolutions_5i=convolutions_4i*(nx_+1);
convolutions_6st=(-1)*VELOCITY_s;
convolutions_7st=convolutions_1l*convolutions_3i+convolutions_6st;

V_=malloc(convolutions_5i);if(V_==NULL)V_=errmalloc();V_-=convolutions_7st;atblockexit(V_f,free,V_+convolutions_7st);memset(convolutions_7st+V_,0,convolutions_5i);convolutions_8l= - nz_;
convolutions_9i=MOMFLUX_s*(2-(-2)+1)*(nz_-convolutions_8l+1);
convolutions_10i=convolutions_9i*(nx_+1);
convolutions_11st=(-2)*MOMFLUX_s;
convolutions_12st=convolutions_8l*MOMFLUX_s*(2-(-2)+1)+convolutions_11st;

VV_=malloc(convolutions_10i);if(VV_==NULL)VV_=errmalloc();VV_-=convolutions_12st;atblockexit(VV_f,free,VV_+convolutions_12st);memset(convolutions_12st+VV_,0,convolutions_10i);nxd_=(dtemp=3*nx_ ,(dtemp>=0)==(2 >=0)?dtemp:dtemp-(2 )+1)/ 2 - 1;{do{  nxd_ +=1;}while(!(fft_9FFTfit(nxd_)));}
nzd_=3*nz_ - 1;{do{  nzd_ +=1;}while(!(fft_9FFTfit(nzd_)));}
convolutions_13h=nxd_-1;
convolutions_14h=nzd_-1;
convolutions_15i=VELOCITY_s*(convolutions_14h+1);
convolutions_16i=convolutions_15i*(convolutions_13h+1);

Vd_=malloc(convolutions_16i);if(Vd_==NULL)Vd_=errmalloc();atblockexit(Vd_f,free,Vd_);memset(Vd_,0,convolutions_16i);convolutions_17h=nxd_-1;
convolutions_18h=nzd_-1;
convolutions_19i=MOMFLUX_s*(convolutions_18h+1);
convolutions_20i=convolutions_19i*(convolutions_17h+1);

VVd_=malloc(convolutions_20i);if(VVd_==NULL)VVd_=errmalloc();atblockexit(VVd_f,free,VVd_);memset(VVd_,0,convolutions_20i);/*maxtimelevels=1*/
convolutions_21l= - nz_;
convolutions_23i=_convolutions_s22_s*(nz_-convolutions_21l+1);
  {int i_=(-2);do{{ ssize_t _24i;
ssize_t _25st;
_24i=convolutions_23i*(nx_+1);
_25st=convolutions_21l*_convolutions_s22_s;
 
(*(char **)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))) )=malloc(_24i);if((*(char **)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))) )==NULL)(*(char **)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))) )=errmalloc();(*(char **)(i_*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))) )-=_25st;}i_++;}while(i_<=0);}
convolutions_26h=ny_-1;
convolutions_27i=convolutions_23i*(nx_+1);
convolutions_28i=convolutions_27i*convolutions_26h;
convolutions_29st=convolutions_21l*_convolutions_s22_s;
convolutions_30st=convolutions_27i+convolutions_29st;
convolutions_31st=convolutions_28i+convolutions_30st;

oldrhs_=malloc(convolutions_28i);if(oldrhs_==NULL)oldrhs_=errmalloc();oldrhs_-=convolutions_31st;atblockexit(oldrhs_f,free,oldrhs_+convolutions_31st);memset(convolutions_31st+oldrhs_,0,convolutions_28i);

/* Read the initial velocity field  */
if( (restart_file_)[0]!=0){
  FILE *_15;
_15=NULL;errfopen(&_15,restart_file_ ,O_RDONLY);  if(!(fread(convolutions_7st+V_,convolutions_5i,1,_15)==1&& fread(convolutions_31st+oldrhs_,convolutions_28i,1,_15)==1))ioerr(_15);
}else{
    {int iy_=(-1);do{{ (*(struct VELOCITY_ *)(iy_*VELOCITY_s+V_)).u_.REAL_=(*(double *)(iy_*(ssize_t)sizeof(double)+y_))*(2.-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ;}iy_++;}while(iy_<=convolutions_2h);}
    {int ix_=nx_;do{{int iz_=convolutions_1l;do{  {int iy_=1  ;do{{ {
    struct VELOCITY_ *_16w;
_16w=(struct VELOCITY_ *)(iy_*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_);
/*eps=0.002*/  {register double temp=(*_16w).u_.REAL_+0.002*((double)(rand())/(double)(RAND_MAX));(*_16w).u_.IMAG_=(*_16w).u_.IMAG_;(*_16w).u_.REAL_=temp;};  {register double temp=(*_16w).w_.REAL_+0.002*((double)(rand())/(double)(RAND_MAX));(*_16w).w_.IMAG_=(*_16w).w_.IMAG_;(*_16w).w_.REAL_=temp;};  {register double temp=(*_16w).w_.REAL_+0.002*((double)(rand())/(double)(RAND_MAX));(*_16w).w_.IMAG_=(*_16w).w_.IMAG_;(*_16w).w_.REAL_=temp;};
  }}iy_+=1;}while(iy_<=ny_-1);}iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}
};

linsolve_1h=ny_+1;
linsolve_3h=ny_+1;
linsolve_5h=ny_+1;
linsolve_6i=(ssize_t)sizeof(double)*(2-(-2)+1)*(linsolve_5h-(-1)+1);
linsolve_7st=(-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+scdns_10st;

D0mat_=malloc(linsolve_6i);if(D0mat_==NULL)D0mat_=errmalloc();D0mat_-=linsolve_7st;atblockexit(D0mat_f,free,D0mat_+linsolve_7st);memset(linsolve_7st+D0mat_,0,linsolve_6i);
etamat_=malloc(linsolve_6i);if(etamat_==NULL)etamat_=errmalloc();etamat_-=linsolve_7st;atblockexit(etamat_f,free,etamat_+linsolve_7st);memset(linsolve_7st+etamat_,0,linsolve_6i);
D2vmat_=malloc(linsolve_6i);if(D2vmat_==NULL)D2vmat_=errmalloc();D2vmat_-=linsolve_7st;atblockexit(D2vmat_f,free,D2vmat_+linsolve_7st);memset(linsolve_7st+D2vmat_,0,linsolve_6i);{char *linsolve_9_;

linsolve_9_=_scdns_s9_s+(char*)(*(struct _scdns_s9*)(derivatives_)).d0_-scdns_10st; {char *linsolve_8_=(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_;int linsolve_8_1=ny_-1-1; do{{ memmove(scdns_10st+linsolve_8_,scdns_10st+linsolve_9_,(ssize_t)sizeof(double)*(2-(-2)+1)); linsolve_9_ =_scdns_s9_s+linsolve_9_;}linsolve_8_+=(ssize_t)sizeof(double)*(2-(-2)+1);linsolve_8_1--;}while(linsolve_8_1>=0);}}memset(scdns_10st-(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_))=1.;  memset(scdns_10st+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)(-(ssize_t)sizeof(double)+D0mat_))=1.;
memset(scdns_10st+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)((ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_))=1.;  memset(scdns_10st+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)(2*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_))=1.;
linsolve_2bcLUdecomp(D0mat_+linsolve_7st-(linsolve_7st));

       
       scdns_19RK1_rai_coeff=120./32.;
scdns_21RK2_rai_coeff=120./8.;
scdns_23RK3_rai_coeff=120./20.;
cont_=0;timeloop:; while( time_ <t_max_-deltat_/2.){
  double _24;
double _25;
time_+=2./scdns_19RK1_rai_coeff*deltat_;
  scdns_17buildrhs(scdns_18RK1_rai); linsolve_11linsolve(scdns_19RK1_rai_coeff/deltat_);
  time_+=2./scdns_21RK2_rai_coeff*deltat_;
  scdns_17buildrhs(scdns_20RK2_rai); linsolve_11linsolve(scdns_21RK2_rai_coeff/deltat_);
  time_+=2./scdns_23RK3_rai_coeff*deltat_;
  scdns_17buildrhs(scdns_22RK3_rai); linsolve_11linsolve(scdns_23RK3_rai_coeff/deltat_);

   _24=0.; {int i_= - 2  ;do{{(*&_24)+=(*(double *)(i_*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))))*(*(struct VELOCITY_ *)((1+i_)*VELOCITY_s+V_)).u_.REAL_ ;}i_+=1;}while(i_<=2);} _25=0.; {int i_= - 2  ;do{{(*&_25)+=(*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(struct VELOCITY_ *)((ny_-1+i_)*VELOCITY_s+V_)).u_.REAL_ ;}i_+=1;}while(i_<=2);}              fprintf(stdout,"%g \t%g \t%g \t%g \t%g""\n",time_,_24 
                         , - _25
                         ,meanpx_ ,scdns_14yintegr((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(V_)).u_)).REAL_)/2.);

  if( (int)floor(time_ / dt_save_) >(int)floor((time_-deltat_) / dt_save_) ){
    FILE *_26;
_26=NULL;errfopen(&_26,"dati.out" ,O_RDWR|O_CREAT|O_TRUNC);fwrite(convolutions_7st+V_,convolutions_5i,1,_26); fwrite(convolutions_31st+oldrhs_,convolutions_28i,1,_26);
  };

};timeloop_exit:;
freemem(es);return 0;}
