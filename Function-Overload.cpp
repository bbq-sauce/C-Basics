#include <iostream>
using namespace std;

void fun(int i) { cout << "Value of i is : " << i << endl; }
void fun(float j) { cout << "Value of j is : " << j << endl; }

class Addision {
public:
  static int add(int a, int b) { return a + b; }
  static int add(int a, int b, int c) { return a + b + c; }
};

class Mul {
public:
  int mul(int a, int b) { return a * b; }
  float mul(double x, int y) { return x * y; }
};

int main() {

  std::cout << "_____________When number of arguments vary_______________"
            << endl;
  Addision c;
  std::cout << c.add(10, 20, 30);
  std::cout << endl;
  std::cout << c.add(10, 20);
  std::cout << "_____________When type of arguments vary_______________"
            << endl;

  Mul m;
  std::cout << m.mul(6, 7) << endl;
  std::cout << m.mul(0.2, 3);
  /* Function Overloading and Ambiguity
  When the compiler is unable to decide which function is to be invoked among
  the overloaded function, this situation is known as function overloading. When
  the compiler shows the ambiguity error, the compiler does not run the program.
  Causes of Function Overloading:

  Type Conversion.
  Function with default arguments.
  Function with pass by reference.*/

  std::cout << "__________TYpe Conversion_______________" << endl;

  fun(12);
  // fun(1.2); this shows error saying call for "fun" is ambiguoug;
}
