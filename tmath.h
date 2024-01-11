#include <math.h>

typedef double _verse;
typedef double _sec;
typedef double _alias;

#define TM_PI 3.14159265358979323846
#define TM_PI_2 1.57079632679489661923
#define TM_PI_4 0.78539816339744830962
#define TM_N_PI_2 -1*TM_PI_2
#define TM_N_PI_4 -1*TM_PI_4
#define TM_1_PI 0.31830988618379067154
#define TM_2_PI 0.63661977236758134308
#define TM_N_1_PI -1*TM_1_PI
#define TM_N_2_PI -1*TM_2_PI
#define TM_E 2.7182818284590452354
#define TM_TAU 2*PI
#define TM_SQRT2 1.41421356237309504880

//std functions
_verse ver (double X);
_verse vcs (double X);
_verse cvs (double X);
_verse cvc (double X);
_verse hv (double X);
_verse hvc (double X);
_verse hcv (double X);
_verse hcc (double X);
double chord (double X);
_sec sec (double X);
_sec csc (double X);
_sec exs (double X);
_sec exc (double X);
double cot (double X);

//arc functions
_verse aver (double X);
_verse avcs (double X);
_verse acvs (double X);
_verse acvc (double X);
_verse ahv (double X);
_verse ahvc (double X);
_verse ahcv (double X);
_verse ahcc (double X);
double acrd (double C, double r);
_sec asec (double X);
_sec acsc (double X);
_sec arcexsec (double X);
_sec arcexcsc (double X);
double arccot (double X);

//alias
_alias siv (double X);
_alias crd (double X);
_alias exs (double X);
_alias exc (double X);

//arc alias
_alias asiv (double X);
_alias arcexs (double X);
_alias arcexc (double X);
_alias acot (double X);