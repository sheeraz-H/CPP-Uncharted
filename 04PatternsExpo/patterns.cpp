#include <iostream>

using namespace std;

int main()
{
  int n = 5;

  // int n;
  // cout << "Enter a number: ";
  // cin >> n;
  // aquare patterns *
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << "*" << endl;
  // }

  // print square patttern with row and column numbers
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // print square pattern with row and colums of characters
  // for (int i = 0; i <= n; i++)
  // {
  //   char ch = 'A';
  //   for (int j = 0; j <= n; j++)
  //   {
  //     cout << ch << " ";
  //     ch += 1;
  //   }
  //   cout << endl;
  // }

  // newTypo pattern square
  // int num = 1;

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     cout << num << " ";
  //     num++;
  //   }
  //   cout << endl;
  // }

  // char ch = 'A';
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     cout << ch << " ";
  //     ch++;
  //   }
  //   cout << endl;
  // }
  // cout << "after pattern: " << ch << endl;

  // triangle pattern
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << i + 1 << " ";
  //   }
  //   cout << endl;
  // }

  // // same for characters
  // for (int i = 0; i < n; i++)
  // {
  //   char ch = 'A' + i;
  //   for (int j = 0; j <= i; j++)
  //   {
  //     cout << ch << " ";
  //   }
  //   cout << endl;
  // }

  // increaing triangle pattern

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 1; j <= i; j++) // (j < i + 1 = j <= i)
  //   {
  //     cout << 'i';
  //   }
  //   cout << endl;
  // }

  // // decreasing triangle pattern

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i; j < n; j++) // (j < i - 1 = j = i

  //     cout << "* ";
  // }
  // cout << endl;

  // right aligned decreasing triangle pattern

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j <= i; j++)
  //   {
  //     cout << "  ";
  //   }

  //   for (int j = i; j <= n; j++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // // left aligned increasing triangle pattern

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i; j <= n; j++)
  //   {
  //     cout << "  ";
  //   }

  //   for (int j = 0; j <= i; j++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // diamond pattern
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  // triangle change
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k < i + 1; k++)
    {
      cout << k << " ";
    }
    cout << endl;
  }

  // reverse triangle

  for (int i = n; i >= 1; i--)
  {
    for (int k = 1; k < i + 1; k++)
    {
      cout << k << " ";
    }
    cout << endl;
  }

  //  reverse triangle
  for (int i = n; i >= 1; i--)
  {
    for (int j = i; j >= 1; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
