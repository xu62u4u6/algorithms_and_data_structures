# 二元搜尋 Binary search

類似猜數字，猜中間的數字後決定往左或往右。

優點: 比起一般搜尋快得多
缺點: 適用已排序

## C++ tips

1. ``sizeof(test_arr) / sizeof(test_arr[0])``
   用於自動判斷陣列長度，_注意，你無法得到傳入函數內的sizeof(arr)。_
