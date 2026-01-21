#include <iostream>

using namespace std;

int main()
{
  // int age;
  // cout << "Enter age: ";
  // cin >> age;

  // if (age >= 18)
  // {
  //   cout << "you're " << age << " eligiable for license!" << endl;
  // }
  // else
  // {
  //   cout << "you're " << age << ", not eligiable for license! \nkindly keep patience_." << endl;
  // }

  // int n;
  // cout << "Enter a number: ";
  // cin >> n;

  // if (n % 2 == 0)
  // {
  //   cout << "its " << n << " an even number." << endl;
  // }
  // else
  // {
  //   cout << "its " << n << " an odd number." << endl;
  // }

  // int marks;
  // cout << "Enter marks: ";
  // cin >> marks;

  // if (marks >= 90)
  // {
  //   cout << "Grade A+" << endl;
  // }
  // else if (marks >= 80)
  // {
  //   cout << "Grade A" << endl;
  // }
  // else if (marks >= 70)
  // {
  //   cout << "Grade B+" << endl;
  // }
  // else if (marks >= 60)
  // {
  //   cout << "Grade B" << endl;
  // }
  // else if (marks >= 50)
  // {
  //   cout << "Grade C" << endl;
  // }
  // else
  // {
  //   cout << "Fail" << endl;
  // }

  // int a = 50, b = 90;

  // int max;
  // max = (a > b) ? a : b;
  // cout << "Maximum value is: " << max << endl;

  // int min;
  // min = (a < b) ? a : b;
  // cout << "Minimum value is: " << min << endl;

  // int n = 7;

  // while (n > 0)
  // {
  //   cout << n << " ";
  //   n--;
  // }

  // int user;
  // cout << "Enter a number: ";
  // cin >> user;

  // while (user >= 0)
  // {
  //   cout << user << " ";
  //   user--;
  // }

  // int userTwo;
  // cout << "\nEnter another number: ";
  // cin >> userTwo;
  // for (int i = userTwo; i >= 0; i--)
  // {
  //   cout << i << " ";
  // }

  // int userThree;
  // cout << "\nEnter one more number: ";
  // cin >> userThree;
  // do
  // {
  //   cout << userThree << " ";
  //   userThree--;
  // } while (userThree >= 0);

  // Questions
  // Q1: Print numbers from 1 to n using while loop
  int n;
  cout << "Enter number: ";
  cin >> n;
  int count = 1;
  int sum = 0;
  while (count <= n)
  {
    sum = sum + count;
    count++;
  }
  cout << "sum of numbers 'while' from 1 to " << n << " is: " << sum << " \n";

  int sumFor = 0;
  int nFor;
  cout << "Enter number: ";
  cin >> nFor;
  for (int i = 1; i <= nFor; i++)
  {
    sumFor = sumFor + i;
  }

  cout << "sum of numbers 'for' from 1 to " << nFor << " is: " << sumFor << " ";

  return 0;
}
