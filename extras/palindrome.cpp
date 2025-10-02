#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int num = x,pop,rev=0;
        while (x>0){
            pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return false;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return false;
            rev= rev * 10 + pop;
            }
            if (num == rev)
                return true;
            else 
                return false;
    }
};
