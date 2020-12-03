#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	
	string s;
	cin>>n>>s;
	int count =0;
	int a[n];
	for(int i=0;i<s.size();i++){
	if(s[i]=='I'){
		count++;
	    a[i]=count;
	}
	else{
		count--;
		a[i]=count;
	}
			
			
	}
	sort(a,a+n);
	cout<<max(0,a[n-1]);
}
