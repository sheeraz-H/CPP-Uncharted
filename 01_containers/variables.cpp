#include <iostream>

using namespace std;

int main()
{
  // int age = 23;
  // char grade = 'A';
  // float gpa = 3.75f;
  // double largeDecimal = 123456.789012;
  // bool isStudent = true;
  // string name = "Sheeraz Hussain";

  // int typeCasted = grade;
  // int typeCastedName = name.length();
  // int typeCastedLD = largeDecimal;

  int age;
  int a = 5;
  int b = 2;
  int sum = a + b;
  int x, y;
  int result;

  // cout
  //     << age << " years old. \n"
  //     << grade << " His grade is \n"
  //     << gpa << " with a gpa of \n"
  //     << largeDecimal << " with a large decimal of \n"
  //     << isStudent << ". Is he a student? \n"
  //     << name << " is his name. \n"
  //     << typeCasted << " Type casted value of grade is \n"
  //     << typeCastedName << " Type casted value of grade is \n"
  //     << typeCastedLD << " Type casted value of grade is \n"
  //     << endl;

  // cout << "Enter your age: ";
  // cin >> age;

  // cout << "Enter x:";
  // cin >> x;
  // cout << "Enter y:";
  // cin >> y;

  // result = x + y;
  // cout << "Addition of x and y is: " << result << endl;

  cout << "Your age is: " << age << endl;
  cout << "Sum of " << a << " and " << b << " is " << sum << endl;
  cout << "addition of 'a' and 'b' is " << a + b << endl;
  cout << "Subtraction of 'b' from 'a' is " << a - b << endl;
  cout << "Multiplication of 'a' and 'b' is " << a * b << endl;
  cout << "Division of 'a' by 'b' is " << ((double)a / b) << endl;
  cout << "Modulus of 'a' by 'b' is " << a % b << endl;

  // Unary operators
  cout << "Value of a is: " << a << endl;
  cout << "Value of a after a++ is: " << a++ << endl;

  cout << "Value of a is: " << a << endl;
  cout << "Value of a after ++a is: " << ++a << endl;

  cout << "Value of a is: " << a << endl;
  cout << "Value of a after a-- is: " << a-- << endl;

  cout << "Value of a is: " << a << endl;
  cout << "Value of a after --a is: " << --a << endl;

  return 0;
}

// variables in c++

// -int = integer type
// -float = decimal point number
// -char = character type
// -double = large decimal point number
// -bool = true or false
// -string = sequence of characters
// -long = large integer type
// -short = small integer type
// -void = no type
// -wchar_t = wide character type
// -unsigned = non-negative type
// -signed = positive and negative type
// -const = constant type
// -static = static type
// -extern = external type
// -register = register type
// -volatile = volatile type
// -auto = automatic type

// computer memory size for each data type
// -int = 4 bytes
// -float = 4 bytes
// -char = 1 byte
// -double = 8 bytes
// -bool = 1 byte
// -string = 24 bytes (varies)
// -long = 8 bytes
// -short = 2 bytes
// -void = 0 bytes
// -wchar_t = 2 or 4 bytes
// -unsigned = same as signed type

// TypeCasting vs conversion
// typecasting is done manually by the programmer while conversion is done automatically by the compiler.

// how can we take input from user in c++?
// using cin object from iostream library
// example:
// int age;
// cout << "Enter your age: ";
// cin >> age;
// cout << "Your age is: " << age << endl;
// g++ variables.cpp -o variables.exe
// ./variables.exe

//  in c++ if 5/2 = 2, it wont consider the decimal part. because both are integers. but if one of them is float or double then it will consider the decimal part.
// example:
// float a = 5.0f;
// float b = 2.0f;

// cout << a / b << endl; // 2.5

// double a = 5.0;
// double b = 2.0;

// cout << a / b << endl; // 2.5

// int a = 5;
// int b = 2;
// cout << a / b << endl; // 2
// to get decimal part we can typecast one of the integer to float or double
// cout << (float)a / b << endl; // 2.5
// cout << (double)a / b << endl; // 2.5
// or we can declare one of the variable as float or double
// float a = 5.0f;
// int b = 2;
// cout << a / b << endl; // 2.5

// Modulus operator % works only with integers. it gives the remainder of the division.
// example:
// int a = 5;
// int b = 2;
// cout << a % b << endl; // 1

// BI = 2, UNI = 1

// increment operator ++
// decrement operator --
// example:
// int a = 5;
// a++;
// cout << a << endl; // 6
// a--;
// cout << a << endl; // 5

// a++ vs ++a
// a-- vs --a
// simply its means that in a++ and a-- the value of a is used first and then incremented or decremented. while in ++a and --a the value of a is incremented or decremented first and then used.

// these are alike pre and post