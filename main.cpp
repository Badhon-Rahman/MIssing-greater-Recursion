#include <iostream>

using namespace std;

int GreaterMising(int arr[], int arrSize){
       int checker;
       if(arr[0] == arr[arrSize - 1]){
        cout << "No greater missing element." << endl;
        return 0;
       }
       checker = arr[arrSize - 1] - 1;

       if(arr[arrSize - 2] != checker){
          return checker;
       }
       else{
           return GreaterMising(arr, arrSize - 1);
       }
}

int main()
{
    int arr[] = { 2, 3, 5, 7};
    int greaterElement;
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    greaterElement = GreaterMising(arr, arrSize);

    cout << "Greater Missing Element: " << greaterElement << endl;
    return 0;
}
