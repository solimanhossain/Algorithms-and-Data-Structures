#include<iostream>

int linear_search(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element) return i;
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170}, element = 50;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    std::cout<<linear_search(arr, arr_size, element);

    std::cin.get();
    return 0;
}

// O(N) O(1)