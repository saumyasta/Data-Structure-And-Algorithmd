/// program for all about catch
# include<iostream>
using namespace std;


int main()
{
    int a=30;
	try
	{
		if(a==10) throw a;
		else if(a==20) throw 'A';
		else if(a==30) throw 3.5;
	}
	catch(...)  /// Ellipses
	{
		cout<<"Exception caught.."<<endl;
	}

	return 0;
}
