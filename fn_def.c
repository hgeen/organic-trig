#include "tmath.h"

//normal functions

_verse ver (double X) {
  return 1-cos(X);
} //versin

_verse vcs (double X) {
  return 1+cos(X);
}

_verse cvs (double X) {
  return 1-sin(X);
} //coversin

_verse cvc (double X) {
  return 1+sin(X);
} //covercos

_verse hv (double X) {
  return ver(X)/2;
} //haversin

_verse hvc (double X) {
  return vcs(X)/2;
} //havercos

_verse hcv (double X) {
  return cvs(X)/2;
} //hacoversin

_verse hcc (double X) {
  return cvc(X)/2;
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

_sec exs (double X) {
  return (1-cos(X))/cos (X);
}

_sec exc (double X) {
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

_sec asec (double X) {
  return acos(1/X);
}

_sec acsc (double X) {
  return asin(1/X);
}

_sec aexs (double X) {
  return asec(X+1);
}
_sec aexc (double X) {
  return acsc(X+1);
}

double arccot (double X) {
  return atan(1/X);
}



//alt functions, for simplicites sake

//verse sines

_alias siv (double X) {
  return ver(X);
} //versin

_alias crd (double X) {
  return chord(X);
} //chord

_alias exsec (double X) {
  return exs(X);
} //exsec

_alias excsc (double X) {
  return exc(X);
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

_alias arcsec (double X) {
  return asec(X);
}

_alias arccsc (double X) {
  return acsc(X);
}