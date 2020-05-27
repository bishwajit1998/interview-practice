
#include <bits/stdc++.h> 
using namespace std; 
#define MAX 10 
  

int findValue(int arr[], int n) 
{ 
    int ans = 0; 
  

    for (int i = 0; i < n; i++)  
        for (int j = 0; j < n; j++)  
  
            ans = max(ans, abs(arr[i] - arr[j]) + abs(i - j)); 
  
    return ans; 
} 
  

int main() 
{ 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
        int arr[n];
for(int i = 0;i<n;i++)
    {
       cin>>arr[i];
    }

    
    cout << findValue(arr, n) << endl; 
  }
    return 0; 
} 