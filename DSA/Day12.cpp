#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 2, -3, -4};
    int pos = 0, neg = 1;
    int n = a.size();
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            result[pos] = a[i];
            pos += 2;
        }
        else
        {
            result[neg] = a[i];
            neg += 2;
        }
    }
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}