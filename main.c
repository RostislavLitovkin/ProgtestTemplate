#include <stdio.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>
#include <limits.h> // INT_MAX, INT_MIN
#include <stdarg.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char uchar;

/// @brief Custom printf fucntion that always prints a new line at the end.
/// @param format
/// @param
void printl(const char *format, ...)
{
  va_list args;
  va_start(args, format);

  // Use vprintf to handle the variable arguments
  vprintf(format, args);

  // Print a newline character at the end
  printf("\n");

  va_end(args);
}

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