#include <iostream>
using namespace std;

//scope in array
void update(int arr[], int n) {

    std::cout << std::endl << "Inside the function" << std::endl;
    
    //updating array's first element
    arr[0] = 120;

    //printing the array
    for(int i=0; i<3; i++) {
        std::cout << arr[i] <<" ";
    } std::cout<< std::endl;


    std::cout << "Going back to main function" << std::endl;
}


int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    std::cout << std::endl << "Printing in main function" << std::endl;
    for(int i=0; i<3; i++) {
        std::cout << arr[i] <<" ";
    }
    std::cout << std::endl;

    return 0;
}