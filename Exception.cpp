/// Program for Exception Handling
#include <iostream>
#include <iostream>
using namespace std;
int Division(int x, int y)
{
    if(y==0) throw 404;
    return x/y;
}
int main()
{
int x=10,y=0,z;
try
{

    z = Division(x, y);
    cout<<z<<endl;
}
catch(int i)
{
    cout<<"Error: Division by zero , Error Code :"<<i<<endl;
}
cout<<"Common Statement outside Try Catch..."<<endl;
}
