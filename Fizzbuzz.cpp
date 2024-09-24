int main ()  {

// Declare variable to store remainder of division
  double remainderThree = 0;
  double remainderFive = 0;

// Test numbers 1 to 100

  for (int i = 1; i <= 100; i++) {

      std::cout << i << "\n";

// Perform division by factor of 3 and 5
      remainderThree = i % 3;
      remainderFive = i % 5;

// Test if remainder is anything but 0, it is divisble by 3
      if (remainderThree== 0) {
        std::cout << i << "Fizz ";
      }
// Test if remainder is anything but 0, it is divisble by 5
      if (remainderFive == 0) {
        std::cout << i << "Buzz ";
      }
// Test if its neither divisible by 3 or 55 just print number
      if (remainderThree != 0 && remainderFive != 0) {
        std::cout << i;
      }

      std::cout << "\n";
    
  }





















}