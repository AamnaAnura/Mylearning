//  Oct 6th 2025

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    // your code goes here
    map<int, int> mp;
    for (auto x : nums)
    {
        mp[x]++;
    }
    for (auto x : mp)
    {
        if (x.second < 2)
        {
            return x.first;
        }
    }
    return -1;
}
int main (){
    vector <int> nums = {1, 2, 2, 4, 3, 1, 4};
    int res = singleNumber(nums);
    cout << res;
    return 0;
}
