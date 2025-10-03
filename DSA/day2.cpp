// Oct 1 2025

#include <iostream>
#include <vector>
using namespace std;
// 4.----------------- BUBBLE SORT using recurrsive method ----------------------
class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        bubbleHelper(nums, nums.size());
        return nums;
    }

private:
    void bubbleHelper(vector<int> &nums, int n)
    {
        if (n == 1)
            return;
        for (int j = 0; j < n - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
        bubbleHelper(nums, n - 1);
    }
};

// 3.------------------INSERTION SORT {takes the element and places it in its correct position. checks with the last and the second last element of the considered array (i.e. loop till i) and reorders it accordingly.} ---------
class Solution
{
public:
    vector<int> insertionSort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j > 0 && nums[j - 1] > nums[j])
            {
                swap(nums[j - 1], nums[j]);
                j--;
            }
        }
        return nums;
    }
};

//  2.-------------- BUBBLE SORT {checks for the largest element in the adjacent pairs and swaps it till the end of the unsorted array part . Therefore the largest element of that iteration is at the end of the unsorted array part . Then it will be considered as the part of the sorted array.} ----------------
class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = n - 1; i > 0; i--)
        {
            bool swapped = false;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] > nums[j + 1])
                    swap(nums[j], nums[j + 1]);
                swapped = true;
            }
            if (!swapped)
                break;
        }
        return nums;
    }
};

// 1.-------------- SELECTION SORT { selects the minimum from the particular iteration and then swaps it with the starting element of the unsorted array } --------------------
void selectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}