#include <iostream>
#include <vector>

//  vector = dynamic array

// Data Block: [10][20][30][40]
// Size = 4
// Capacity = 8

using namespace std;

int mian()
{

  vector<int> v;
  v.push_back(10);
  v.push_back(20);

  // push = add at end;

  // pop = removes last element

  // access = v[0] → fast, no check, v.at(0) → safe, bounds check

  cout << v[0] << v.at(1) << endl;

  for (int x : v)
  {
    cout << x << " ";
  }

  return 0;
}