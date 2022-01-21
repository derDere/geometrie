#ifndef GEOMETRIE_HPP
#define GEOMETRIE_HPP

#include <vector>
#include <string>

using namespace std;

namespace geometrie {

  class cPrintable;
  class cVector2D : cPrintable;
  class cSize : cVector2D;
  class cPoint : cVector2D;
  class cRect : cPrintable;
  class cLine : cPrintable;
  class cCircle : cPrintable;

  cVector2D operator +(cVector2D, cVector2D);
  cVector2D operator +(cVector2D, float);
  cVector2D operator +(cVector2D, int);

  cVector2D operator -(cVector2D, sVector2D);
  cVector2D operator -(cVector2D, float);
  cvector2D operator -(cVector2D, int);

  cVector2D operator *(cVector2D, sVector2D);
  cVector2D operator *(cVector2D, float);
  cVector2D operator *(cVector2D, int);

  cVector2D operator /(cVector2D, sVector2D);
  cVector2D operator /(cVector2D, float);
  cVector2D operator /(cVector2D, int);

  cVector2D operator %(cVector2D, sVector2D);
  cVector2D operator %(cVector2D, float);
  cVector2D operator %(cVector2D, int);

  cVector2D operator ++(cVector2D);
  cVector2D operator --(cVector2D);

  bool operator <(cVector2D, cVector2D);
  bool operator <(cVector2D, float);
  bool operator <(cVector2D, int);

  bool operator >(cVector2D, cVector2D);
  bool operator >(cVector2D, float);
  bool operator >(cVector2D, int);

  bool operator <=(cVector2D, cVector2D);
  bool operator <=(cVector2D, float);
  bool operator <=(cVector2D, int);

  bool operator >=(cVector2D, cVector2D);
  bool operator >=(cVector2D, float);
  bool operator >=(cVector2D, int);

  bool operator ==(cVector2D, cVector2D);
  bool operator !=(cVector2D, cVector2D);

  class cPrintable {
    public:
      virtual string ToString();
  }

  class cVector2D {
    public:
      float x, y;

      float GetLength();
      void Normalize();

      virtual string ToString();
  }
}

#endif
