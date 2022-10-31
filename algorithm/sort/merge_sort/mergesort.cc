#include <iostream>
#include <math.h>; 

using namespace std;
void merge(int p, int q, int r);
void merge_sort(int p, int r);

int main(){



    return 0;
}

void merge(int p, int q, int r){

    int l_arr_n = q-p+1 // 6-0+1 = 7
    int r_arr_n = r-q   // 12-6 = 7
    
    
    // 將值裝入L中
    // 將值裝入R中

}

void merge_sort(int p, int r){
    int q = ceil((p+r-1)/2);
    merge_sort(p, q-1);
    merge_sort(q, r);
    merge(p, q, r);
}

