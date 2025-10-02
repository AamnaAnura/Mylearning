// reverse an array without any extra space in memory.


#include<iostream>
using namespace std;

// this code is for the swapping 
// void swap(int arr[], int start, int end){
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
// }

// there is an inbuild function in C++ for swap i.e. swap(first_value, second_value)

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main(){
    int arr[10] = {1,5,2,7,8,4,7,9,56,5};
    int n = 10;
    int start = 0, end = n-1;
    while(start <  end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}