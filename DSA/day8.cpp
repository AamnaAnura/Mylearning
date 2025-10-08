#include <iostream>
#include<vector>
#include <map>
using namespace std;
// 1.-------------- longest subarray if the array contains only for non zero elements --------------
class Solution{
public:
// optimal solution 
    int longestSubarray1(vector<int> &nums, int k){
        int maxLen = 0;
        int sum = 0;
        int i = 0, j = 0;
        int n = nums.size();
        while (i < n){
            while (i <= j && sum > k){
                sum -= nums[i];
                i++;
            }
            if (sum == k) maxLen = max(maxLen, j-i+1);
            j++;
            if (j < n ) sum += nums[j];
        }
        return maxLen;
    }
// better solution 
    int longestSubarray(vector<int> &nums, int k){
        map <int ,int > map;
        int maxLen = 0;
        int sum = 0;
        for(int i = 0; i< nums.size(); i++){
            sum += nums[i];
            if ( sum == k ) maxLen = max(maxLen, i+1);
            int rem = sum - k;
            if(map.find(rem) != map.end()){
                int len = i - map[rem];
                maxLen = max(maxLen , len );
            }
            map[sum] = i;
        }
        return maxLen;
    }
    

};