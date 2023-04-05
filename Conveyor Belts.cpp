#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

typedef long long int ll;
typedef double dou;

ll n, N;
ll x11, y11, x22, y22;
ll c1,c2;

ll find_c(ll a, ll b)
{
	return min({ a,b,n - a + 1,n - b + 1 });
}

int main()
{
	scanf("%lld", &N);
	for (ll i = 0; i < N; i++)
	{
		scanf("%lld %lld %lld %lld %lld", &n, &x11, &y11, &x22, &y22);
		c1 = find_c(x11, y11);
		c2 = find_c(x22, y22);
		printf("%lld\n", abs(c1 - c2));
	}
}