#include <math.h>

#define TM_PI 3.14159265358979323846
#define TM_PI_2 1.57079632679489661923
#define TM_PI_4 0.78539816339744830962
#define TM_N_PI_2 -1*TM_PI_2
#define TM_N_PI_4 -1*TM_PI_4
#define TM_N_1_PI 0.31830988618379067154
#define TM_N_2_PI 0.63661977236758134308
#define TM_E 2.7182818284590452354
#define TM_TAU 2*PI
#define TM_SQRT2 1.41421356237309504880

typedef double _verse;
typedef double _alias;

double versin (double X);
double vercos (double X);
double coversin (double X);
double covercos (double X);
double haversin (double X);
double havercos (double X);
double hacoversin (double X);
double hacovercos (double X);
double arcversin (double X);
double arcvercos (double X);
double arccoversin (double X);
double arccovercos (double X);
double archaversin (double X);
double archavercos (double X);
double archacoversin (double X);
double archacovercos (double X);
double chord (double X);
double arccrd (double C, double r);

//alt functions, for simplicites sake

//verse sines
_alias ver (double X); //versin
_alias siv (double X); //versin
_alias vcs (double X); //vercos
_alias cvs (double X); //coversin
_alias cvc (double X); //covercos