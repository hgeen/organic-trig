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

_verse versin (double X) {
  return 1-cos(X);
}

_verse vercos (double X) {
  return 1+cos(X);
}

_verse coversin (double X) {
  return 1-sin(X);
}

_verse covercos (double X) {
  return 1+sin(X);
}

_verse haversin (double X) {
  return versin(X)/2;
}

_verse havercos (double X) {
  return vercos(X)/2;
}
_verse hacoversin (double X) {
  return coversin(X)/2;
}

_verse hacovercos (double X) {
  return covercos(X)/2;
}

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

_verse arcversin (double X) {
  return acos(1-X);
}

_verse arcvercos (double X) {
  return acos(X-1);
}

_verse arccoversin (double X) {
  return asin(1-X);
}

_verse arccovercos (double X) {
  return asin(X-1);
}

_verse archaversin (double X) {
  return 2*asin(sqrt(X));
}
_verse archavercos (double X) {
  return 2*acos(sqrt(X));
}

_verse archacoversin (double X) {
  return asin(1-(2*X));
}

_verse archacovercos (double X) {
  return asin((2*X)-1);
}

double acrd (double C, double r) {
  return 2*asin(C/(2*r));
}

_sec arcsec (double X) {
  return acos(1/X);
}

_sec arccsc (double X) {
  return asin(1/X);
}

_sec arcexsec (double X) {
  return arcsec(X+1);
}
_sec arcexcsc (double X) {
  return arccsc( X+1);
}

double arccot (double X) {
  return atan(1/X);
}



//alt functions, for simplicites sake

//verse sines
_alias ver (double X) {
  return versin(X);
} //versin

_alias siv (double X) {
  return versin(X);
} //versin

_alias vcs (double X) {
  return vercos(X);
} //vercos

_alias cvs (double X) {
  return coversin(X);
} //coversin

_alias cvc (double X) {
  return covercos(X);
} //covercos

_alias hv (double X) {
  return haversin(X);
} //haversin

_alias hvs (double X) {
  return haversin(X);
} //haversin

_alias hvc (double X) {
  return havercos(X);
} //havercos

_alias hcv (double X) {
  return hacoversin(X);
} //hacoversin

_alias hcc (double X) {
  return hacovercos(X);
} //hacovercos

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

_alias aver (double X) {
  return arcversin(X);
} //arcversin

_alias asiv (double X) {
  return arcversin(X);
} //arcversin

_alias avcs (double X) {
  return arcvercos(X);
} // arcvercos

_alias acvs (double X) {
  return arccoversin(X);
} //arcoversin

_alias acvc (double X) {
  return arccovercos(X);
}

_alias ahv (double X) {
  return archaversin(X);
} //haversin

_alias ahvs (double X) {
  return archaversin(X);
} //haversin

_alias ahvc (double X) {
  return archavercos(X);
} //havercos

_alias ahcv (double X) {
  return archacoversin(X);
} //hacoversin

_alias ahcc (double X) {
  return archacovercos(X);
} //hacovercos

_alias aexs (double X) {
  return arcexsec(X);
}

_alias aexc (double X) {
  return arcexcsc(X);
}