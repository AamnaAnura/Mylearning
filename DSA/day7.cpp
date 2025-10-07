// Oct 7th 2025

#include <iostream>
#include <vector>
using namespace std;
// 1.-------- Two Sum {return the indices of the 2 elements that have the sum of the target}--------
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if ((nums[i] + nums[j]) == target)
            {
                res.push_back(i);
                res.push_back(j);
                break;
            }
    return res;
}
int main()
{
    vector<int> nums =  {1, 3, 5, -7, 6, -3}; //{1, 6, 2, 10, 3};
    int target = 0;
    vector<int> res = twoSum(nums, target);
    for (auto x : res)
        cout << x << " ";
    return 0;
}