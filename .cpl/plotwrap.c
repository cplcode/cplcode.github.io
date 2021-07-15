void trampbegin(int len);
void trampush(char* from,int len);
char* trampend(int len);
char* bytexec(char*);
#define bytepush(var) trampush((char*)&var,sizeof(var))
/**/


#define _GNU_SOURCE

#define _FILE_OFFSET_BITS 64

#define _LARGE_FILES

#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)



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

extern char errortemp_[(80+1)];

struct arrptr{int l,h; ssize_t i; char *a;};struct dynptr{void* p; int t;};extern char INTERRUPT;
extern void (*traphandler)(const char *);
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};extern struct freefunc *freestack;

#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}

#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name
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
extern void *errmalloc();
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
#include <plot.h>
void w_pl_newpl_r(int argc,char **stack){
plPlotter *result;plPlotter *(*function)(const char *type_,FILE *infile_,FILE *outfile_,FILE *errfile_,const plPlotterParams *plotter_params_);
const char *type;FILE *infile;FILE *outfile;FILE *errfile;const plPlotterParams *plotter_params;
mmoveto(&function,*stack,void*);
memcpy((void*)&type,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&infile,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&outfile,24+*stack,(ssize_t)sizeof(char*));memcpy((void*)&errfile,32+*stack,(ssize_t)sizeof(char*));memcpy((void*)&plotter_params,40+*stack,(ssize_t)sizeof(char*));result=(*function)(type,infile,outfile,errfile,plotter_params); mmovefrom(&result,*stack-((ssize_t)sizeof(char*)),plPlotter *);}
void w_pl_deletepl_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_);
plPlotter *plotter;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_newplparams(int argc,char **stack){
plPlotterParams *result;plPlotterParams *(*function)();

mmoveto(&function,*stack,void*);
result=(*function)(); mmovefrom(&result,*stack-((ssize_t)sizeof(char*)),plPlotterParams *);}
void w_pl_deleteplparams(int argc,char **stack){
int result;int (*function)(plPlotterParams *plotter_params_);
plPlotterParams *plotter_params;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter_params,8+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter_params); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_copyplparams(int argc,char **stack){
plPlotterParams *result;plPlotterParams *(*function)(const plPlotterParams *plotter_params_);
const plPlotterParams *plotter_params;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter_params,8+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter_params); mmovefrom(&result,*stack-((ssize_t)sizeof(char*)),plPlotterParams *);}
void w_pl_setplparam(int argc,char **stack){
int result;int (*function)(plPlotterParams *plotter_params_,const char *parameter_,void *value_);
plPlotterParams *plotter_params;const char *parameter;void *value;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter_params,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&parameter,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&value,24+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter_params,parameter,value); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_arc_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int xc_,int yc_,int x0_,int y0_,int x1_,int y1_);
plPlotter *plotter;int xc;int yc;int x0;int y0;int x1;int y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&xc,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&yc,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&x0,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,36+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,xc,yc,x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_box_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x0_,int y0_,int x1_,int y1_);
plPlotter *plotter;int x0;int y0;int x1;int y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,28+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_circle_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x_,int y_,int r_);
plPlotter *plotter;int x;int y;int r;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&r,24+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,x,y,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_cont_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x_,int y_);
plPlotter *plotter;int x;int y;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,20+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,x,y); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_label_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,const char *s_);
plPlotter *plotter;const char *s;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&s,16+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter,s); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_outfile_r(int argc,char **stack){
FILE *result;FILE *(*function)(plPlotter *plotter_,FILE *outfile_);
plPlotter *plotter;FILE *outfile;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&outfile,16+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter,outfile); mmovefrom(&result,*stack-((ssize_t)sizeof(char*)),FILE *);}
void w_pl_alabel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x_justify_,int y_justify_,const char *s_);
plPlotter *plotter;int x_justify;int y_justify;const char *s;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x_justify,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y_justify,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&s,24+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter,x_justify,y_justify,s); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_arcrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dxc_,int dyc_,int dx0_,int dy0_,int dx1_,int dy1_);
plPlotter *plotter;int dxc;int dyc;int dx0;int dy0;int dx1;int dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dxc,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dyc,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx0,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,36+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dxc,dyc,dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier2_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x0_,int y0_,int x1_,int y1_,int x2_,int y2_);
plPlotter *plotter;int x0;int y0;int x1;int y1;int x2;int y2;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&x2,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&y2,36+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,x0,y0,x1,y1,x2,y2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier2rel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dx0_,int dy0_,int dx1_,int dy1_,int dx2_,int dy2_);
plPlotter *plotter;int dx0;int dy0;int dx1;int dy1;int dx2;int dy2;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx2,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy2,36+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dx0,dy0,dx1,dy1,dx2,dy2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier3_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x0_,int y0_,int x1_,int y1_,int x2_,int y2_,int x3_,int y3_);
plPlotter *plotter;int x0;int y0;int x1;int y1;int x2;int y2;int x3;int y3;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&x2,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&y2,36+*stack,(ssize_t)sizeof(int));memcpy((void*)&x3,40+*stack,(ssize_t)sizeof(int));memcpy((void*)&y3,44+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,x0,y0,x1,y1,x2,y2,x3,y3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier3rel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dx0_,int dy0_,int dx1_,int dy1_,int dx2_,int dy2_,int dx3_,int dy3_);
plPlotter *plotter;int dx0;int dy0;int dx1;int dy1;int dx2;int dy2;int dx3;int dy3;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx2,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy2,36+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx3,40+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy3,44+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dx0,dy0,dx1,dy1,dx2,dy2,dx3,dy3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bgcolor_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int red_,int green_,int blue_);
plPlotter *plotter;int red;int green;int blue;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&red,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&green,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&blue,24+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,red,green,blue); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bgcolorname_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,const char *name_);
plPlotter *plotter;const char *name;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&name,16+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter,name); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_boxrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dx0_,int dy0_,int dx1_,int dy1_);
plPlotter *plotter;int dx0;int dy0;int dx1;int dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,28+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_circlerel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dx_,int dy_,int r_);
plPlotter *plotter;int dx;int dy;int r;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&r,24+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dx,dy,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_ellipse_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x_,int y_,int rx_,int ry_,int angle_);
plPlotter *plotter;int x;int y;int rx;int ry;int angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&rx,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&ry,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&angle,32+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,x,y,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_ellipserel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dx_,int dy_,int rx_,int ry_,int angle_);
plPlotter *plotter;int dx;int dy;int rx;int ry;int angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&rx,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&ry,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&angle,32+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dx,dy,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_filltype_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int level_);
plPlotter *plotter;int level;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&level,16+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,level); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fontsize_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int size_);
plPlotter *plotter;int size;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&size,16+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_linedash_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int n_,const int *dashes_,int offset_);
plPlotter *plotter;int n;const int *dashes;int offset;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&n,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dashes,20+*stack,(ssize_t)sizeof(char*));memcpy((void*)&offset,28+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,n,dashes,offset); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_marker_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int x_,int y_,int type_,int size_);
plPlotter *plotter;int x;int y;int type;int size;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&type,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,28+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,x,y,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_markerrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dx_,int dy_,int type_,int size_);
plPlotter *plotter;int dx;int dy;int type;int size;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&type,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,28+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dx,dy,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_orientation_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int direction_);
plPlotter *plotter;int direction;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&direction,16+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,direction); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_pointrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int dx_,int dy_);
plPlotter *plotter;int dx;int dy;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,20+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,dx,dy); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_textangle_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int angle_);
plPlotter *plotter;int angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&angle,16+*stack,(ssize_t)sizeof(int));result=(*function)(plotter,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_ffontname_r(int argc,char **stack){
double result;double (*function)(plPlotter *plotter_,const char *s_);
plPlotter *plotter;const char *s;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&s,16+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter,s); mmovefrom(&result,*stack-((ssize_t)sizeof(double)),double );}
void w_pl_ffontsize_r(int argc,char **stack){
double result;double (*function)(plPlotter *plotter_,double size_);
plPlotter *plotter;double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&size,16+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,size); mmovefrom(&result,*stack-((ssize_t)sizeof(double)),double );}
void w_pl_ftextangle_r(int argc,char **stack){
double result;double (*function)(plPlotter *plotter_,double angle_);
plPlotter *plotter;double angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&angle,16+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(double)),double );}
void w_pl_farc_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double xc_,double yc_,double x0_,double y0_,double x1_,double y1_);
plPlotter *plotter;double xc;double yc;double x0;double y0;double x1;double y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&xc,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&yc,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&x0,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,56+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,xc,yc,x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_farcrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dxc_,double dyc_,double dx0_,double dy0_,double dx1_,double dy1_);
plPlotter *plotter;double dxc;double dyc;double dx0;double dy0;double dx1;double dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dxc,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dyc,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx0,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,56+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dxc,dyc,dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier2_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double x0_,double y0_,double x1_,double y1_,double x2_,double y2_);
plPlotter *plotter;double x0;double y0;double x1;double y1;double x2;double y2;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&x2,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&y2,56+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,x0,y0,x1,y1,x2,y2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier2rel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dx0_,double dy0_,double dx1_,double dy1_,double dx2_,double dy2_);
plPlotter *plotter;double dx0;double dy0;double dx1;double dy1;double dx2;double dy2;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx2,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy2,56+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dx0,dy0,dx1,dy1,dx2,dy2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier3_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double x0_,double y0_,double x1_,double y1_,double x2_,double y2_,double x3_,double y3_);
plPlotter *plotter;double x0;double y0;double x1;double y1;double x2;double y2;double x3;double y3;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&x2,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&y2,56+*stack,(ssize_t)sizeof(double));memcpy((void*)&x3,64+*stack,(ssize_t)sizeof(double));memcpy((void*)&y3,72+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,x0,y0,x1,y1,x2,y2,x3,y3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier3rel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dx0_,double dy0_,double dx1_,double dy1_,double dx2_,double dy2_,double dx3_,double dy3_);
plPlotter *plotter;double dx0;double dy0;double dx1;double dy1;double dx2;double dy2;double dx3;double dy3;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx2,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy2,56+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx3,64+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy3,72+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dx0,dy0,dx1,dy1,dx2,dy2,dx3,dy3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbox_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double x0_,double y0_,double x1_,double y1_);
plPlotter *plotter;double x0;double y0;double x1;double y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,40+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fboxrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dx0_,double dy0_,double dx1_,double dy1_);
plPlotter *plotter;double dx0;double dy0;double dx1;double dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,40+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcircle_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double x_,double y_,double r_);
plPlotter *plotter;double x;double y;double r;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&r,32+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,x,y,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcirclerel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dx_,double dy_,double r_);
plPlotter *plotter;double dx;double dy;double r;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&r,32+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dx,dy,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcont_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double x_,double y_);
plPlotter *plotter;double x;double y;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,24+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,x,y); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcontrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dx_,double dy_);
plPlotter *plotter;double dx;double dy;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,24+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dx,dy); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fellipse_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double x_,double y_,double rx_,double ry_,double angle_);
plPlotter *plotter;double x;double y;double rx;double ry;double angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&rx,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&ry,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&angle,48+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,x,y,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fellipserel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dx_,double dy_,double rx_,double ry_,double angle_);
plPlotter *plotter;double dx;double dy;double rx;double ry;double angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&rx,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&ry,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&angle,48+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dx,dy,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_flinedash_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,int n_,const double *dashes_,double offset_);
plPlotter *plotter;int n;const double *dashes;double offset;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&n,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dashes,20+*stack,(ssize_t)sizeof(char*));memcpy((void*)&offset,28+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,n,dashes,offset); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_flinewidth_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double size_);
plPlotter *plotter;double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&size,16+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fmarker_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double x_,double y_,int type_,double size_);
plPlotter *plotter;double x;double y;int type;double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&x,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&type,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,36+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,x,y,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fmarkerrel_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double dx_,double dy_,int type_,double size_);
plPlotter *plotter;double dx;double dy;int type;double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&dx,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&type,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,36+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,dx,dy,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fconcat_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double m0_,double m1_,double m2_,double m3_,double m4_,double m5_);
plPlotter *plotter;double m0;double m1;double m2;double m3;double m4;double m5;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&m0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&m1,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&m2,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&m3,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&m4,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&m5,56+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,m0,m1,m2,m3,m4,m5); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fmiterlimit_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double limit_);
plPlotter *plotter;double limit;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&limit,16+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,limit); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_frotate_r(int argc,char **stack){
int result;int (*function)(plPlotter *plotter_,double theta_);
plPlotter *plotter;double theta;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&theta,16+*stack,(ssize_t)sizeof(double));result=(*function)(plotter,theta); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_newpl(int argc,char **stack){
int result;int (*function)(const char *type_,FILE *infile_,FILE *outfile_,FILE *errfile_);
const char *type;FILE *infile;FILE *outfile;FILE *errfile;
mmoveto(&function,*stack,void*);
memcpy((void*)&type,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&infile,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&outfile,24+*stack,(ssize_t)sizeof(char*));memcpy((void*)&errfile,32+*stack,(ssize_t)sizeof(char*));result=(*function)(type,infile,outfile,errfile); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_selectpl(int argc,char **stack){
int result;int (*function)(int handle_);
int handle;
mmoveto(&function,*stack,void*);
memcpy((void*)&handle,8+*stack,(ssize_t)sizeof(int));result=(*function)(handle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_parampl(int argc,char **stack){
int result;int (*function)(const char *parameter_,void *value_);
const char *parameter;void *value;
mmoveto(&function,*stack,void*);
memcpy((void*)&parameter,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&value,16+*stack,(ssize_t)sizeof(char*));result=(*function)(parameter,value); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_arc(int argc,char **stack){
int result;int (*function)(int xc_,int yc_,int x0_,int y0_,int x1_,int y1_);
int xc;int yc;int x0;int y0;int x1;int y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&xc,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&yc,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&x0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,28+*stack,(ssize_t)sizeof(int));result=(*function)(xc,yc,x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_box(int argc,char **stack){
int result;int (*function)(int x0_,int y0_,int x1_,int y1_);
int x0;int y0;int x1;int y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&x0,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,20+*stack,(ssize_t)sizeof(int));result=(*function)(x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_circle(int argc,char **stack){
int result;int (*function)(int x_,int y_,int r_);
int x;int y;int r;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&r,16+*stack,(ssize_t)sizeof(int));result=(*function)(x,y,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_closepl(int argc,char **stack){
int result;int (*function)();

mmoveto(&function,*stack,void*);
result=(*function)(); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_cont(int argc,char **stack){
int result;int (*function)(int x_,int y_);
int x;int y;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,12+*stack,(ssize_t)sizeof(int));result=(*function)(x,y); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_label(int argc,char **stack){
int result;int (*function)(const char *s_);
const char *s;
mmoveto(&function,*stack,void*);
memcpy((void*)&s,8+*stack,(ssize_t)sizeof(char*));result=(*function)(s); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_outfile(int argc,char **stack){
FILE *result;FILE *(*function)(FILE *outfile_);
FILE *outfile;
mmoveto(&function,*stack,void*);
memcpy((void*)&outfile,8+*stack,(ssize_t)sizeof(char*));result=(*function)(outfile); mmovefrom(&result,*stack-((ssize_t)sizeof(char*)),FILE *);}
void w_pl_alabel(int argc,char **stack){
int result;int (*function)(int x_justify_,int y_justify_,const char *s_);
int x_justify;int y_justify;const char *s;
mmoveto(&function,*stack,void*);
memcpy((void*)&x_justify,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y_justify,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&s,16+*stack,(ssize_t)sizeof(char*));result=(*function)(x_justify,y_justify,s); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_arcrel(int argc,char **stack){
int result;int (*function)(int dxc_,int dyc_,int dx0_,int dy0_,int dx1_,int dy1_);
int dxc;int dyc;int dx0;int dy0;int dx1;int dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&dxc,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dyc,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx0,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,28+*stack,(ssize_t)sizeof(int));result=(*function)(dxc,dyc,dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier2(int argc,char **stack){
int result;int (*function)(int x0_,int y0_,int x1_,int y1_,int x2_,int y2_);
int x0;int y0;int x1;int y1;int x2;int y2;
mmoveto(&function,*stack,void*);
memcpy((void*)&x0,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&x2,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&y2,28+*stack,(ssize_t)sizeof(int));result=(*function)(x0,y0,x1,y1,x2,y2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier2rel(int argc,char **stack){
int result;int (*function)(int dx0_,int dy0_,int dx1_,int dy1_,int dx2_,int dy2_);
int dx0;int dy0;int dx1;int dy1;int dx2;int dy2;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx0,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx2,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy2,28+*stack,(ssize_t)sizeof(int));result=(*function)(dx0,dy0,dx1,dy1,dx2,dy2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier3(int argc,char **stack){
int result;int (*function)(int x0_,int y0_,int x1_,int y1_,int x2_,int y2_,int x3_,int y3_);
int x0;int y0;int x1;int y1;int x2;int y2;int x3;int y3;
mmoveto(&function,*stack,void*);
memcpy((void*)&x0,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y0,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&x1,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&y1,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&x2,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&y2,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&x3,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&y3,36+*stack,(ssize_t)sizeof(int));result=(*function)(x0,y0,x1,y1,x2,y2,x3,y3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bezier3rel(int argc,char **stack){
int result;int (*function)(int dx0_,int dy0_,int dx1_,int dy1_,int dx2_,int dy2_,int dx3_,int dy3_);
int dx0;int dy0;int dx1;int dy1;int dx2;int dy2;int dx3;int dy3;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx0,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx2,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy2,28+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx3,32+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy3,36+*stack,(ssize_t)sizeof(int));result=(*function)(dx0,dy0,dx1,dy1,dx2,dy2,dx3,dy3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bgcolor(int argc,char **stack){
int result;int (*function)(int red_,int green_,int blue_);
int red;int green;int blue;
mmoveto(&function,*stack,void*);
memcpy((void*)&red,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&green,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&blue,16+*stack,(ssize_t)sizeof(int));result=(*function)(red,green,blue); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_bgcolorname(int argc,char **stack){
int result;int (*function)(const char *name_);
const char *name;
mmoveto(&function,*stack,void*);
memcpy((void*)&name,8+*stack,(ssize_t)sizeof(char*));result=(*function)(name); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_boxrel(int argc,char **stack){
int result;int (*function)(int dx0_,int dy0_,int dx1_,int dy1_);
int dx0;int dy0;int dx1;int dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx0,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy0,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&dx1,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy1,20+*stack,(ssize_t)sizeof(int));result=(*function)(dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_circlerel(int argc,char **stack){
int result;int (*function)(int dx_,int dy_,int r_);
int dx;int dy;int r;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&r,16+*stack,(ssize_t)sizeof(int));result=(*function)(dx,dy,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_ellipse(int argc,char **stack){
int result;int (*function)(int x_,int y_,int rx_,int ry_,int angle_);
int x;int y;int rx;int ry;int angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&rx,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&ry,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&angle,24+*stack,(ssize_t)sizeof(int));result=(*function)(x,y,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_ellipserel(int argc,char **stack){
int result;int (*function)(int dx_,int dy_,int rx_,int ry_,int angle_);
int dx;int dy;int rx;int ry;int angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&rx,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&ry,20+*stack,(ssize_t)sizeof(int));memcpy((void*)&angle,24+*stack,(ssize_t)sizeof(int));result=(*function)(dx,dy,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_filltype(int argc,char **stack){
int result;int (*function)(int level_);
int level;
mmoveto(&function,*stack,void*);
memcpy((void*)&level,8+*stack,(ssize_t)sizeof(int));result=(*function)(level); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fontsize(int argc,char **stack){
int result;int (*function)(int size_);
int size;
mmoveto(&function,*stack,void*);
memcpy((void*)&size,8+*stack,(ssize_t)sizeof(int));result=(*function)(size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_linedash(int argc,char **stack){
int result;int (*function)(int n_,const int *dashes_,int offset_);
int n;const int *dashes;int offset;
mmoveto(&function,*stack,void*);
memcpy((void*)&n,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dashes,12+*stack,(ssize_t)sizeof(char*));memcpy((void*)&offset,20+*stack,(ssize_t)sizeof(int));result=(*function)(n,dashes,offset); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_marker(int argc,char **stack){
int result;int (*function)(int x_,int y_,int type_,int size_);
int x;int y;int type;int size;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&y,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&type,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,20+*stack,(ssize_t)sizeof(int));result=(*function)(x,y,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_markerrel(int argc,char **stack){
int result;int (*function)(int dx_,int dy_,int type_,int size_);
int dx;int dy;int type;int size;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,12+*stack,(ssize_t)sizeof(int));memcpy((void*)&type,16+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,20+*stack,(ssize_t)sizeof(int));result=(*function)(dx,dy,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_orientation(int argc,char **stack){
int result;int (*function)(int direction_);
int direction;
mmoveto(&function,*stack,void*);
memcpy((void*)&direction,8+*stack,(ssize_t)sizeof(int));result=(*function)(direction); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_pointrel(int argc,char **stack){
int result;int (*function)(int dx_,int dy_);
int dx;int dy;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dy,12+*stack,(ssize_t)sizeof(int));result=(*function)(dx,dy); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_textangle(int argc,char **stack){
int result;int (*function)(int angle_);
int angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&angle,8+*stack,(ssize_t)sizeof(int));result=(*function)(angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_ffontname(int argc,char **stack){
double result;double (*function)(const char *s_);
const char *s;
mmoveto(&function,*stack,void*);
memcpy((void*)&s,8+*stack,(ssize_t)sizeof(char*));result=(*function)(s); mmovefrom(&result,*stack-((ssize_t)sizeof(double)),double );}
void w_pl_ffontsize(int argc,char **stack){
double result;double (*function)(double size_);
double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&size,8+*stack,(ssize_t)sizeof(double));result=(*function)(size); mmovefrom(&result,*stack-((ssize_t)sizeof(double)),double );}
void w_pl_ftextangle(int argc,char **stack){
double result;double (*function)(double angle_);
double angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&angle,8+*stack,(ssize_t)sizeof(double));result=(*function)(angle); mmovefrom(&result,*stack-((ssize_t)sizeof(double)),double );}
void w_pl_farc(int argc,char **stack){
int result;int (*function)(double xc_,double yc_,double x0_,double y0_,double x1_,double y1_);
double xc;double yc;double x0;double y0;double x1;double y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&xc,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&yc,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&x0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,48+*stack,(ssize_t)sizeof(double));result=(*function)(xc,yc,x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_farcrel(int argc,char **stack){
int result;int (*function)(double dxc_,double dyc_,double dx0_,double dy0_,double dx1_,double dy1_);
double dxc;double dyc;double dx0;double dy0;double dx1;double dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&dxc,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dyc,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx0,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,48+*stack,(ssize_t)sizeof(double));result=(*function)(dxc,dyc,dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier2(int argc,char **stack){
int result;int (*function)(double x0_,double y0_,double x1_,double y1_,double x2_,double y2_);
double x0;double y0;double x1;double y1;double x2;double y2;
mmoveto(&function,*stack,void*);
memcpy((void*)&x0,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&x2,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&y2,48+*stack,(ssize_t)sizeof(double));result=(*function)(x0,y0,x1,y1,x2,y2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier2rel(int argc,char **stack){
int result;int (*function)(double dx0_,double dy0_,double dx1_,double dy1_,double dx2_,double dy2_);
double dx0;double dy0;double dx1;double dy1;double dx2;double dy2;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx0,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx2,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy2,48+*stack,(ssize_t)sizeof(double));result=(*function)(dx0,dy0,dx1,dy1,dx2,dy2); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier3(int argc,char **stack){
int result;int (*function)(double x0_,double y0_,double x1_,double y1_,double x2_,double y2_,double x3_,double y3_);
double x0;double y0;double x1;double y1;double x2;double y2;double x3;double y3;
mmoveto(&function,*stack,void*);
memcpy((void*)&x0,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&x2,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&y2,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&x3,56+*stack,(ssize_t)sizeof(double));memcpy((void*)&y3,64+*stack,(ssize_t)sizeof(double));result=(*function)(x0,y0,x1,y1,x2,y2,x3,y3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbezier3rel(int argc,char **stack){
int result;int (*function)(double dx0_,double dy0_,double dx1_,double dy1_,double dx2_,double dy2_,double dx3_,double dy3_);
double dx0;double dy0;double dx1;double dy1;double dx2;double dy2;double dx3;double dy3;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx0,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx2,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy2,48+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx3,56+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy3,64+*stack,(ssize_t)sizeof(double));result=(*function)(dx0,dy0,dx1,dy1,dx2,dy2,dx3,dy3); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fbox(int argc,char **stack){
int result;int (*function)(double x0_,double y0_,double x1_,double y1_);
double x0;double y0;double x1;double y1;
mmoveto(&function,*stack,void*);
memcpy((void*)&x0,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&y0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&x1,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&y1,32+*stack,(ssize_t)sizeof(double));result=(*function)(x0,y0,x1,y1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fboxrel(int argc,char **stack){
int result;int (*function)(double dx0_,double dy0_,double dx1_,double dy1_);
double dx0;double dy0;double dx1;double dy1;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx0,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy0,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&dx1,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy1,32+*stack,(ssize_t)sizeof(double));result=(*function)(dx0,dy0,dx1,dy1); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcircle(int argc,char **stack){
int result;int (*function)(double x_,double y_,double r_);
double x;double y;double r;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&r,24+*stack,(ssize_t)sizeof(double));result=(*function)(x,y,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcirclerel(int argc,char **stack){
int result;int (*function)(double dx_,double dy_,double r_);
double dx;double dy;double r;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&r,24+*stack,(ssize_t)sizeof(double));result=(*function)(dx,dy,r); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcont(int argc,char **stack){
int result;int (*function)(double x_,double y_);
double x;double y;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,16+*stack,(ssize_t)sizeof(double));result=(*function)(x,y); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fcontrel(int argc,char **stack){
int result;int (*function)(double dx_,double dy_);
double dx;double dy;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,16+*stack,(ssize_t)sizeof(double));result=(*function)(dx,dy); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fellipse(int argc,char **stack){
int result;int (*function)(double x_,double y_,double rx_,double ry_,double angle_);
double x;double y;double rx;double ry;double angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&rx,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&ry,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&angle,40+*stack,(ssize_t)sizeof(double));result=(*function)(x,y,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fellipserel(int argc,char **stack){
int result;int (*function)(double dx_,double dy_,double rx_,double ry_,double angle_);
double dx;double dy;double rx;double ry;double angle;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&rx,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&ry,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&angle,40+*stack,(ssize_t)sizeof(double));result=(*function)(dx,dy,rx,ry,angle); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_flinedash(int argc,char **stack){
int result;int (*function)(int n_,const double *dashes_,double offset_);
int n;const double *dashes;double offset;
mmoveto(&function,*stack,void*);
memcpy((void*)&n,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&dashes,12+*stack,(ssize_t)sizeof(char*));memcpy((void*)&offset,20+*stack,(ssize_t)sizeof(double));result=(*function)(n,dashes,offset); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_flinewidth(int argc,char **stack){
int result;int (*function)(double size_);
double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&size,8+*stack,(ssize_t)sizeof(double));result=(*function)(size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fmarker(int argc,char **stack){
int result;int (*function)(double x_,double y_,int type_,double size_);
double x;double y;int type;double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&x,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&y,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&type,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,28+*stack,(ssize_t)sizeof(double));result=(*function)(x,y,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fmarkerrel(int argc,char **stack){
int result;int (*function)(double dx_,double dy_,int type_,double size_);
double dx;double dy;int type;double size;
mmoveto(&function,*stack,void*);
memcpy((void*)&dx,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&dy,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&type,24+*stack,(ssize_t)sizeof(int));memcpy((void*)&size,28+*stack,(ssize_t)sizeof(double));result=(*function)(dx,dy,type,size); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fconcat(int argc,char **stack){
int result;int (*function)(double m0_,double m1_,double m2_,double m3_,double m4_,double m5_);
double m0;double m1;double m2;double m3;double m4;double m5;
mmoveto(&function,*stack,void*);
memcpy((void*)&m0,8+*stack,(ssize_t)sizeof(double));memcpy((void*)&m1,16+*stack,(ssize_t)sizeof(double));memcpy((void*)&m2,24+*stack,(ssize_t)sizeof(double));memcpy((void*)&m3,32+*stack,(ssize_t)sizeof(double));memcpy((void*)&m4,40+*stack,(ssize_t)sizeof(double));memcpy((void*)&m5,48+*stack,(ssize_t)sizeof(double));result=(*function)(m0,m1,m2,m3,m4,m5); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_fmiterlimit(int argc,char **stack){
int result;int (*function)(double limit_);
double limit;
mmoveto(&function,*stack,void*);
memcpy((void*)&limit,8+*stack,(ssize_t)sizeof(double));result=(*function)(limit); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_pl_frotate(int argc,char **stack){
int result;int (*function)(double theta_);
double theta;
mmoveto(&function,*stack,void*);
memcpy((void*)&theta,8+*stack,(ssize_t)sizeof(double));result=(*function)(theta); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w__pl_get_hershey_font_info(int argc,char **stack){
void *result;void *(*function)(plPlotter *plotter_);
plPlotter *plotter;
mmoveto(&function,*stack,void*);
memcpy((void*)&plotter,8+*stack,(ssize_t)sizeof(char*));result=(*function)(plotter); mmovefrom(&result,*stack-((ssize_t)sizeof(char*)),void *);}
void w_pl_libplot_warning_handler(int argc,char **stack){
int result;int (*function)(const char *msg_);
const char *msg;
mmoveto(&function,*stack,void*);
memcpy((void*)&msg,8+*stack,(ssize_t)sizeof(char*));result=(*function)(msg); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_traphandler(int argc,char **stack){
void (*function)(const char *);const char *_1;
mmoveto(&function,*stack,void*);
memcpy((void*)&_1,8+*stack,(ssize_t)sizeof(char*));(*function)(_1);}
void w_traprestore(int argc,char **stack){
void (*function)(void *ptr_);void *ptr;
mmoveto(&function,*stack,void*);
memcpy((void*)&ptr,8+*stack,(ssize_t)sizeof(char*));(*function)(ptr);}
void w_friexecerror(int argc,char **stack){
int result;int (*function)(char **s_);
char **s;
mmoveto(&function,*stack,void*);
memcpy((void*)&s,8+*stack,(ssize_t)sizeof(char*));result=(*function)(s); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_dynptrerr(int argc,char **stack){
int result;int (*function)(int type_);
int type;
mmoveto(&function,*stack,void*);
memcpy((void*)&type,8+*stack,(ssize_t)sizeof(int));result=(*function)(type); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_errmalloc(int argc,char **stack){
void *result;void *(*function)();

mmoveto(&function,*stack,void*);
result=(*function)(); mmovefrom(&result,*stack-((ssize_t)sizeof(char*)),void *);}
void w_ioerr(int argc,char **stack){
void (*function)(FILE *fil_);FILE *fil;
mmoveto(&function,*stack,void*);
memcpy((void*)&fil,8+*stack,(ssize_t)sizeof(char*));(*function)(fil);}
void w_errfclose(int argc,char **stack){
void (*function)(void *voidf_);void *voidf;
mmoveto(&function,*stack,void*);
memcpy((void*)&voidf,8+*stack,(ssize_t)sizeof(char*));(*function)(voidf);}
void w_errfopen(int argc,char **stack){
void (*function)(FILE **f_,const char *name_,int mode_);FILE **f;const char *name;int mode;
mmoveto(&function,*stack,void*);
memcpy((void*)&f,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&name,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&mode,24+*stack,(ssize_t)sizeof(int));(*function)(f,name,mode);}
void w_scanrec(int argc,char **stack){
int result;int (*function)(FILE *f_,const char *format_,void *var_);
FILE *f;const char *format;void *var;
mmoveto(&function,*stack,void*);
memcpy((void*)&f,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&format,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&var,24+*stack,(ssize_t)sizeof(char*));result=(*function)(f,format,var); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_scanbool(int argc,char **stack){
int result;int (*function)(FILE *f_,const char *format_,int *var_);
FILE *f;const char *format;int *var;
mmoveto(&function,*stack,void*);
memcpy((void*)&f,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&format,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&var,24+*stack,(ssize_t)sizeof(char*));result=(*function)(f,format,var); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_myfgets(int argc,char **stack){
int result;int (*function)(char *name_,char *var_,char *varend_,FILE *f_);
char *name;char *var;char *varend;FILE *f;
mmoveto(&function,*stack,void*);
memcpy((void*)&name,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&var,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&varend,24+*stack,(ssize_t)sizeof(char*));memcpy((void*)&f,32+*stack,(ssize_t)sizeof(char*));result=(*function)(name,var,varend,f); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_mygetline(int argc,char **stack){
int result;int (*function)(char *name_,char **var_,FILE *f_);
char *name;char **var;FILE *f;
mmoveto(&function,*stack,void*);
memcpy((void*)&name,8+*stack,(ssize_t)sizeof(char*));memcpy((void*)&var,16+*stack,(ssize_t)sizeof(char*));memcpy((void*)&f,24+*stack,(ssize_t)sizeof(char*));result=(*function)(name,var,f); mmovefrom(&result,*stack-((ssize_t)sizeof(int)),int );}
void w_trapsignal(int argc,char **stack){
void (*function)(int signum_,siginfo_t *info_,void *ucontext_);int signum;siginfo_t *info;void *ucontext;
mmoveto(&function,*stack,void*);
memcpy((void*)&signum,8+*stack,(ssize_t)sizeof(int));memcpy((void*)&info,12+*stack,(ssize_t)sizeof(char*));memcpy((void*)&ucontext,20+*stack,(ssize_t)sizeof(char*));(*function)(signum,info,ucontext);}
