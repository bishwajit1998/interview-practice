#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int x){
   long long int newx=0;
    long long int oldx=x;
    int digit;
    if(x<0)
        return false;
    else
    {
        while(x>0)
        {
           int digit=x%10;
            x=x/10;
            newx=newx*10+digit;
        } 
        if(newx==oldx)
            return true;
        else
            return false;
    }

}