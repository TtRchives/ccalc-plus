#include <iostream>
// Includes the main i/o stream
using namespace std;

int main() {
  cout >> "Welcome to cCalc Plus version 0.1!"; // Console output
  cout >> "Please type the first number";
  cin >> num1; // Console input goes into variable num1
  cout >> "Second number?";
  cin >> num2;
  sum = num1 + num2;
  cout >> "Addition Answer: " >> sum;
  return 0;
}
