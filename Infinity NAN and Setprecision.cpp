#include <iostream>
#include <iomanip>

int main() {
  std::cout << "--------------------" << std::endl;
  std::cout << std::setprecision(10);

  double number5{192400};
  double number6{1.92400023e8};
  double number7{1.924e8};

  double number8{0.00000000003498};
  double number9{3.498e-11};

  std::cout << "number5 is : " << number5 << std::endl;
  std::cout << "number6 is : " << number6 << std::endl;
  std::cout << "number7 is : " << number7 << std::endl;
  std::cout << "number8 is : " << number8 << std::endl;
  std::cout << "number9 is : " << number9 << std::endl;
}