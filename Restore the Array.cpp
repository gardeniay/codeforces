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

ll N, n;

int main()
{
	scanf("%lld", &N);
	for (ll i = 1; i <= N; i++)
	{
		scanf("%lld", &n);
		vector<ll>b(n + 1);
		for (ll j = 1; j < n; j++)
		{
			cin >> b[j];
		}
		printf("%lld", b[1]);
		for (ll j = 1; j < n-1; j++)
		{
			printf(" %lld", min(b[j], b[j + 1]));
		}
		printf(" %lld\n", b[n - 1]);
	}
	return 0;
}