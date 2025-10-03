// Oct 2 2025 

#include <iostream>
#include <climits>
#include <vector>
#include <set>
using namespace std;
// 7.------------------------ LINEAR SEARCH ------------
class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == target) return i;
        }
        return -1;
    }
};

// 6.------------------- find the missing element from the array containing distinct values in the range from 0 to n (inclusive) ---------------
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set <int> s;
        for (auto x : nums){
            if (x != 0)
            s.insert(x);
        } int i = 0;
        for (auto x : s){
        if (x == i+1) i++;
            else return i+1;
        }
        if (i!= nums.size()) 
        i ++;
        return i; 
    }
private :
    int MN(vector <int> &nums){
        int n = nums.size();
        int sum = n * (n + 1) / 2; 
        int arrSum = 0;
        for (int x : nums) arrSum += x;
        return sum - arrSum;
    
    }
};

// 5.---------- to remove the duplicate elements from an array {to replace the first k elements with the unique elements of the array ; k being the number of unique elements} -----------
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++){
            if (nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};

// 4.------------------------- to check if the array is sorted or not -------------------
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            for (int i = 0; i < nums.size()-1; i++){
                if (nums[i] > nums[i+1]) return false;
            }
            return true;
		}
};

// 3.------------- SECOND LARGEST ELEMENT-----------
class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        // your code goes here
        int max = nums[0];
        for (auto x : nums)
        {
            if (x > max)
                max = x;
        }
        int sec = INT_MIN;
        for (auto x : nums)
        {
            if (x != max && x > sec)
                sec = x;
        }
        if (sec != INT_MIN)
            return sec;
        else
            return -1;
    }

private:
    // ------------- optimized version ------------
    int func(vector<int> &nums)
    {
        int max = INT_MIN;
        int sec = INT_MIN;

        for (auto x : nums)
        {
            if (x > max)
            {
                sec = max;
                max = x;
            }
            else if (x != max && x > sec)
                sec = x;
        }
        if (sec != INT_MIN)
            return sec;
        else
            return -1;
    }
};

// 2.-------------------- find the maximun element of the array ---------------------------
class Solution
{
public:
    int largestElement(vector<int> &nums)
    {
        int max = nums[0];
        for (auto x : nums)
        {
            if (x > max)
                max = x;
        }
        return max;
    }
};

// 1.--------------------- MERGE SORT -------------------
class Solution
{
public:
    vector<int> mergeSort(vector<int> &nums)
    {
        int n = nums.size();
        mS(nums, 0, n - 1);
        return nums;
    }

private:
    void mS(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mS(arr, low, mid);
        mS(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }
};
