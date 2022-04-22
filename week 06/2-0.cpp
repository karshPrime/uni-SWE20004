// (a)
#include <iostream>
// (e)
double cube(float); /*function prototype*/
int main() {
// (b)
  const short int arraySize = 10; // arraySize was declared const
// (c)
  int b[10] = {};
  for (int i = 0; i <= 10; i++) b[i] = 1;
// (d)
  int a[2][2] = {{ 1, 2 }, {3, 4 } };
  a[1][1] = 5;
// (f)
  double y =123.45678; int x;
  x = y; std::cout<<(double)x;
// (h)
  double f[ 4 ] = {1.1, 10.01, 100.001, 1000.0001};
}
// (e)
double cube(float number) /*function prototype*/
{
  return (number * number * number);
}
// (g)
double square(float number )
{
  return number *number;
}
