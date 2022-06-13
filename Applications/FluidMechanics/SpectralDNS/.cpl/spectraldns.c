/*-I/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi -I/usr/lib/x86_64-linux-gnu/openmpi/include -pthread -L/usr/lib/x86_64-linux-gnu/openmpi/lib -lmpi */

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
struct freefunc *freestack;
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
  while((c=getc(f))<=' '&&(c!='\n')&&(c!=EOF)){};
  if(c!='\n')ungetc(c,f);
  while((c=getc(f))=='!') {while(!feof(f)&&getc(f)!='\n'){};};
  ungetc(c,f);
  res=fscanf(f,format,var);
  if (res<=0) fseeko(f,pos,SEEK_SET);
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

FILE *dati_;

int nx_;
int ny_;
int nz_;

double alfa0_;
double beta0_;
double htcoeff_;
double spectraldns_1ymax;
double spectraldns_2ymin;
double t_max_;
double dt_field_;
double dt_save_;

double ni_;
double meanpx_;
double meanpz_;
double meanflowx_;
double meanflowz_;
double deltat_;
double time_;

struct freefunc restart_file_f;char *restart_file_;

int spectraldns_3h;
ssize_t spectraldns_4i;
ssize_t spectraldns_5st;
struct freefunc y_f;char *y_;
  ssize_t spectraldns_7st;
struct _spectraldns_s6{char d0_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d4_[(ssize_t)sizeof(double)*(2-(-2)+1)];};
#define _spectraldns_s6_s (ssize_t)sizeof(struct _spectraldns_s6)
int spectraldns_8h;
ssize_t spectraldns_9i;
struct freefunc derivatives_f;char *derivatives_;

char d040_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d140_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14m1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d04n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14np1_[(ssize_t)sizeof(double)*(2-(-2)+1)];

char spectraldns_setup_derivatives_M[(ssize_t)sizeof(double)*(4+1)*(4+1)];
char spectraldns_setup_derivatives_t[(ssize_t)sizeof(double)*(4+1)];










double spectraldns_11yintegr(const int f_l,const int f_h,const ssize_t f_i,char *f__){{struct freefunc* es=freestack;double RESULT_;
  RESULT_=0.;
   {int iy_=1  ;while(iy_<=ny_-1 ){
   double _12yp1;
double _13ym1;
double _14a1;
double _15a3;
double _16a2;
_12yp1=(*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_));
   _13ym1=(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_) );
 
   _14a1=-1./3.*_13ym1+1./6.*_12yp1+1./6.*_12yp1*_12yp1/_13ym1;
 
   _15a3=1./3.*_12yp1-1./6.*_13ym1-1./6.*_13ym1*_13ym1/_12yp1;
 
   _16a2=_12yp1-_13ym1-_14a1-_15a3;
 
   RESULT_+=_14a1*(*(double *)((iy_-1)*f_i+f__)) + _16a2*(*(double *)(iy_*f_i+f__)) + _15a3*(*(double *)((iy_+1)*f_i+f__))    ;
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



void spectraldns_14buildrhs(void (*timescheme_)(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unknown_REAL,double unknown_IMAG,double implicit_part_REAL,double implicit_part_IMAG,double explicit_part_REAL,double explicit_part_IMAG)){{struct freefunc* es=freestack;
 {int iy_= - 1  ;do{{ convolutions_32convolutions(0,nx_,convolutions_4i,convolutions_1l,nz_,convolutions_3i,iy_*VELOCITY_s+V_,0,nx_,convolutions_9i,convolutions_8l,nz_,MOMFLUX_s*(2-(-2)+1),iy_*MOMFLUX_s+VV_) ;}iy_+=1;}while(iy_<=2);}
 {int iy_=1  ;while(iy_<=ny_-1){
  char *_81temp;
  {int ix_=nx_;do{{int iz_=convolutions_8l;do{  {int i_= - 2  ;do{{ (*(struct MOMFLUX_ *)(i_*MOMFLUX_s+iz_*MOMFLUX_s*(2-(-2)+1)+ix_*convolutions_9i+VV_))=(*(struct MOMFLUX_ *)((i_+1)*MOMFLUX_s+iz_*MOMFLUX_s*(2-(-2)+1)+ix_*convolutions_9i+VV_) );}i_+=1;}while(i_<=1);}iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}
  convolutions_32convolutions(0,nx_,convolutions_4i,convolutions_1l,nz_,convolutions_3i,(iy_+2)*VELOCITY_s+V_,0,nx_,convolutions_9i,convolutions_8l,nz_,MOMFLUX_s*(2-(-2)+1),2*MOMFLUX_s+VV_);
  {struct _spectraldns_s6 *_15w;
_15w=(struct _spectraldns_s6 *)(iy_*_spectraldns_s6_s+derivatives_) ;
  {int ix_=nx_;do{   {int iz_=convolutions_8l;do{
    double _16r;
double _18r_17ialfa;
double _19i_17ialfa;
double _20r;
double _22r_21ibeta;
double _23i_21ibeta;
double _24k2;
_16r=alfa0_*(double)(ix_);
_18r_17ialfa=0.;
_19i_17ialfa=_16r;
/*ialfa=_18r_17ialfa,_19i_17ialfa*/  _20r=beta0_*(double)(iz_);
_22r_21ibeta=0.;
_23i_21ibeta=_20r;
/*ibeta=_22r_21ibeta,_23i_21ibeta*/
    _24k2=((alfa0_*(double)(ix_))*(alfa0_*(double)(ix_)))+((beta0_*(double)(iz_))*(beta0_*(double)(iz_)));
 
    {
    char *_25w;
char *_26w;
double _27r;
double _28r;
double _29r;
double _30r;
double _31r;
double _33r_32rhsu;
double _34i_32rhsu;
double _35r;
double _36r;
double _37r;
double _38r;
double _39r;
double _41r_40rhsv;
double _42i_40rhsv;
double _43r;
double _44r;
double _45r;
double _46r;
double _47r;
double _49r_48rhsw;
double _50i_48rhsw;
struct COMPLEX_ _52D2vimpl;
double _53r;
double _54r;
double _55r;
double _56r;
double _57r;
double _58r;
double _59r;
double _60r;
double _61r;
double _62i;
double _63r;
double _64r;
double _65r;
double _66r;
double _67r;
double _68r;
double _69i;
_25w=iz_*MOMFLUX_s*(2-(-2)+1)+ix_*convolutions_9i+VV_;
_26w=iy_*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_;
_27r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_))));
_28r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))));
_29r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)((*_15w).d1_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_))));
_30r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_))));
_31r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))));
_33r_32rhsu=((-_18r_17ialfa)*_28r-(-_19i_17ialfa)*_27r)-((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)((*_15w).d1_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_))))-(_22r_21ibeta*_31r-_23i_21ibeta*_30r);
_34i_32rhsu=((-_18r_17ialfa)*_27r+(-_19i_17ialfa)*_28r)-_29r-(_22r_21ibeta*_30r+_23i_21ibeta*_31r);
/*rhsu=_33r_32rhsu,_34i_32rhsu*/
    _35r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_))));
_36r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))));
_37r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).IMAG_)))+(*(double *)((*_15w).d1_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).IMAG_))));
_38r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_))));
_39r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))));
_41r_40rhsv=((-_18r_17ialfa)*_36r-(-_19i_17ialfa)*_35r)-((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).REAL_)))+(*(double*)((*_15w).d1_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vv_))).REAL_))))-(_22r_21ibeta*_39r-_23i_21ibeta*_38r);
_42i_40rhsv=((-_18r_17ialfa)*_35r+(-_19i_17ialfa)*_36r)-_37r-(_22r_21ibeta*_38r+_23i_21ibeta*_39r);
/*rhsv=_41r_40rhsv,_42i_40rhsv*/
    _43r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_))));
_44r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))));
_45r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)((*_15w).d1_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_))));
_46r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_))));
_47r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))));
_49r_48rhsw=((-_18r_17ialfa)*_44r-(-_19i_17ialfa)*_43r)-((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)((*_15w).d1_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_))))-(_22r_21ibeta*_47r-_23i_21ibeta*_46r);
_50i_48rhsw=((-_18r_17ialfa)*_43r+(-_19i_17ialfa)*_44r)-_45r-(_22r_21ibeta*_46r+_23i_21ibeta*_47r);
/*rhsw=_49r_48rhsw,_50i_48rhsw*/
     memset(&_52D2vimpl,0,COMPLEX_s); {int i_= - 2  ;do{{double _51r;
_51r=(ni_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_15w).d4_-spectraldns_7st))-2.*_24k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))+_24k2*_24k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))));
{register double temp=(*&_52D2vimpl).REAL_+(_51r*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).v_)).REAL_);(*&_52D2vimpl).IMAG_=(*&_52D2vimpl).IMAG_+(_51r*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).v_)).IMAG_);(*&_52D2vimpl).REAL_=temp;};}i_+=1;}while(i_<=2);} 
    _53r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)((*_15w).d2_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_))));
_54r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).IMAG_))));
_55r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))));
_56r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)((*_15w).d1_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).IMAG_))));
_57r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)((*_15w).d1_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uu_))).REAL_)))));
_58r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)((*_15w).d2_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).IMAG_))));
_59r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((*_15w).d1_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_))));
_60r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((*_15w).d1_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))));
_61r=((_18r_17ialfa*_57r-_19i_17ialfa*_56r)+((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)((*_15w).d2_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uv_))).REAL_))))+(_22r_21ibeta*_60r-_23i_21ibeta*_59r));
_62i=((_18r_17ialfa*_56r+_19i_17ialfa*_57r)+_58r+(_22r_21ibeta*_59r+_23i_21ibeta*_60r));
_63r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((*_15w).d1_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).IMAG_))));
_64r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((*_15w).d1_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).uw_))).REAL_)))));
_65r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)((*_15w).d2_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).IMAG_))));
_66r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)((*_15w).d1_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double *)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).IMAG_))));
_67r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)((*_15w).d1_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d1_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).ww_))).REAL_)))));
_68r=((_18r_17ialfa*_64r-_19i_17ialfa*_63r)+((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)((-2)*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(-MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)((*_15w).d2_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(2*MOMFLUX_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct MOMFLUX_*)(_25w)).vw_))).REAL_))))+(_22r_21ibeta*_67r-_23i_21ibeta*_66r));
_69i=((_18r_17ialfa*_63r+_19i_17ialfa*_64r)+_65r+(_22r_21ibeta*_66r+_23i_21ibeta*_67r));
(*timescheme_)(&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_,1,1,convolutions_28i,(char*)&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+iy_*convolutions_27i+oldrhs_)).D2v_,((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)((*_15w).d2_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).v_))).REAL_))))-(_24k2*_55r),_53r-(_24k2*_54r)
               ,_52D2vimpl.REAL_,_52D2vimpl.IMAG_
               ,(_18r_17ialfa*_61r-_19i_17ialfa*_62i)+(_22r_21ibeta*_68r-_23i_21ibeta*_69i)-(_24k2*_41r_40rhsv),(_18r_17ialfa*_62i+_19i_17ialfa*_61r)+(_22r_21ibeta*_69i+_23i_21ibeta*_68r)-(_24k2*_42i_40rhsv));
    if( (ix_==0 )&&( iz_==0 )){ /* mean u stored in eta.REAL, mean w in eta.IMAG */
      double _70r;
double _71r;
double _72r;
_70r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_))));
_71r=ni_*(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)((*_15w).d2_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).w_)).REAL_))));
_72r=((_49r_48rhsw)+meanpz_);
(*timescheme_)(&(*(struct _convolutions_s22 *)((*(char**)(newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_,1,1,convolutions_28i,(char*)&(*(struct _convolutions_s22 *)(iy_*convolutions_27i+oldrhs_)).eta_,((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))),_70r
                 ,ni_*((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)((*_15w).d2_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)))),_71r
                 ,_33r_32rhsu+meanpx_,_72r);
    }else{
      struct COMPLEX_ _76etaimpl;
double _77r;
double _78r;
double _79r;
double _80r;
 memset(&_76etaimpl,0,COMPLEX_s); {int i_= - 2  ;do{{double _73r;
double _74r;
double _75i;
_73r=(ni_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_15w).d2_-spectraldns_7st))-_24k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))));
_74r=((_22r_21ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).u_)).REAL_-_23i_21ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).u_)).IMAG_)-(_18r_17ialfa*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).w_)).REAL_-_19i_17ialfa*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).w_)).IMAG_));
_75i=((_22r_21ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).u_)).IMAG_+_23i_21ibeta*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).u_)).REAL_)-(_18r_17ialfa*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).w_)).IMAG_+_19i_17ialfa*(*(struct COMPLEX_*)(i_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_26w)).w_)).REAL_)) ;
{register double temp=(*&_76etaimpl).REAL_+(_73r*_74r);(*&_76etaimpl).IMAG_=(*&_76etaimpl).IMAG_+(_73r*_75i);(*&_76etaimpl).REAL_=temp;};}i_+=1;}while(i_<=2);} 
      _77r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).IMAG_))));
_78r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).u_))).REAL_)))));
_79r=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).IMAG_)))+(*(double *)((*_15w).d0_-spectraldns_7st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double *)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).IMAG_))));
_80r=(((*(double*)((-2)*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)((-2)*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(-VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).REAL_)))+(*(double*)((*_15w).d0_-spectraldns_7st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_15w).d0_-spectraldns_7st))*(*(double*)(2*VELOCITY_s+((char*)&(*(struct COMPLEX_*)(((char*)&(*(struct VELOCITY_*)(_26w)).w_))).REAL_)))));
(*timescheme_)(&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)(newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_,1,1,convolutions_28i,(char*)&(*(struct _convolutions_s22 *)(iz_*_convolutions_s22_s+ix_*convolutions_23i+iy_*convolutions_27i+oldrhs_)).eta_,(_22r_21ibeta*_78r-_23i_21ibeta*_77r)-(_18r_17ialfa*_80r-_19i_17ialfa*_79r),(_22r_21ibeta*_77r+_23i_21ibeta*_78r)-(_18r_17ialfa*_79r+_19i_17ialfa*_80r)
                 ,_76etaimpl.REAL_,_76etaimpl.IMAG_
                 ,(_22r_21ibeta*_33r_32rhsu-_23i_21ibeta*_34i_32rhsu)-(_18r_17ialfa*_49r_48rhsw-_19i_17ialfa*_50i_48rhsw),(_22r_21ibeta*_34i_32rhsu+_23i_21ibeta*_33r_32rhsu)-(_18r_17ialfa*_50i_48rhsw+_19i_17ialfa*_49r_48rhsw));
    };
    {register double temp=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_.REAL_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).u_.IMAG_=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).eta_.IMAG_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).u_.REAL_=temp;};  {register double temp=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_.REAL_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).v_.IMAG_=(*(struct _convolutions_s22*)(iz_*_convolutions_s22_s+ix_*convolutions_23i+(*(char**)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*)))))).D2v_.IMAG_;(*(struct VELOCITY_ *)((iy_-2)*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_)).v_.REAL_=temp;};
  }iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}}
  _81temp=(*(char **)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))));
   (*(char **)((-2)*(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))))=(*(char **)(-(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))));  (*(char **)(-(ssize_t)sizeof(char*)+newrhs_-((-2)*(ssize_t)sizeof(char*))))=(*(char **)(newrhs_-((-2)*(ssize_t)sizeof(char*))));  (*(char **)(newrhs_-((-2)*(ssize_t)sizeof(char*))))=_81temp;
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

void spectraldns_15RK1_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _16r;
_16r=120./32./deltat_;
{register double temp=(_16r*unkn_REAL)+impl_REAL+(2.*expl_REAL);(*rhs_).IMAG_=(_16r*unkn_IMAG)+impl_IMAG+(2.*expl_IMAG);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double spectraldns_16RK1_rai_coeff;


void spectraldns_17RK2_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _18r;
double _19r;
double _20r;
_18r=120./(8.*deltat_);
_19r=50./8.;
_20r=34./8.;
{register double temp=(_18r*unkn_REAL)+impl_REAL+(_19r*expl_REAL)-(_20r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_18r*unkn_IMAG)+impl_IMAG+(_19r*expl_IMAG)-(_20r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double spectraldns_18RK2_rai_coeff;


void spectraldns_19RK3_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _20r;
double _21r;
double _22r;
_20r=120./(20.*deltat_);
_21r=90./20.;
_22r=50./20.;
{register double temp=(_20r*unkn_REAL)+impl_REAL+(_21r*expl_REAL)-(_22r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_20r*unkn_IMAG)+impl_IMAG+(_21r*expl_IMAG)-(_22r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
}}
double spectraldns_20RK3_rai_coeff;



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

dati_=NULL;errfopen(&dati_,"dns.in",O_RDWR|O_CREAT);spectraldns_1ymax=2.;
spectraldns_2ymin=0.;
meanpx_=0.;meanpz_=0.;meanflowx_=0.;meanflowz_=0.;time_=0.;restart_file_=NULL;atblockexit(restart_file_f,condfree,&restart_file_);   if(!(scanrec( dati_ ," nx = %d",&nx_)>0&&scanrec( dati_ ," ny = %d",&ny_)>0&&scanrec( dati_ ," nz = %d",&nz_)>0&&scanrec( dati_ ," alfa0 = %lg",&alfa0_)>0&&scanrec( dati_ ," beta0 = %lg",&beta0_)>0&&scanrec( dati_ ," htcoeff = %lg",&htcoeff_)>0&&scanrec( dati_ ," ni = %lg",&ni_)>0))ioerr( dati_ );  ni_=1./ni_;
{do{  }while(   (scanrec( dati_ ," meanpx = %lg",&meanpx_ )>0 ||scanrec( dati_ ," meanflowx = %lg",&meanflowx_ )>0 ||scanrec( dati_ ," meanpz = %lg",&meanpz_ )>0 ||scanrec( dati_ ," meanflowz = %lg",&meanflowz_)>0));}
   if(!(scanrec( dati_ ," deltat = %lg",&deltat_)>0 &&scanrec( dati_ ," t_max = %lg",&t_max_)>0 &&scanrec( dati_ ," dt_field = %lg",&dt_field_)>0 &&scanrec( dati_ ," dt_save = %lg",&dt_save_)>0))ioerr( dati_ );
if( !   (mygetline(" restart_file =",&restart_file_ , dati_ ))){ if(restart_file_!=NULL)free(restart_file_);
restart_file_=NULL;};
spectraldns_3h=ny_+1;
spectraldns_4i=(ssize_t)sizeof(double)*(spectraldns_3h-(-1)+1);
spectraldns_5st=(-1)*(ssize_t)sizeof(double);

y_=malloc(spectraldns_4i);if(y_==NULL)y_=errmalloc();y_-=spectraldns_5st;atblockexit(y_f,free,y_+spectraldns_5st);  {int i_=(-1);do{{ (*(double *)(i_*(ssize_t)sizeof(double)+y_))=spectraldns_1ymax*(double)(i_)/(double)(ny_);}i_++;}while(i_<=spectraldns_3h);}

spectraldns_7st=(-2)*(ssize_t)sizeof(double);
spectraldns_8h=ny_-1;
spectraldns_9i=_spectraldns_s6_s*spectraldns_8h;

derivatives_=malloc(spectraldns_9i);if(derivatives_==NULL)derivatives_=errmalloc();derivatives_-=_spectraldns_s6_s;atblockexit(derivatives_f,free,derivatives_+_spectraldns_s6_s);
 {int iy_=1  ;while(iy_<=ny_-1 ){{
  struct _spectraldns_s6 *_10w;
_10w=(struct _spectraldns_s6 *)(iy_*_spectraldns_s6_s+derivatives_);
  {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+spectraldns_setup_derivatives_M))=pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),spectraldns_setup_derivatives_M);
  memset(spectraldns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(spectraldns_setup_derivatives_t))=24.;
  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d4_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d4_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d4_-spectraldns_7st+(0)*(ssize_t)sizeof(double)));};}
    {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+spectraldns_setup_derivatives_M))=(double)((5-i_)*(6-i_)*(7-i_)*(8-i_))*pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),spectraldns_setup_derivatives_M);
    {int i_=4;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))=0.;  {int j_=(-2);do{ {(*(double *)(i_*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))+=((*(double *)(j_*(ssize_t)sizeof(double)+(*_10w).d4_-spectraldns_7st))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(8-i_))) ;}j_++;}while(j_<=2);}}i_--;}while(i_>=0);}
  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d0_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d0_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d0_-spectraldns_7st+(0)*(ssize_t)sizeof(double)));};}
    {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+spectraldns_setup_derivatives_M))=pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),spectraldns_setup_derivatives_M);
  memset(spectraldns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));   {int i_=0  ;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))=0.;  {int j_=(-2);do{ {(*(double *)(i_*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))+=(*(double *)(j_*(ssize_t)sizeof(double)+(*_10w).d0_-spectraldns_7st))*(double)((4-i_))*(double)((3-i_))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(2-i_) );}j_++;}while(j_<=2);}}i_+=1;}while(i_<=2);}
  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d2_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d2_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d2_-spectraldns_7st+(0)*(ssize_t)sizeof(double)));};}
  memset(spectraldns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));   {int i_=0  ;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))=0.;  {int j_=(-2);do{ {(*(double *)(i_*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))+=(*(double *)(j_*(ssize_t)sizeof(double)+(*_10w).d0_-spectraldns_7st))*(double)((4-i_))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(3-i_) );}j_++;}while(j_<=2);}}i_+=1;}while(i_<=3);}
  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d1_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d1_-spectraldns_7st+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*_10w).d1_-spectraldns_7st+(0)*(ssize_t)sizeof(double)));};}
}iy_+=1;}}
  {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+spectraldns_setup_derivatives_M))=pow(((*(double *)((-1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),spectraldns_setup_derivatives_M);
memset(spectraldns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
  {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+spectraldns_setup_derivatives_M))=pow(((*(double *)((-1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(-(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),spectraldns_setup_derivatives_M);
memset(spectraldns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
memset(spectraldns_7st+d04n_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)((ssize_t)sizeof(double)+d04n_-((-2)*(ssize_t)sizeof(double))))=1.;  memset(spectraldns_7st+d040_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)(-(ssize_t)sizeof(double)+d040_-((-2)*(ssize_t)sizeof(double))))=1.;
  {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+spectraldns_setup_derivatives_M))=pow(((*(double *)((ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(ny_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),spectraldns_setup_derivatives_M);
memset(spectraldns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
  {int i_=4;do{{int j_=4;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+spectraldns_setup_derivatives_M))=pow(((*(double *)((ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)((ny_+1)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_--;}while(j_>=0);}i_--;}while(i_>=0);}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),spectraldns_setup_derivatives_M);
memset(spectraldns_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+spectraldns_setup_derivatives_t))=1.;  {{rbmat_8LeftLDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_t));  rbmat_9LeftUDiv(0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(spectraldns_setup_derivatives_M),0,(2-(-2))-(0),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))+(0)*(ssize_t)sizeof(double)));};}
spectraldns_setup_derivatives_exit:;convolutions_1l= - nz_;
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

if( (restart_file_)[0]!=0){
  FILE *_12;
_12=NULL;errfopen(&_12,restart_file_ ,O_RDONLY);  if(!(fread(convolutions_7st+V_,convolutions_5i,1,_12)==1&& fread(convolutions_31st+oldrhs_,convolutions_28i,1,_12)==1))ioerr(_12);
}else{
    {int iy_=(-1);do{{ (*(struct VELOCITY_ *)(iy_*VELOCITY_s+V_)).u_.REAL_=(*(double *)(iy_*(ssize_t)sizeof(double)+y_))*(2.-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ;}iy_++;}while(iy_<=convolutions_2h);}
    {int ix_=nx_;do{{int iz_=convolutions_1l;do{  {int iy_=1  ;do{{ {
    struct VELOCITY_ *_13w;
_13w=(struct VELOCITY_ *)(iy_*VELOCITY_s+iz_*convolutions_3i+ix_*convolutions_4i+V_);
/*eps=0.002*/  {register double temp=(*_13w).u_.REAL_+0.002*((double)(rand())/(double)(RAND_MAX));(*_13w).u_.IMAG_=(*_13w).u_.IMAG_;(*_13w).u_.REAL_=temp;};  {register double temp=(*_13w).w_.REAL_+0.002*((double)(rand())/(double)(RAND_MAX));(*_13w).w_.IMAG_=(*_13w).w_.IMAG_;(*_13w).w_.REAL_=temp;};  {register double temp=(*_13w).w_.REAL_+0.002*((double)(rand())/(double)(RAND_MAX));(*_13w).w_.IMAG_=(*_13w).w_.IMAG_;(*_13w).w_.REAL_=temp;};
  }}iy_+=1;}while(iy_<=ny_-1);}iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}
};

linsolve_1h=ny_+1;
linsolve_3h=ny_+1;
linsolve_5h=ny_+1;
linsolve_6i=(ssize_t)sizeof(double)*(2-(-2)+1)*(linsolve_5h-(-1)+1);
linsolve_7st=(-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+spectraldns_7st;

D0mat_=malloc(linsolve_6i);if(D0mat_==NULL)D0mat_=errmalloc();D0mat_-=linsolve_7st;atblockexit(D0mat_f,free,D0mat_+linsolve_7st);memset(linsolve_7st+D0mat_,0,linsolve_6i);
etamat_=malloc(linsolve_6i);if(etamat_==NULL)etamat_=errmalloc();etamat_-=linsolve_7st;atblockexit(etamat_f,free,etamat_+linsolve_7st);memset(linsolve_7st+etamat_,0,linsolve_6i);
D2vmat_=malloc(linsolve_6i);if(D2vmat_==NULL)D2vmat_=errmalloc();D2vmat_-=linsolve_7st;atblockexit(D2vmat_f,free,D2vmat_+linsolve_7st);memset(linsolve_7st+D2vmat_,0,linsolve_6i);{char *linsolve_9_;

linsolve_9_=_spectraldns_s6_s+(char*)(*(struct _spectraldns_s6*)(derivatives_)).d0_-spectraldns_7st; {char *linsolve_8_=(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_;int linsolve_8_1=ny_-1-1; do{{ memmove(spectraldns_7st+linsolve_8_,spectraldns_7st+linsolve_9_,(ssize_t)sizeof(double)*(2-(-2)+1)); linsolve_9_ =_spectraldns_s6_s+linsolve_9_;}linsolve_8_+=(ssize_t)sizeof(double)*(2-(-2)+1);linsolve_8_1--;}while(linsolve_8_1>=0);}}memset(spectraldns_7st-(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_))=1.;  memset(spectraldns_7st+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)(-(ssize_t)sizeof(double)+D0mat_))=1.;
memset(spectraldns_7st+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)((ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_))=1.;  memset(spectraldns_7st+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_,0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)(2*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_))=1.;
linsolve_2bcLUdecomp(D0mat_+linsolve_7st-(linsolve_7st));


spectraldns_16RK1_rai_coeff=120./32.;
spectraldns_18RK2_rai_coeff=120./8.;
spectraldns_20RK3_rai_coeff=120./20.;
cont_=0;timeloop:; while( time_ <t_max_-deltat_/2.){
  double _21;
double _22;
time_+=2./spectraldns_16RK1_rai_coeff*deltat_;
  spectraldns_14buildrhs(spectraldns_15RK1_rai); linsolve_11linsolve(spectraldns_16RK1_rai_coeff/deltat_);
  time_+=2./spectraldns_18RK2_rai_coeff*deltat_;
  spectraldns_14buildrhs(spectraldns_17RK2_rai); linsolve_11linsolve(spectraldns_18RK2_rai_coeff/deltat_);
  time_+=2./spectraldns_20RK3_rai_coeff*deltat_;
  spectraldns_14buildrhs(spectraldns_19RK3_rai); linsolve_11linsolve(spectraldns_20RK3_rai_coeff/deltat_);

   _21=0.; {int i_= - 2  ;do{{(*&_21)+=(*(double *)(i_*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))))*(*(struct VELOCITY_ *)((1+i_)*VELOCITY_s+V_)).u_.REAL_ ;}i_+=1;}while(i_<=2);} _22=0.; {int i_= - 2  ;do{{(*&_22)+=(*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(struct VELOCITY_ *)((ny_-1+i_)*VELOCITY_s+V_)).u_.REAL_ ;}i_+=1;}while(i_<=2);}              fprintf(stdout,"%g\t%g\t%g\t%g\t%g""\n",time_,_21 
                         , - _22
                         ,meanpx_ ,spectraldns_11yintegr((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(V_)).u_)).REAL_)/2.);

  if( (int)floor(time_ / dt_save_) >(int)floor((time_-deltat_) / dt_save_) ){
    FILE *_23;
_23=NULL;errfopen(&_23,"dati.out" ,O_RDWR|O_CREAT|O_TRUNC);fwrite(convolutions_7st+V_,convolutions_5i,1,_23); fwrite(convolutions_31st+oldrhs_,convolutions_28i,1,_23);
  };

};timeloop_exit:;
freemem(es);return 0;}
