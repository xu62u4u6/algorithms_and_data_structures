#include <iostream>

using namespace std;
void PrintArray(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(void){
    int i, j, tmp; // How many numbers
    int n = 6;
    int arr[n] = {1, 20, 3, 8, 10, 6};


    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            cout << "i="<< i << ", j=" << j << " ";
            PrintArray(arr, n);
        }
    }

    return 0;
}