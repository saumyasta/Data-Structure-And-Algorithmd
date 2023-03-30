#include <iostream>
using namespace std;

//sum in array
void add(int arr[], int n) {

    int sum =0;
    
    //printing the array
    for(int i=0; i<n; i++) {
        sum =sum+arr[i] ;
    } 


    std::cout << "Sum of all elements in the array : " << sum<<std::endl;
}


int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }
    add(num,size);
    return 0;
}