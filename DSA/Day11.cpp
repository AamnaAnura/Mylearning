#include <iostream>
#include <limits.h>
#include <vector>
using namespace std ;
int main (){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int maxi = INT_MIN;
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(sum , maxi);
        if (sum < 0)
            sum = 0;
    }
    cout << "the maximum sum of the subarray is :" << maxi <<endl;
    return 0;
}