#include <iostream>
using namespace std;

int main() {
  int n, i;
  // reading value of n from user
  cin >> n;
  i = n;

  if (i > 0) {
    // continously divide i if it is even
    while (i % 2 == 0) {
      i = i / 2;
    }

    // check if n is a power of 2
    if (i == 1) {
      cout << n << " is a power of 2";
    } else {
      cout << n << " is not a power of 2";
    }
  } else {
    cout << "Enter a valid positive number";
  }
  return 0;
}