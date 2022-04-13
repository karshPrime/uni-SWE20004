//==[ A ] ================================
void h() {
  cout << "Inside function h" << endl;
}
void g() {
  cout << "Inside function g" << endl;
  h();
}
//==[ B ] ================================
int sum( int x, int y ) {
  int result;
  result = x + y;
  return result;
}
//==[ C ] ================================
int sum( int n ) {
  if ( n == 0 )
    return 0;
  else
    return n + sum(n - 1);
}
//==[ D ] ================================
void f( double a ) {
  float b = (float) a;
  cout << b << endl;
}
//==[ E ] ================================
int product()
{
  int a;
  int b; int c;
  int result;
  cout << "Enter three integers: "; cin >> a >> b >> c;
  result = a * b * c;
  cout << "Result is " << result; return result;
}
//==[ F ] ================================
template < class A >
A sum( A num1, A num2, A num3 ) {
  return num1 + num2 + num3;
}
//==[ G ] ================================
int printResults( int x, int y ) {
  cout << "The sum is " << x + y << '\n';
  return x + y;
}
//==[ H ] ================================
template <typename A >
A product( A num1, A num2, A num3 )
{
  return num1 * num2 * num3;
}
