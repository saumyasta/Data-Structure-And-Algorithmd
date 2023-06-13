///program to Demonstrate Exception Handling
# include<iostream>
using namespace std;

int main()
{
    int x=10, y=2, z;
    try
    {
        if(y==0) throw 404;
        z = x/y;
        cout<<z<<endl;
    }
    catch(int i)
    {
        cout<<"Error: Division by Zero , and Error code is :"<<i<<endl;
    }
    cout<<"Common statement after Try catch Block.."<<endl;
    return 0;
}
