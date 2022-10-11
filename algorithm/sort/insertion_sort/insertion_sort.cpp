#include <iostream>

using namespace std;

int main(void){
    int n, i, j; // How many numbers
    int arr_max_size = 50;
    int arr[arr_max_size];
    // Input number sequence
    cout << "請輸入有幾個數字(n): ";
    cin >> n;

    for (i=0; i<n; i++){
        cout << "請輸入第" << i+1 << "個數字: ";
        cin >> arr[i];
    }

    // print unsorting

    cout << "您輸入的數字為: ";
    for (i=0; i<n; i++){
        
        cout << arr[i] << " ";
    }
    
    // sorting 
    for (i=1; i<n; i++){
        int key = arr[i]; // 先將要插入的值紀錄
        j = i-1;
        // 向左尋找同時挪出空位
        while (arr[j] > key && j>0){
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j+1] = key;
    }

        // print unsorting
    
    cout << "排序結果為: ";
    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}