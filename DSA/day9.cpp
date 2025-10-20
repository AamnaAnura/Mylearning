#include <iostream>
#include <vector>
using namespace std;
// 1.--------------  Sort an array of 0's 1's and 2's 
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int c1 = 0 ,c2=0, c3=0;
        for (auto x: nums){
            if (x==0) c1++;
            else if (x == 1)c2 ++;
            else c3 ++;
        }
        for (int i = 0;  i<nums.size(); i++){
            if (c1 > 0){
                nums[i] = 0;
                c1--;
            }
            else if (c2 > 0){
                nums[i] = 1;
                c2--;
            }
            else if (c3 > 0){
                nums[i] = 2;
                c3--;
            }
        }
    }
    
};

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int low = 0, mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
