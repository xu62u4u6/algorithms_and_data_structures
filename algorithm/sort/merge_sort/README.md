# 合併排序 Merge Sort
### 原理
---
將序列每次分為兩半直到剩下一個元素，後兩兩合併。
```python
def mergesort(arr, start, end):
        if end > start:    
            mid = ceil((start+end)/2)
            mergesort(arr, start, mid)
            mergesort(arr, mid+1, end)
            merge(arr, start, mid, end)

def merge(arr, start, mid, end):
        L = arr[start: mid+1]
        R = arr[mid+1: end]
        L_ind, R_ind = 0
        L R 依序將較小的放入arr[i]
```
### 優缺
---
* 優點: 較快速度
* 缺點: 對已經排序的序列並不會加速、較小序列合併浪費時間

### 時間複雜度
---
Merge sort 的時間複雜度為 $O(nlg{n})$，

### 空間複雜度
---
需要$O(n)$的額外空間 - $L, R$

### 改進
---
可以針對較小序列使用將MERGE()用Insertion sort改寫