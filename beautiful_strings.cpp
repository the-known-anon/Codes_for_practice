#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
   string s;
   cin>>s;
   map<char,int> mp;
   for(char c:s){
   	mp[c]++;
   }
   int flag=0;
   for(char c:s){
   	if(mp[c]%2==0){
   		continue;
   	}
   	else{
   		flag=1;
   	}
   }
   if(flag!=0){
   	cout<<"No";
   }
   else{
   	cout<<"Yes";
   }
   
}
