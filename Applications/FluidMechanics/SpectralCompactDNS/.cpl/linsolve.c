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

extern char errortemp_[(80+1)];

struct arrptr{int l,h; ssize_t i; char *a;};struct dynptr{void* p; int t;};extern char INTERRUPT;
extern void (*traphandler)(const char *);
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};extern struct freefunc * freestack;

#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}

#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name

#define commablockexit(name,func,p) name.f=func,name.ptr=p,name.next=freestack,freestack=&name
extern void traprestore(void *ptr);
extern void condfree(void *ptr);
extern int friexecerror(char** s);
extern int (*friexec)(char** s);

#define mmovefrom(var,buf,type) *(type *)(buf)=*var

#define mmoveto(var,buf,type) *var=*(type *)(buf)

#define mainstart void default_traphandler(const char *errormessage){   if(errormessage[0]){     printERR;     freemem(NULL);     exit(EXIT_FAILURE);   }else{     freemem(NULL);     exit(EXIT_SUCCESS);   } } int main(int argc, char **argv){ struct freefunc* es; 			{struct sigaction act,oldact; act.sa_sigaction=trapsignal; sigemptyset(&act.sa_mask); act.sa_flags=SA_RESTART|SA_SIGINFO; sigaction(SIGSEGV,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGSEGV,&oldact,NULL); sigaction(SIGFPE,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGFPE,&oldact,NULL); sigaction(SIGILL,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGILL,&oldact,NULL); sigaction(SIGINT,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGINT,&oldact,NULL); /* \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
*/ else {traphandler=default_traphandler;       freestack=NULL;       feenableexcept(fpe);      }; } es=freestack;
extern int dynptrerr(int type);
extern void *errmalloc(void);
extern void ioerr(FILE *fil);
extern void errfclose(void *voidf);
extern void errfopen(FILE **f, const char *name, int mode);
extern int scanrec(FILE *f, const char *format, void *var) ;
extern int scanbool(FILE *f, const char *format, int *var) ;
extern int myfgets(char *name, char *var, char *varend, FILE *f) ;
extern int mygetline(char *name, char **var, FILE *f) ;
extern void trapsignal(int signum, siginfo_t *info, void *ucontext);






/* INTEGER LIBRARY FUNCTION INTEGER[(int)rint](REAL x) */
/* INTEGER LIBRARY FUNCTION int[(int)](REAL x) */





/* to-do list
1) modificare STRUCTURED ARRAY in modo da evitare malloc quando possibile
2) separare il #define CPL da quello C
*/

/* Fast-Fourier transform library (actually INCLUDed from fft.cmn)   ! */
/* and utilities to read the REAL values encoded in a COMPLEX array. ! */
/* For usage see fft.info.                                           ! */
/*                                                                   ! */
/* Copyright 1997-2021 Paolo Luchini http://CPLcode.net              ! */
/* Released under the attached LICENSE.                              ! */
/*                                                                   ! */
/* Code maturity: green.                                             ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

/* Complex-number type definition and corresponding extensions to the ! */
/* CPL language                                                       ! */
/*                                                                    ! */
/* Copyright 1996-2022 Paolo Luchini http://CPLcode.net               ! */
/* Released under the attached LICENSE.                               ! */
/*                                                                    ! */
/* Code maturity: green.                                              ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

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


/* Library of common matrix algebra operations for real-valued matrices ! */
/* including suitable extensions to the CPL language to handle infix    ! */
/* notation for such functions. See matrix.info for usage.              ! */
/*                                                                      ! */
/* Copyright 1997-2021 Paolo Luchini http://CPLcode.net                 ! */
/* Released under the attached LICENSE.                                 ! */
/*                                                                      ! */
/* Code maturity: green.                                                ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

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

extern FILE *data_;
extern int scdns_1h;
extern ssize_t scdns_3i;
extern struct freefunc scdns_2f;
extern char *scdns_2;

extern int nx_;
extern int ny_;
extern int nz_;

extern double alpha0_;
extern double beta0_;
extern double htcoeff_;
extern double scdns_4ymax;
extern double scdns_5ymin;
extern double t_max_;
extern double dt_field_;
extern double dt_save_;

extern double nu_;
extern double meanpx_;
extern double meanpz_;
extern double meanflowx_;
extern double meanflowz_;
extern double deltat_;
extern double time_;

extern struct freefunc restart_file_f;
extern char *restart_file_;

extern int scdns_6h;
extern ssize_t scdns_7i;
extern ssize_t scdns_8st;
extern struct freefunc y_f;
extern char *y_;
  extern ssize_t scdns_10st;
struct _scdns_s9{char d0_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d4_[(ssize_t)sizeof(double)*(2-(-2)+1)];};
#define _scdns_s9_s (ssize_t)sizeof(struct _scdns_s9)
extern int scdns_11h;
extern ssize_t scdns_12i;
extern struct freefunc derivatives_f;
extern char *derivatives_;

extern char d040_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d140_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d14m1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d04n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d14n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d14np1_[(ssize_t)sizeof(double)*(2-(-2)+1)];

extern char scdns_setup_derivatives_M[(ssize_t)sizeof(double)*(4+1)*(4+1)];
extern char scdns_setup_derivatives_t[(ssize_t)sizeof(double)*(4+1)];

  








extern double scdns_14yintegr(const int f_l,const int f_h,const ssize_t f_i,char *f__);


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



extern void scdns_17buildrhs(void (*timescheme_)(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unknown_REAL,double unknown_IMAG,double implicit_part_REAL,double implicit_part_IMAG,double explicit_part_REAL,double explicit_part_IMAG));

       
       /* The following routines invert a pentadiagonal          [ d x x x x ] */
/* linear system with offset initial and final            [ x d x x x ] */
/* rows, compactly stored as in the scheme to             [ x x d x x ]  */
/* the right, where "d" denotes diagonal elements.        [ x x d x x ]  */
/* This allows the boundary conditions to be              [ --------- ] */
/* included in the same matrix as the differential        [ x x d x x ] */
/* equation without any additional storage.               [ x x d x x ] */
/* The routines are functionally equivalent to            [ x x x d x ] */
/* LUdecomp and \ from rbmat.cpl.                         [ x x x x d ] */

/**/
int linsolve_1h;
void linsolve_2bcLUdecomp(char *A_){{struct freefunc* es=freestack;
  /* eliminate (in the sense of Gauss) first and last two rows and then */
  /* invoke standard LUdecomp. */
  double _4m;
double _7m;
double _10m;
double _13m;
double _16m;
double _19m;
double _22m;
double _25m;
_4m=(*(double *)((-2)*(ssize_t)sizeof(double)+A_))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
{  {int _5i_=-1;do{{(*(double *)(_5i_*(ssize_t)sizeof(double)+A_+(-1-(-1))*(ssize_t)sizeof(double)))=(*(double *)(_5i_*(ssize_t)sizeof(double)+A_))-_4m*(*(double *)(_5i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+A_)) ;}_5i_++;}while(_5i_<=2-(-1-(-1)));}}
  _7m=(*(double *)((-2)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
{  {int _8i_=-1;do{{(*(double *)(_8i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+A_+(-1-(-1))*(ssize_t)sizeof(double)))=(*(double *)(_8i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+A_))-_7m*(*(double *)(_8i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+A_)) ;}_8i_++;}while(_8i_<=2-(-1-(-1)));}}
  _10m=(*(double *)(-(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(-(ssize_t)sizeof(double)+A_));
{  {int _11i_=2-(0);do{{(*(double *)(_11i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+A_))-=_10m*(*(double *)(_11i_*(ssize_t)sizeof(double)+A_)) ;}_11i_--;}while(_11i_>=0);}}
  _13m=(*(double *)((-2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(-(ssize_t)sizeof(double)+A_));
{  {int _14i_=2-(0);do{{(*(double *)(_14i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))-=_13m*(*(double *)(_14i_*(ssize_t)sizeof(double)+A_)) ;}_14i_--;}while(_14i_>=0);}}
  _16m=(*(double *)(2*(ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(2*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
{  {int _17i_=(-2);do{{(*(double *)(_17i_*(ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))-=_16m*(*(double *)(_17i_*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_)) ;}_17i_++;}while(_17i_<=1-((-2)-(-2)));}}
  _19m=(*(double *)(2*(ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(2*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
{  {int _20i_=(-2);do{{(*(double *)(_20i_*(ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))-=_19m*(*(double *)(_20i_*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_)) ;}_20i_++;}while(_20i_<=1-((-2)-(-2)));}}
  _22m=(*(double *)((ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)((ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
{  {int _23i_=(-2);do{{(*(double *)(_23i_*(ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))-=_22m*(*(double *)(_23i_*(ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_)) ;}_23i_++;}while(_23i_<=0-((-2)-(-2)));}}
  _25m=(*(double *)(2*(ssize_t)sizeof(double)+(ny_-2)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)((ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
{  {int _26i_=(-2);do{{(*(double *)(_26i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ny_-2)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))-=_25m*(*(double *)(_26i_*(ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_)) ;}_26i_++;}while(_26i_<=0-((-2)-(-2)));}}
  rbmat_6LUdecomp(1,ny_-1,(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),A_);
}}

int linsolve_3h;
void linsolve_4bcLeftDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,char *A_){{struct freefunc* es=freestack;
/* notice: x cannot be declared with fixed size because it may be non-contiguous */
  (*(double *)(x__))-=(*(double *)((-2)*(ssize_t)sizeof(double)+A_))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+A_))*(*(double *)(-x_i+x__));
  (*(double *)(x_i+x__))-=(*(double *)((-2)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+A_))*(*(double *)(-x_i+x__));
  (*(double *)(x_i+x__))-=(*(double *)(-(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(-(ssize_t)sizeof(double)+A_))*(*(double *)(x__));
  (*(double *)(2*x_i+x__))-=(*(double *)((-2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(-(ssize_t)sizeof(double)+A_))*(*(double *)(x__));
  (*(double *)(ny_*x_i+x__))-=(*(double *)(2*(ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(2*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))*(*(double *)((ny_+1)*x_i+x__));
  (*(double *)((ny_-1)*x_i+x__))-=(*(double *)(2*(ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)(2*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))*(*(double *)((ny_+1)*x_i+x__));
  (*(double *)((ny_-1)*x_i+x__))-=(*(double *)((ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)((ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))*(*(double *)(ny_*x_i+x__));
  (*(double *)((ny_-2)*x_i+x__))-=(*(double *)(2*(ssize_t)sizeof(double)+(ny_-2)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))/(*(double *)((ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_))*(*(double *)(ny_*x_i+x__));
  {{rbmat_8LeftLDiv(1,ny_-1-(1-1),x_i,(x__+(1-1)*x_i),1,ny_-1,(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),(A_),1,ny_-1,x_i,(x__));  rbmat_9LeftUDiv(1,ny_-1-(1-1),x_i,(x__+(1-1)*x_i),1,ny_-1,(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),(A_),1,ny_-1-(1-1),x_i,(x__+(1-1)*x_i));};}
  (*(double *)(x__))= - (DotProduct(0,2,(ssize_t)sizeof(double),A_,0,2,x_i,x_i+x__))/(*(double *)(-(ssize_t)sizeof(double)+A_));
  (*(double *)(-x_i+x__))= - (DotProduct(-1,2,(ssize_t)sizeof(double),-(ssize_t)sizeof(double)*(2-(-2)+1)+A_,-1,2,x_i,x_i+x__))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
  (*(double *)(ny_*x_i+x__))= - (DotProduct(-2,0,(ssize_t)sizeof(double),ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_,-2,0,x_i,(ny_-1)*x_i+x__))/(*(double *)((ssize_t)sizeof(double)+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
  (*(double *)((ny_+1)*x_i+x__))= - (DotProduct(-2,1,(ssize_t)sizeof(double),(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_,-2,1,x_i,(ny_-1)*x_i+x__))/(*(double *)(2*(ssize_t)sizeof(double)+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+A_));
}}

int linsolve_5h;
ssize_t linsolve_6i;
ssize_t linsolve_7st;
struct freefunc D0mat_f;char *D0mat_;
struct freefunc etamat_f;char *etamat_;
struct freefunc D2vmat_f;char *D2vmat_;


void linsolve_10deriv(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f1_l,const int f1_h,const ssize_t f1_i,char *f1__){{struct freefunc* es=freestack;
   (*(double *)(f1__))=0.; {int i_= - 2  ;do{{(*(double *)(f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   (*(double *)(-f1_i+f1__))=0.; {int i_= - 2  ;do{{(*(double *)(-f1_i+f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   (*(double *)(ny_*f1_i+f1__))=0.; {int i_= - 2  ;do{{(*(double *)(ny_*f1_i+f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((ny_-1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   (*(double *)((ny_+1)*f1_i+f1__))=0.; {int i_= - 2  ;do{{(*(double *)((ny_+1)*f1_i+f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((ny_-1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   {int i_=1  ;do{{ {struct _scdns_s9 *_11w;
_11w=(struct _scdns_s9 *)(i_*_scdns_s9_s+derivatives_) ;
(*(double *)(i_*f1_i+f1__))=(  (*(double *)((-2)*(ssize_t)sizeof(double)+(*_11w).d1_-scdns_10st))*(*(double *)((-2)*f0_i+(i_*f0_i+f0__)))+(*(double *)(-(ssize_t)sizeof(double)+(*_11w).d1_-scdns_10st))*(*(double *)(-f0_i+(i_*f0_i+f0__)))+(*(double *)((*_11w).d1_-scdns_10st))*(*(double *)((i_*f0_i+f0__)))+(*(double *)((ssize_t)sizeof(double)+(*_11w).d1_-scdns_10st))*(*(double *)(f0_i+(i_*f0_i+f0__)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_11w).d1_-scdns_10st))*(*(double *)(2*f0_i+(i_*f0_i+f0__)))) ;}}i_+=1;}while(i_<=ny_-1);}
  linsolve_4bcLeftDiv(f1_l,f1_h,f1_i,f1__,D0mat_+linsolve_7st-(linsolve_7st));
}}

void linsolve_11linsolve(double lambda_){{struct freefunc* es=freestack;
    {int ix_=nx_;do{{int iz_=convolutions_1l;do{
  double _12r;
double _14r_13ialpha;
double _15i_13ialpha;
double _16r;
double _18r_17ibeta;
double _19i_17ibeta;
double _20k2;
_12r=alpha0_*(double)(ix_);
_14r_13ialpha=0.;
_15i_13ialpha=_12r;
/*ialpha=_14r_13ialpha,_15i_13ialpha*/  _16r=beta0_*(double)(iz_);
_18r_17ibeta=0.;
_19i_17ibeta=_16r;
/*ibeta=_18r_17ibeta,_19i_17ibeta*/
  _20k2=((alpha0_*(double)(ix_))*(alpha0_*(double)(ix_)))+((beta0_*(double)(iz_))*(beta0_*(double)(iz_)));
 
   {int iy_=1  ;while(iy_<=ny_-1 ){{
    struct _scdns_s9 *_21w;
_21w=(struct _scdns_s9 *)(iy_*_scdns_s9_s+derivatives_);
  {int i_=(-2);do{{ (*(double *)(i_*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*(2-(-2)+1)+D2vmat_))=lambda_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d2_-scdns_10st))-_20k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d0_-scdns_10st)))-(nu_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d4_-scdns_10st))-2.*_20k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d2_-scdns_10st))+_20k2*_20k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d0_-scdns_10st)))) ;}i_++;}while(i_<=2);}
      {int i_=(-2);do{{ (*(double *)(i_*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*(2-(-2)+1)+etamat_))=lambda_*(*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d0_-scdns_10st))-(nu_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d2_-scdns_10st))-_20k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_21w).d0_-scdns_10st)))) ;}i_++;}while(i_<=2);}
  }iy_+=1;}}
  /* boundary conditions */
  memmove(scdns_10st+D2vmat_,scdns_10st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memmove(scdns_10st-(ssize_t)sizeof(double)*(2-(-2)+1)+D2vmat_,scdns_10st+d140_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));
  memmove(scdns_10st+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+D2vmat_,scdns_10st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memmove(scdns_10st+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+D2vmat_,scdns_10st+d14n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));
  memmove(scdns_10st+etamat_,scdns_10st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memmove(scdns_10st-(ssize_t)sizeof(double)*(2-(-2)+1)+etamat_,scdns_10st+(*(struct _scdns_s9*)(_scdns_s9_s+derivatives_)).d4_-scdns_10st,(ssize_t)sizeof(double)*(2-(-2)+1));
  memmove(scdns_10st+ny_*(ssize_t)sizeof(double)*(2-(-2)+1)+etamat_,scdns_10st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memmove(scdns_10st+(ny_+1)*(ssize_t)sizeof(double)*(2-(-2)+1)+etamat_,scdns_10st+(*(struct _scdns_s9*)((ny_-1)*_scdns_s9_s+derivatives_)).d4_-scdns_10st,(ssize_t)sizeof(double)*(2-(-2)+1));
  linsolve_2bcLUdecomp(D2vmat_+linsolve_7st-(linsolve_7st));  linsolve_2bcLUdecomp(etamat_+linsolve_7st-(linsolve_7st));
  {
  char *_22w;
_22w=iz_*convolutions_3i+ix_*convolutions_4i+V_;
memset((struct COMPLEX_ *)(&(*(struct VELOCITY_*)(_22w)).v_),0,COMPLEX_s);   memset((struct COMPLEX_ *)(-VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).v_),0,COMPLEX_s);  memset((struct COMPLEX_ *)(ny_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).v_),0,COMPLEX_s);  memset((struct COMPLEX_ *)((ny_+1)*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).v_),0,COMPLEX_s);
  linsolve_4bcLeftDiv((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).v_)).REAL_,D2vmat_+linsolve_7st-(linsolve_7st));  linsolve_4bcLeftDiv((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).v_)).IMAG_,D2vmat_+linsolve_7st-(linsolve_7st));
  memset((struct COMPLEX_ *)(&(*(struct VELOCITY_*)(_22w)).u_),0,COMPLEX_s);  memset((struct COMPLEX_ *)(-VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_),0,COMPLEX_s);   memset((struct COMPLEX_ *)(ny_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_),0,COMPLEX_s);  memset((struct COMPLEX_ *)((ny_+1)*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_),0,COMPLEX_s);
  linsolve_4bcLeftDiv((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).u_)).REAL_,etamat_+linsolve_7st-(linsolve_7st));  linsolve_4bcLeftDiv((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).u_)).IMAG_,etamat_+linsolve_7st-(linsolve_7st));
  if( (ix_==0 )&&( iz_==0 )){
      {char *_24_;

_24_=(-1)*VELOCITY_s+(char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_22w)).u_)).IMAG_; {char *_23_=(-1)*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_;int _23_1=convolutions_2h-(-1); do{{ (*(struct COMPLEX_ *)(_23_)).REAL_=(*(double *)(_24_));(*(struct COMPLEX_ *)(_23_)).IMAG_=0.; _24_ =VELOCITY_s+_24_;}_23_+=VELOCITY_s;_23_1--;}while(_23_1>=0);}}{ {char *_25_=(-1)*VELOCITY_s+(char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_22w)).u_)).IMAG_;int _25_1=convolutions_2h-(-1); do{{ (*(double *)(_25_))=0.;}_25_+=VELOCITY_s;_25_1--;}while(_25_1>=0);}}
    if( (fabs(meanflowx_)>1.e-10 )||( fabs(meanflowz_)>1.e-10 )){
      int _26h;
ssize_t _27i;
struct freefunc ucor_f;char *ucor_;
  _26h=ny_+1;
_27i=(ssize_t)sizeof(double)*(_26h-(-1)+1);

ucor_=malloc(_27i);if(ucor_==NULL)ucor_=errmalloc();ucor_-=scdns_8st;atblockexit(ucor_f,free,ucor_+scdns_8st); {int iy_=1  ;do{{ (*(double *)(iy_*(ssize_t)sizeof(double)+ucor_))=1.;}iy_+=1;}while(iy_<=ny_-1);}
      (*(double *)(ucor_))=0.;  (*(double *)(-(ssize_t)sizeof(double)+ucor_))=0.;  (*(double *)(ny_*(ssize_t)sizeof(double)+ucor_))=0.;  (*(double *)((ny_+1)*(ssize_t)sizeof(double)+ucor_))=0.;
      linsolve_4bcLeftDiv((-1),_26h,(ssize_t)sizeof(double),ucor_,etamat_+linsolve_7st-(linsolve_7st));
      if( fabs(meanflowx_)>1.e-10 ){ double _29m;
_29m=(meanflowx_-scdns_14yintegr((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).u_)).REAL_))/scdns_14yintegr((-1),_26h,(ssize_t)sizeof(double),ucor_);
{  {int _30i_=(-1);do{{(*(double *)(_30i_*VELOCITY_s+(char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_22w)).u_)).REAL_))+=_29m*(*(double *)(_30i_*(ssize_t)sizeof(double)+ucor_)) ;}_30i_++;}while(_30i_<=convolutions_2h-((-1)-(-1)));}}};
      if( fabs(meanflowz_)>1.e-10 ){ double _32m;
_32m=(meanflowz_-scdns_14yintegr((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).v_)).REAL_))/scdns_14yintegr((-1),_26h,(ssize_t)sizeof(double),ucor_);
{  {int _33i_=(-1);do{{(*(double *)(_33i_*VELOCITY_s+(char*)&(*(struct COMPLEX_*)(&(*(struct VELOCITY_*)(_22w)).v_)).REAL_))+=_32m*(*(double *)(_33i_*(ssize_t)sizeof(double)+ucor_)) ;}_33i_++;}while(_33i_<=convolutions_2h-((-1)-(-1)));}}};
    freemem(es);};
  }else{
    linsolve_10deriv((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).v_)).REAL_,(-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).w_)).REAL_);  linsolve_10deriv((-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).v_)).IMAG_,(-1),convolutions_2h,VELOCITY_s,(char*)&(*(struct COMPLEX_ *)(&(*(struct VELOCITY_ *)(_22w)).w_)).IMAG_);
     {int iy_= - 1  ;do{{ double _34r;
double _35i;
double _36r;
double _38r_37temp;
double _39i_37temp;
double _40r;
double _41i;
double _42r;
_34r=((_14r_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).REAL_-_15i_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).IMAG_)-(_18r_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).REAL_-_19i_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).IMAG_));
_35i=((_14r_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).IMAG_+_15i_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).REAL_)-(_18r_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).IMAG_+_19i_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).REAL_));
_36r=(1./(_20k2));
_38r_37temp=(_34r*_36r);
_39i_37temp=(_35i*_36r);
/*temp=_38r_37temp,_39i_37temp*/
      _40r=((_18r_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).REAL_-_19i_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).IMAG_)+(_14r_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).REAL_-_15i_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).IMAG_));
_41i=((_18r_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).IMAG_+_19i_17ibeta*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).REAL_)+(_14r_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).IMAG_+_15i_13ialpha*(*(struct COMPLEX_*)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).REAL_));
_42r=(1./(_20k2 ));
{register double temp=(_40r*_42r);(*(struct COMPLEX_ *)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).IMAG_=(_41i*_42r);(*(struct COMPLEX_ *)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).w_)).REAL_=temp;};
      {register double temp=_38r_37temp;(*(struct COMPLEX_ *)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).IMAG_=_39i_37temp;(*(struct COMPLEX_ *)(iy_*VELOCITY_s+(char*)&(*(struct VELOCITY_*)(_22w)).u_)).REAL_=temp;};
    }iy_+=1;}while(iy_<=ny_+1);}
  };
}iz_++;}while(iz_<=nz_);}ix_--;}while(ix_>=0);}
}}
