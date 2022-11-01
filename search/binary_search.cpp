#include<iostream>
 
int binary_search(int arr[], int size, int element){
    int low = 0, high = size;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == element) return mid;
        if (arr[mid] < element) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170}, element = 50;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    std::cout<<binary_search(arr, arr_size, element);

    std::cin.get();
    return 0;
}

// O(log N) O(1)