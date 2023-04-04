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

ll n,N,flag;
char ans;
char target[200010], ans_copy[200010], c;

void My_insert(ll b,ll a)
{
	target[a] = ans;
	for (ll i = a+1; i <= n + 1; i++)
	{
		target[i] = ans_copy[i - 1];
	}
}

int main()
{
	scanf("%lld", &N);
	for (ll i = 0; i < N; i++)
	{
		memset(target, '\n', sizeof(target));
		memset(ans_copy, '\n', sizeof(ans_copy));
		scanf("%lld %c", &n, &ans);
		c = getchar();
		for (ll j = 0; j < n; j++)
		{
			scanf("%c", &target[j]);
			ans_copy[j] = target[j];
		}
		for (ll j = 0; j < n; j++)
		{
			if (target[j] < ans)
			{
				flag = j;
				break;
			}
			else
				flag = n;
		}
		My_insert(ans, flag);
		for (int k = 0; k < n+1; k++)
		{
			printf("%c", target[k]);
		}
		printf("\n");
	}
}