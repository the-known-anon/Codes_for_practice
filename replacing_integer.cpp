#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() {
   long long n,k;
   cin>>n>>k;
 
   n = n%k;
   long long  neew = abs(k-n);
   cout<<min(neew,n);
 
   
}
