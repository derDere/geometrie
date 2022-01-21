#ifndef GEOMETRIE_HPP
#define GEOMETRIE_HPP

#include <vector>
#include <string>

using namespace std;

namespace geometrie {

  struct Vector2D;
  struct Rect;

  Point operator +(Vector2D, Vector2D);
  Point operator +(Vector2D, int);
  Point operator -(Vector2D, Vector2D);
  Point operator -(Vector2D, int);
  Point operator *(Vector2D, Vector2D);
  Point operator *(Vector2D, int);
  Point operator /(Vector2D, Vector2D)

}

#endif
