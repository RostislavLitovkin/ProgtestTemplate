#include <stdio.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>

/// @brief Compare 2 doubles
/// @param a 
/// @param b 
/// @return 
bool doublesAreEqual(double a, double b)
{
    return (fabs(a - b) < (DBL_EPSILON * fabs(a + b)));
}

int main() {
  return 0;
}