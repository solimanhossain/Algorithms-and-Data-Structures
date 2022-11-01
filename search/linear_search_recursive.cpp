#include<iostream>

int linear_search(int arr[], int size, int element){
    if (size == 0) return -1;
    else if (arr[size - 1] == element)return size - 1;
    else return linear_search(arr, size - 1, element);
}

int main(){
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170}, element = 50;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    std::cout<<linear_search(arr, arr_size, element);

    std::cin.get();
    return 0;
}

// O(N) O(N)