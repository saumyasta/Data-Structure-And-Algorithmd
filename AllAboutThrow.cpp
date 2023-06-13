/// program about throw user-defined exception
# include<iostream>
using namespace std;

class myexception : exception
{
};
int Division(int a,int b)
{
    if(b==0) throw myexception();
    return a/b;
}
int main()
{
    int x=10, y=0, z;
    try
    {
        z  = Division(x, y);
        cout<<z<<endl;
    }
    catch(myexception)
    {
        cout<<"Error: Division by Zero.."<<endl;
    }
    cout<<"Common Statements outside Try Catch..."<<endl;
    return 0;
}
