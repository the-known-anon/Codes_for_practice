#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() 
{ 
    int a,b,c=0;
    int sum=1;
    cin>>a>>b;
    while(sum<b){
    	sum=sum+a-1;
    	c++;
    }
   
    cout<<c;
} 
