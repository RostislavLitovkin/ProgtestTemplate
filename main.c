#include <stdio.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>
#include <limits.h> // INT_MAX, INT_MIN

/// @brief Compare 2 doubles
/// @param a
/// @param b
/// @return true if the 2 doubles are equal
bool doublesAreEqual(double a, double b)
{
  return (fabs(a - b) <= (DBL_EPSILON * fabs(a + b)));
}

int main()
{
  return 0;
}