// Oct 4th 2025

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
// 5. ---------------------- Union of two sorted arrays -------------------------------- 
class Solution {
public:
vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        vector <int> res;
        while( i < n1 && j < n2){
            if(nums1[i] <= nums2[j]){
                if (res.size() == 0 || res.back() != nums1[i]){
                    res.push_back(nums1[i]);
                }
                i++;
            }
            else {
                if (res.size() == 0 || res.back() != nums2[j]){
                    res.push_back(nums2[j]);
                }
                j++;
            }
        }
        while ( i < n1 ){
            if (res.size() == 0 || res.back() != nums1[i]){
                    res.push_back(nums1[i]);
                }
                i++;
        }
        while ( j < n2){
            if (res.size() == 0 || res.back() != nums2[j]){
                    res.push_back(nums2[j]);
                }
                j++;
        }
        return res;
    }
private :              // ------------- brute force approach ----------------
    vector<int> unionArray2(vector<int> &nums1, vector<int> &nums2)
{
    set<int> st;
    vector<int> res;
    for (auto x : nums1)
    {
        st.insert(x);
    }
    for (auto x : nums2)
    {
        st.insert(x);
    }
    for (auto x : st)
    {
        res.push_back(x);
    }
    return res;
    }
};

// 4. -----------------move all the zeros at the end of the array -------------------
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1 ;
        int n = nums.size();
        for (int i = 0; i< n;i++ ){
            if (nums[i]==0){
                j =i; 
                break;
            }
        }
        if (j == -1) return;
        for (int i = j+1; i < n; i++){
            if (nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

// 3.------------------- Check if Array Is Sorted and Rotated----------------
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i+1) % n]) {
                count++;
            }
            if (count > 1) return false; 
        }
        return true;
    }
};

// 2.--------------------  left rotate the array by k ------------------
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rotateOpt1(nums,k,n);
    }
private : 
    void rotateOpt1(vector <int> &nums , int k , int n){
        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

// 1.----------------------- left rotate the array by one --------------------------
class Solution
{
public:
    void rotateArrayByOne(vector<int> &nums)
    {
        leftRotate(nums);
    }

private:
    void leftRotate(vector<int> &nums)
    {
        int temp = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            nums[i - 1] = nums[i];
        }
        nums[n - 1] = temp;
    }
};