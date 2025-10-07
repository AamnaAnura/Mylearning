// Oct 5th 2025

#include <iostream>
#include <vector>
using namespace std;
// 1. --------------  return the maximum number of consecutive 1s in the array. ---------------
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
                if (count > max)
                    max = count;
            }
            else
            {
                count = 0;
            }
        }
        return max;
    }
};