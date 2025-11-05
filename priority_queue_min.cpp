#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[10]={2,5,3,4,5,7,8,99,4,2};
	priority_queue<int>pq;
	for(auto i:num)
	{
		pq.push(i*-1);
	}
	cout << -1*pq.top();
}