#include <iostream>

using namespace std;

int main()
{

  // // print sum of all odd numbers from 1 to n
  // int n;
  // int j = 1;

  // int sumOffOdd = 0;
  // int sumOffEven = 0;

  // cout << "Enter a number: ";
  // cin >> n;

  // // for (int i = 1; i <= n; i++)
  // // {
  // //   if (i % 2 != 0)
  // //   {
  // //     sumOffOdd += i;
  // //   }
  // // }
  // // cout << "sum of Odd: " << sumOffOdd << endl;

  // while (j <= n)
  // {
  //   if (j % 2 != 0)
  //   {
  //     sumOffOdd += j;
  //   }
  //   j++;
  // }
  // cout << "sum of Odd using while: " << sumOffOdd << endl;

  // for (int i = 1; i <= n; i++)
  // {
  //   if (i % 2 == 0)
  //     sumOffEven += i;
  // }
  // cout << "sum of Even using for: " << sumOffEven << endl;

  // lets check that a numver is prime or not

  // int n;
  // cout << "Enter a number: ";
  // cin >> n;

  // bool isPrime = true;

  // for (int i = 2; i * i <= n; i++) // (i <= n -1)
  // {
  //   if (n % i == 0)
  //   {
  //     isPrime = false;
  //     break;
  //   }
  // }

  // isPrime ? cout << n << " is a prime number." << endl : cout << n << " is not a prime number." << endl;

  //  print prime number from 1 to n;

  // for (int i = 2; i <= n; i++)
  // { // number being checked
  //   bool isPrime = true;

  //   for (int j = 2; j < i; j++)
  //   { // divisor check
  //     if (i % j == 0)
  //     {
  //       isPrime = false;
  //       break;
  //     }
  //   }

  //   if (isPrime)
  //   {
  //     cout << i << " ";
  //   }
  // }

  int n;
  cout << "Enter a number: ";
  cin >> n;
  int sumOfAll = 0;

  // find sum of all number which are divisible by 3.

  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0)
    {
      cout << i << " are divisible by 3. \n";
      sumOfAll += i;
    }
  }

  cout << "\nSum of all divisible numbers from 1 to " << n << " is: " << sumOfAll << endl;

  // find factorial of a number n
  int m = 4;
  int factorial = 1;
  for (int i = 1; i <= m; i++)
  {
    factorial = factorial * i;
  }
  cout << "Factorial of " << m << " is: " << factorial << " ";

  cout << endl;

  return 0;
}