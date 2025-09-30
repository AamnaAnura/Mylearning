#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

// 14.------------------ Highest Occurring Element in an Array -------------------
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map <int , int > freq;
        int max = 0;
        for ( auto &num : nums){
            freq[num]++;
            if (freq[num]> max){
                max = num;
            }
        }
        return max;
    }
};

// 13.------------------------- Counting Frequencies of Array Elements using vector of vectors ----------------------
class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here
        map <int, int > freq;
         for (auto num : nums){
            freq[num]++;
         }
         vector <vector <int>> result ;
         for (auto it : freq){
            result.push_back({it.first,it.second});
         }
        return result;
    }
};

// 12.---------------- find the frequency of the numbers in an arry using maps -----------------
int mapDemo()
{
    map<int, int> freq;
    int arr[10] = {1, 2, 3, 4, 2, 6, 9, 10, 3, 8};
    for (int i = 0; i < 10; i++)
    {
        freq[arr[i]]++;
    }
    for (auto x : freq)
    {
        cout << x.first << ": " << x.second << endl;
    }
    return 0;
}

//11. ---------------find the frequency of the alphabets that occurs in the string using the maps of STL -----------
int findFreq2(){
    map <char,int > freq;
    string str = "Aamna";
    for (auto ch : str){
        freq[ch]++;
    }
    for (auto it : freq){
        cout << it.first << "->" << it.second << endl;
    }
}
// 10.---------------------- find the frequency of the alphabets that occurs in the string ----------------
int findFreq()
{
    string str = "aamna";
    int hash[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        int j = ch - 'a';
        hash[j]++;
    }
    cout << "what is the alphabet that you want to fetch" << endl;
    char ch;
    cin >> ch;
    ch = tolower(ch);
    cout << hash[ch - 'a'] << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << hash[i] << " ";
    }
    return 0;
}

// 9.------------- fibonacci series -----------
class Solution
{
public:
    int fib(int n)
    {
        // your code goes here
        if (n == 0 || n == 1)
            return n;
        if (n == 2)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }
};

// 8.---------------- palindrome check ------------------
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str;
        for (auto x : s)
        {
            if (isalnum(x))
            {
                str += tolower(x);
            }
        }
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] != str[str.length() - 1 - i])
                return false;
        }
        return true;
    }
};

// 7. -------------------to reverse an array using recurrsion -----------
class Solution
{
public:
    void reverse(int arr[], int n)
    {
        if (n <= 1)
            return;
        // int temp = arr[0];
        // arr[0] = arr[n - 1];
        // arr[n - 1] = temp;
        swap(arr[0], arr[n - 1]);
        reverse(arr + 1, n - 2);
    }
};

// 6. ----------- return the factorial of n ---------------
class Solution
{
public:
    int fact(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        return n * fact(n - 1);
    }
};
// 5. -----------------return the sum of first n numbers using recurrsion -----------
class Solution
{
public:
    int NnumbersSum(int N)
    {
        // your code goes here
        if (N == 0)
            return 0;
        return (N + NnumbersSum(N - 1));
    }
};

// 4. --------------print all the n numbers from n to 1 using recurrsion -------------
class Solution
{
public:
    void printNumbers(int n)
    {
        // Your code goes here
        cout << n << endl;
        if (n == 1)
            return;
        printNumbers(n - 1);
    }
};

// 3. -------------print all the n numbers from 1 to n using recurrsion -------------
class Solution
{
public:
    void printNumbers(int n)
    {
        // Your code goes here
        if (n == 0)
            return;
        printNumbers(n - 1);
        cout << n << endl;
    }
};
// 2. ---------------- print all the divisors -----------
vector<int> divisor(int n)
{
    set<int> res;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            res.insert(i);
        }
    }
    vector<int> v(res.begin(), res.end());
    return v;
}
int main()
{
    int n = 6;
    vector<int> res = divisor(n);
    for (auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}
// 1. --------------------to check if the number is prime or not -----------------
class Solution
{
public:
    bool isPrime(int n)
    {
        int count = 1;
        // your code goes here
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};