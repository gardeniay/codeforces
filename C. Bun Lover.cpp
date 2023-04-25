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

const int N = 1e8 + 10;
const int N1 = 1e4 + 10;
typedef long long int ll;
typedef double dou;

ll t;
ll n, f;
ll f2[N1];

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;

		printf("%lld\n", n * (n + 2) + 2);
	}
}