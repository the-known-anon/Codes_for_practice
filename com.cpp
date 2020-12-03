#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
# include <vector>
using namespace std;
int main() {
   
  string s1,s2;
  cin>>s1>>s2;
  if(s1.size()>s2.size()){
  	cout<<"GREATER";
    exit(0);
  }
  if(s1.size()<s2.size()){
  	cout<<"LESS";
    exit(0);
  }
  else if(s1>s2){
  	cout<<"GREATER";
  }
  else if(s1<s2){
  cout<<"LESS";
  }
  else{
  cout<<"EQUAL";	
  } 
  
}
