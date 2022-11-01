#include<iostream>
 
int binary_search(int arr[], int low, int high, int element){
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == element) return mid;
        if (arr[mid] < element) binary_search(arr, mid + 1, high, element);
        else binary_search(arr, low, mid - 1, element);
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170}, element = 50;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    std::cout<<binary_search(arr, 0, arr_size, element);

    std::cin.get();
    return 0;
}

// O(log N) O(Log N)