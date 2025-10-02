// binary search 

#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main(){
    int arr[10] = {1,5,2,7,8,4,7,9,56,5};
    int n = 10;
    int mid,start = 0, end = n-1,ele=56;
    while(start <= end){
        mid = (start + end) / 2;
        if (arr[mid] == ele){
            cout << "the element is in the position:"<< mid+1 <<endl;
        }else if(arr[mid] > ele){
            end = mid -1;
        }else if(arr[mid] < ele){
            start = mid + 1;
        }
        start ++;
        end --;
    }
    return 0;
}