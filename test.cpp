/*
  Problem Name:
  algorithm tag:
*/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const double eps = 1e-4;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
//#define x first
//#define y second
#define iosf ios::sync_with_stdio(false), cin.tie(0), cout << fixed

class Solution
{
  public:
    int removePalindromeSub(string s)
    {
        string rs = s;
        reverse(s.begin(), s.end());
        if (s == rs)
            return 1;
        else
            return 2;
    }
};
int main()
{
    Solution s;
    string das = "dsa";
    cout << s.removePalindromeSub(das) << endl;
}