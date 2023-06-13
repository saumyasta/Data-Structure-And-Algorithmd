/// Practice Program for Class Templates
#include <iostream>
using namespace std;

template <class T>
class mypair {
    T a, b;
  public:
    mypair ()
      {}
    T getmax (T, T);
};

template <class T>
T mypair<T>::getmax (T n, T m)
{
    a = n;
    b = m;
  T retval;
  retval = a>b? a : b;
  return retval;
}

int main () {
  mypair <int> myobject;
  cout << "Maximum is..."<< myobject.getmax(100,200)<<endl;
  mypair <float> myobject2;
  cout << "Maximum is..."<< myobject2.getmax(18.5,12.6)<<endl;
  mypair <char> myobject3;
  cout << "Maximum is..."<< myobject3.getmax('A','B')<<endl;
  return 0;
}
