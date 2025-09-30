#include <iostream>
#include <vector>
#include <set>
using namespace std;
//7. -------------------to reverse an array using recurrsion -----------
class Solution{
public:
    void reverse(int arr[], int n){
        if (n <= 1) return;
        // int temp = arr[0];
        // arr[0] = arr[n - 1];
        // arr[n - 1] = temp;
        swap (arr[0], arr[n-1]);
        reverse(arr + 1, n - 2);
    }
};

//6. ----------- return the factorial of n ---------------
class Solution {
    public :
        int fact(int n){
            if (n == 0 || n == 1)return 1;
            return n * fact(n-1);
        }
};
//5. -----------------return the sum of first n numbers using recurrsion -----------
class Solution{	
	public:
		int NnumbersSum(int N){
			//your code goes here
            if (N == 0 )return 0;
            return (N + NnumbersSum(N-1));
		}
};

//4. --------------print all the n numbers from n to 1 using recurrsion -------------
class Solution {
  public:
    void printNumbers(int n) {
        // Your code goes here
        cout << n <<endl;
        if (n == 1) return;
        printNumbers(n-1);
    }
};

// 3. -------------print all the n numbers from 1 to n using recurrsion -------------
class Solution {
  public:
    void printNumbers(int n) {
        // Your code goes here
        if (n == 0) return;
        printNumbers(n-1);
       cout << n << endl;
    }
};
//2. ---------------- print all the divisors -----------
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
//1. --------------------to check if the number is prime or not -----------------
class Solution {
public:
    bool isPrime(int n) {
        int count = 1;
        //your code goes here
        for (int i = 2;  i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
};