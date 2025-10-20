#include <iostream>
#include <vector>
using namespace std;

//  --------------Moore's voting algorithm---------------
int majorityElement(vector<int>& nums) {
    int ele = 0; 
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++){
        if (count == 0){
            count ++;
            ele = nums[i];
        }else if (ele == nums[i]){
            count ++;
        } else count --;
    }
    return ele;
}