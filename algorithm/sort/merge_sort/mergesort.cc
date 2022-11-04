#include <iostream>
#include <math.h>
using namespace std;

void print_arr(int arr[], int start, int end){
    for(int i=start; i<=end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
};

void merge(int arr[], int start, int mid, int end){

    int l_n = mid-start+1; // 6-0+1 = 7
    int r_n = end-mid;   // 12-6 = 7
    int l_arr[l_n], r_arr[r_n];
    
    // 裝入左右數值
    for(int i=0; i<l_n; i++){
        l_arr[i] = arr[start+i];
    }

    for(int i=0; i<r_n; i++){
        r_arr[i] = arr[mid+1+i];
    }

    int l_ind=0, r_ind=0, i=start;

    // 左右比較並把較小值加入arr
    while(l_ind<l_n && r_ind<r_n){
        if (l_arr[l_ind]<=r_arr[r_ind]){
            arr[i] = l_arr[l_ind];
            l_ind++;
        }
        else{
            arr[i] = r_arr[r_ind];
            r_ind++;
        }
        i++;
    }   
    // 如果單邊太小先跑完情況，就把剩下的加完
    while(l_ind<l_n){
        arr[i] = l_arr[l_ind];
        l_ind++;
        i++;

    }
    while(l_ind<l_n){
        arr[i] = r_arr[r_ind];
        r_ind++;
        i++;
    }

    print_arr(l_arr, 0, l_n-1);
    print_arr(r_arr, 0, r_n-1);
    print_arr(arr, start, end);
    cout << endl;
};

//baseline: 只有一個元素時不跑
void merge_sort(int arr[], int start, int end){
    int mid = ceil((start+end)/2);
    // if n>1
    if(end > start){
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
};


int main(){
    int test_arr[] = {4, 3, 2, 6, 8, 1, 9, 2, 7};
    int n = (int)(sizeof(test_arr)/sizeof(test_arr[0]));
    cout << "unsort:";
    print_arr(test_arr, 0, n-1);
    cout << endl;
    merge_sort(test_arr, 0, n-1);

    cout << "sorted:";
    print_arr(test_arr, 0, n-1);
    cout << endl;
    //merge(test_arr)
    //cout << ceil(5/2) << endl;
    //cout << ceil(6/2) << endl;
    return 0;
}