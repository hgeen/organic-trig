#include "tmath.h"

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

//normal functions

_verse ver (double X) {
  return 1-cos(X);
} //versin

_verse vercos (double X) {
  return 1+cos(X);
}

_verse cvs (double X) {
  return 1-sin(X);
} //coversin

_verse cvc (double X) {
  return 1+sin(X);
} //covercos

_verse hv (double X) {
  return versin(X)/2;
} //haversin

_verse hvc (double X) {
  return vercos(X)/2;
} //havercos

_verse hcv (double X) {
  return coversin(X)/2;
} //hacoversin

_verse hcc (double X) {
  return covercos(X)/2;
} //hacovercos

double chord (double X) {
  return 2*sin(X/2);
}

_sec sec (double X) {
  return 1/cos(X);
}

_sec csc (double X) {
  return 1/sin(X);
}

_sec exsec (double X) {
  return (1-cos(X))/cos (X);
}

_sec excsc (double X) {
  return (1-sin(X))/sin(X);
}

double cot (double X) {
  return 1/tan(X);
}


//arc functions

_verse aver (double X) {
  return acos(1-X);
}

_verse avcs (double X) {
  return acos(X-1);
} //arcvercos

_verse acvs (double X) {
  return asin(1-X);
} //arccoversin

_verse acvc (double X) {
  return asin(X-1);
} //arccovercos

_verse ahv (double X) {
  return 2*asin(sqrt(X));
} //archaversin

_verse ahvc (double X) {
  return 2*acos(sqrt(X));
} //archavercos

_verse ahcv (double X) {
  return asin(1-(2*X));
} //archacoversin

_verse ahcc (double X) {
  return asin((2*X)-1);
} //archacovercos

double acrd (double C, double r) {
  return 2*asin(C/(2*r));
}

_sec arcsec (double X) {
  return acos(1/X);
}

_sec arccsc (double X) {
  return asin(1/X);
}

_sec aexs (double X) {
  return arcsec(X+1);
}
_sec aexc (double X) {
  return arccsc( X+1);
}

double arccot (double X) {
  return atan(1/X);
}



//alt functions, for simplicites sake

//verse sines

_alias siv (double X) {
  return ver(X);
} //versin

_alias vcs (double X) {
  return vercos(X);
} //vercos

_alias crd (double X) {
  return chord(X);
} //chord

_alias exs (double X) {
  return exsec(X);
} //exsec

_alias exc (double X) {
  return exsec(X);
} //excsc


//arc verse

_alias asiv (double X) {
  return aver(X);
} //arcversin

_alias arcexs (double X) {
  return aexs(X);
}

_alias arcexc (double X) {
  return aexc(X);
}

_alias acot (double X) {
  return arccot(X);
}