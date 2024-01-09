#include <math.h>

typedef double _verse;
typedef double _sec;
typedef double _alias;

//std functions
_verse versin (double X);
_verse vercos (double X);
_verse coversin (double X);
_verse covercos (double X);
_verse haversin (double X);
_verse havercos (double X);
_verse hacoversin (double X);
_verse hacovercos (double X);
double chord (double X);
_sec sec (double X);
_sec csc (double X);
_sec exsec (double X);
_sec excsc (double X);
double cot (double X);

//arc functions
_verse arcversin (double X);
_verse arcvercos (double X);
_verse arccoversin (double X);
_verse arccovercos (double X);
_verse archaversin (double X);
_verse archavercos (double X);
_verse archacoversin (double X);
_verse archacovercos (double X);
double acrd (double C, double r);
_sec arcsec (double X);
_sec arccsc (double X);
_sec arcexsec (double X);
_sec arcexcsc (double X);
double arccot (double X);

//alias
_alias ver (double X);
_alias siv (double X);
_alias vcs (double X);
_alias cvs (double X);
_alias cvc (double X);
_alias hv (double X);
_alias hvs (double X);
_alias hvc (double X);
_alias hcv (double X);
_alias hcc (double X);
_alias crd (double X);
_alias exs (double X);
_alias exc (double X);

//arc alias

_alias aver (double X);
_alias asiv (double X);
_alias avcs (double X);
_alias acvs (double X);
_alias acvc (double X);
_alias ahv (double X);
_alias ahvs (double X);
_alias ahvc (double X);
_alias ahcv (double X);
_alias ahcc (double X);
_alias aexs (double X);
_alias aexc (double X);