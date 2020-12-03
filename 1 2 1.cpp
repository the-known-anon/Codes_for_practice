#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() 
{ 
    string  n,m;
    cin>>n>>m;
    int ab = stoi(n+m);
    long double abb = sqrt(ab);
   if((abb - floor(abb)) == 0){
   	cout<<"Yes";
   	
   }
   else{
   	cout<<"No";
   }
 
    
}
