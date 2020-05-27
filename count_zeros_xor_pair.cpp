//Given an array A[] of size N. Find the number of pairs (i, j) 
//such that A_i XOR A_j = 0, and 1 <= i < j <= N.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	//int count=0;
	while(t--)
	{
		int n;
		
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		//sort(a,a+n);
		int count=0;

		for(int i = 0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if((a[i]^a[j])==0)
				{
					count++;
				}
				
			}
		}
		cout<<count;
	}
	return 0;
}
