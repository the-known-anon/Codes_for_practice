#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count =0;
	for(int i=0;i<s.size();i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j]){
					count++;
					break;
				}
			}
	}
	if(count!=0){
		cout<<"no";
		}
		else{
			cout<<"yes";
		}
}
