#include <iostream>

int main() {

 
  for (int i = 1; i <= 100; i++){
   
    //you could also use if (i % 15 == 0)... if a number is divisible by 5 and 3 at the same time, it is divisible by 15;
    if (i % 5 == 0 && i % 3 == 0) {
      
      std::cout << "FizzBuzz\n";

    } else if (i % 5 == 0) {

      std::cout << "Buzz\n";

    } else if (i % 3 == 0) {

      std::cout << "Fizz\n";

    } else {

      std::cout << i << std::endl;

    }

  }

}
