#include<bits/stdc++.h>
using namespace std;

void formatArray(int a[] , int n)
{
	for(int i=1;i<n;i+=2)
	{
		
			if(a[i]>a[i-1])
			{
				continue;
			}
			else{
				swap(a[i-1],a[i]);
			}

		}
	}
	
		

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[100];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		formatArray(a, n);
		for(int i = 0;i<n;i++)
		{
			cout<<" "<<a[i];
		}



	}
	}
