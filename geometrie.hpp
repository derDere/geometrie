#ifndef GEOMETRIE_HPP
#define GEOMETRIE_HPP

#include <vector>
#include <string>

using namespace std;

namespace geometrie {

  class cPrintable;
  class cAngle : cPrintable;
  class cVector2D : cPrintable;
  class cSize : cVector2D;
  class cPoint : cVector2D;
  class cRect : cPrintable;
  class cCircle : cPrintable;
  class cLine : cPrintable;
  class cRay : cLine;
  class cLineSegment : cLine;

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
      float a, b;

      float GetLength();
      cAngle GetAngle();
      void Normalize();
      void Rotate(float);
      void Rotate(cAngle);

      virtual string ToString();

      cVector2D();
      cVector2D(int);
      cVector2D(float);
      cVector2D(int, int);
      cVector2D(float, float);
      cVector2D(int, float);
      cVector2D(float, int);
      cVector2D(Vector2D&);
      cVector2D(cAngle, float);
      cVector2D(cAngle, int);

      ~cVector2D();
  }

  class cAngle {
    private:
      float rad;

    public:
      float GetDegrees();
      void SetDegrees(float);

      float GetRadians();
      void SetRadians(float);

      void Approach(cAngle, float);
      void Approach(cAngle, int);
      void ApproachRadians(float, float);
      void ApproachRadians(float, int);
      void ApproachDegrees(int, float);
      void ApproachDegrees(int, int);
      void ApproachDegrees(float, float);
      void ApproachDegrees(float, int);

      virtual string ToString();

      cAngle();
      cAngle(float);
      cAngle(int);
      cAngle(cAngle);
      cAngle(cVector2D);
      cAngle(cVector2D, cVector2D);

      ~cAngle();

      static cAngle FromDegrees(float);
      static cAngle FromDegrees(int);
  }

  class cPoint {
    public:
      float GetX();
      void SetX(float);
      void SetX(int);

      float GetY();
      void SetY(float);
      void SetY(int);

      virtual string ToString();
  }

  class cSize() {
    public:
      float GetWidth();
      void SetWidth(float);
      void SetWidth(int);

      float GetHeight();
      void SetHeight(float);
      void SetHeight(int);

      virtual string ToString();
  }

  class cRect() {
    public:
      cPoint Position;
      cSize Size;

      float GetTop();
      void SetTop(float);
      void SetTop(int);

      float GetLeft();
      void SetLeft(float);
      void SetLeft(int);

      float GetRight();
      void SetRight(float);
      void SetRight(int);

      float GetBottom();
      void SetBottom(float);
      void SetBottom(int);

      cRect();
      cRect(cPoint, cSize);
      cRect(cVector2D, cVector2D);
      cRect(float, float, float, float);
      cRect(int, int, int, int);

      ~cRect();

      virtual string ToString();
  }

}

#endif
