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

typedef long long int ll;
typedef double dou;

int t;
int n, tim;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> tim;
		int time_video[100] = { 0 }, inter_video[100] = { 0 };
		int id = -2;
		for (int i = 0; i < n; i++)
		{
			cin >> time_video[i];
			time_video[i] += i;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> inter_video[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (time_video[i] <= tim && (id == -2 || inter_video[id] < inter_video[i]))
			{
				id = i;
			}
		}
		printf("%d\n", id+1);
	}
	return 0;
}