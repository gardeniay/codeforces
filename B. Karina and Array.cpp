#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

const int N = 2e5+10;
typedef long long int ll;
typedef double dou;

ll t;
ll n;
ll ans[N] = { 0 };

int cmp(ll a, ll b)
{
	return a > b;
}

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		memset(ans, 0, sizeof(ans));
		for (int i = 0; i < n; ++i)cin >> ans[i];
		sort(ans, ans + n, cmp);
		printf("%lld\n", max(ans[0] * ans[1], ans[n - 1] * ans[n - 2]));
	}
}