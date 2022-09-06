#include <iostream>
#include <cmath>

// Define tenth_power()
int tenth_power(int num) {

  int result = 1;
  for (int i = 0; i < 10 ; i++) result = result * num;

  return result;

}

// Define n-th power here:

int nth_power(int num, int n) {

  int result = 1;
  for (int i = 0; i < n; i++) result = result * num;

  return result;

}

int main() {
  
  char retry;
  int number, exponent;

  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";

  do {
    std::cout << "Input whole number: ";
    std::cin >> number;
    std::cout << "Input exponent: ";
    std::cin >> exponent;
    std::cout << "Result is: " << nth_power(number, exponent) << "\n";
  
    std::cout << "\nRetry? y/n ";
    std::cin >> retry;

  } while (retry == 'y' || retry == 'Y');
  
}
