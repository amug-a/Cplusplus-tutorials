#include <bits/stdc++.h>
using namespace std;

class Employee {
  public:
    double baseSalary;
    double overtime;
    double rate;

  public:
    Employee(double baseSalary, double overtime, double rate) {
      this->baseSalary = baseSalary;
      this->overtime = overtime;
      this->rate = rate;
    }

    double getWage() const {
      return this->baseSalary + (this->overtime * this->rate);
    }
};

int main() {
  Employee employee1(50'000, 10, 20);
  
  // Calculate and print total compensation
  cout << "\t\t\t\t****************** Total compensation is: " << employee1.getWage() << " ******************" << endl;

  // New Feature

  Employee employee57(130000, 50, 120);

  cout << "\t\t\t\t****************** Total compensation is: " << employee57.getWage() << " ******************" << endl;
}