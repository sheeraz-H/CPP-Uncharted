#include <iostream>

using namespace std;
void greetUser()
{
  cout << "Hello, User! Welcome to the C++ Functions Demo." << endl;
}
// calculate sumOfNumbers
int sumOfNumbers(int num)
{

  int digitSum = 0;
  while (num > 0)
  {
    int lastDig = num % 10;
    digitSum += lastDig;
    num /= 10;
  }
  return digitSum;
}

// calculate nCr binomial coefficient for n & r

int factorial(int n)
{
  int fact = 1;

  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int nCr(int n, int r)
{
  int numerator = factorial(n);
  int denominator = factorial(r) * factorial(n - r);
  return numerator / denominator;
}

int main()
{
  greetUser();

  int n = 8, r = 3;

  cout << nCr(n, r) << "kahlu t!" << endl;

  // cout << binomial(8, 2) << "\n";
  // cout << "Binomial Coefficient C(a, b) is:" << binomial(6, 3) << "\n";

  cout << sumOfNumbers(123) << "\n";

  cout << "Sum of digits in 1234 is: " << sumOfNumbers(1234) << endl;

  return 0;
}

// WAF to check if a number is prime or not.
// WAF to print all prime numbers from 2 to n.
// WAF to print nth Fibonacci.