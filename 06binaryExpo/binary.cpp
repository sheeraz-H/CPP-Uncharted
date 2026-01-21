#include <iostream>

using namespace std;

// decimal to binary conversion
int decToBinary(int decNum)
{
  int ans = 0, pow = 1;

  while (decNum > 0)
  {
    int rem = decNum % 2;
    decNum /= 2;

    ans += rem * pow;
    pow *= 10;
  }

  return ans; // return binary number
}

// binary to deciaml
int binaryToDec(int binNum)
{
  int ans = 0, pow = 1;

  while (binNum > 0)
  {
    int rem = binNum % 10;
    ans += rem * pow;

    binNum / 10;
    pow *= 2;
  }

  return ans; // decimal form
}

int main()
{
  int decimalNumber = 50;
  int binaryNumber = 1010;

  // for (int i = 1; i <= decimalNumber; i++)
  // {
  //   cout << "Decimal of " << i << " is: " << decToBinary(i) << endl;
  // }

  // for (int i = 1; i <= binaryNumber; i++)
  // {
  cout << "Binary of " << binaryNumber << " is: " << binaryToDec(binaryNumber) << endl;
  // }

  cout << decToBinary(10) << " is binary of given Number." << endl;

  return 0;
}