#include <iostream>
using namespace std;

template <typename T>
void swap(T* a, T* b){
    T tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
};


template <typename T>
void selection_sort(T arr[], int n){
    int min_ind;
    for(int i=0; i<n-1; i++){
        min_ind = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_ind]){
                min_ind = j;
            } 
        }
        swap(&arr[i], &arr[min_ind]);
    }
};

template <typename T>
void print_arr(T arr[], int n){

    for(int i=0; i<n-1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[n-1] << endl;
};

template <typename T>
bool is_ascending(T arr[], int n){
    
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
};

int main(){
    double test_arr[] = {0.5, 0.2, 80, 2, 5, 6, 1, 3, 60};
    int n = (int)(sizeof(test_arr)/sizeof(test_arr[0]));
    cout << n << endl;
    print_arr(test_arr, n);
    cout << "is sorted?: " << is_ascending(test_arr, n) << endl;
    selection_sort(test_arr, n);
    print_arr(test_arr, n);
    cout << "is sorted?: " << is_ascending(test_arr, n) << endl;
    return 0;
}