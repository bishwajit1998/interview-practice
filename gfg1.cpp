#include<bits/stdc++.h>


using namespace std;
void srt012(int a[], int n) 
{ 
    int lo = 0; 
    int hi = n - 1; 
    int mid = 0; 
  
    // Iterate till all the elements 
    // are sorted 
    while (mid <= hi) { 
        switch (a[mid]) { 
  
        // If the element is 0 
        case 0: 
            swap(a[lo++], a[mid++]); 
            break; 
  
        // If the element is 1 . 
        case 1: 
            mid++; 
            break; 
  
        // If the element is 2 
        case 2: 
            swap(a[mid], a[hi--]); 
            break; 
        } 
    } 
    for(int i = 0;i<n;i++)
    {
    	cout<<a[i];
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
  	int a[n];
  	for(int i = 0;i<n;i++)
  	{
  		cin>>a[i];
  	}
  	srt012(a,n);
  }
}
  


