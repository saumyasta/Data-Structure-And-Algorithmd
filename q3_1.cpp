/* Problem Statement Suggest 

You have been given an integer array/list(ARR) of size N. Where N is equal

to [2M + 1].
Now, in the given array/list, '"M' numbers are present twice and one number

is present only once.
You need to find and return that number which is unique in the array/list.

Note:

Unique element is always present in the array/list according

to the given condition.*/
#include <iostream>
using namespace std;
int non_repeating_elements(int arr[], int n)
{
    int i,j;
    
    for(i = 0; i < n; i++)
    {
           for(j = 0; j < n; j++)
           {
                if(arr[i] == arr[j] && i != j)
                break;
           }
           if(j == n ) //if the entire array has been traversed via. inner loop and the element is non-repeating
          {
                cout <<  arr[i] << endl;
         }
    }
        return -1;
}

int main()
{
    int t;  //t denotes number of test cases
    int n,i;
    cin>>t;
for(int i=0;i<t;i++)
{

cin >> n;    // n detos size of an array
int arr[n];

for(i = 0; i < n; i++)
{
cin >> arr[i];
}
non_repeating_elements(arr, n);
}
return 0;
}



/* Alternative Approach using xor
1. XORing any element with itself gives 0.
2. XORing 0 with any element gives that 0.
Consider it as 10-10+20-20+5 = 5.
3. ex: An array with m=2. So, N=(2m+1)=(2*2+1)=5. Then , let the elements be randomly 3,4,5,5,3.
4. 3^3 will be 0. 5^5 will be 0. Finally 0^4^0 will give 4.
5. Optimised solution to find unique element as per the given conditions in the question.*/

int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];   //entire array is traced 
    }
    return ans;
}