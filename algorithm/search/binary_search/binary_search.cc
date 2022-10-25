#include <iostream>
#include<math.h>

using namespace std;

template<typename T>
int binary_search(T sorted_arr[], T target, int start, int end){
    int middle;
    
    middle = ceil((start + end)/2);

    if(target > sorted_arr[middle]){
        return binary_search(sorted_arr, target,  middle, end);
    }else if(target < sorted_arr[middle]){
        return binary_search(sorted_arr, target, start, middle);
    }else{
        return middle;
    }
}

int main(){
    double test_arr[] = {0.5, 0.7, 1, 18, 125, 128, 199.57};
    double target = 18;
    
    cout << binary_search(test_arr, target, 0, (int)sizeof(test_arr)/sizeof(test_arr[0])) << endl ;
    return 0;
}