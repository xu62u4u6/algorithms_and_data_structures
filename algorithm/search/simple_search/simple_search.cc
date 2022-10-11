#include <iostream>
#define ARR_MAX_SIZE 50

using namespace std;
 

int main(){
    int n, i, j, target; // How many numbers
    int arr[ARR_MAX_SIZE];

    // Input number sequence
    cout << "請輸入有幾個數字(n): ";
    cin >> n;

    cout << "請輸入搜尋目標:";
    cin >> target;

    for (i=0; i<n; i++){
        cout << "請輸入第" << i+1 << "個數字: ";
        cin >> arr[i];
    }

    // print array
    cout << "您輸入的數字為: " << endl;
    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //search
    for(i=0; i<n; i++){
        if(arr[i]==target){
            cout << "目標所在位置是"<< i << endl;
        }
    }

    return 0;
}
