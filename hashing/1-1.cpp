#include <bits/stdc++.h>
using namespace std;

int main() {
  /* check if both the strings are permutations using hashtable */
	string s1 = "damnsongefui";
	string s2 = "damnsongefui";
	vector<int> a[126];
	vector<int> b[126];
	int c = 0;
	for(int i = 0;i<s1.size();i++){
		int co = s1[i];
		a[co].push_back(1);
	}
	for(int i = 0;i<s2.size();i++){
		int co = s2[i];
		b[co].push_back(1);
	}
	for(int i = 0;i<126;i++){
		if(a[i].size()!= b[i].size()){
			c++;
		}
		else{
			continue;
		}
	}
	if(c!=0){
		cout<<"no"<<endl;
	}
	else{
		cout<<"yes"<<endl;
	}
	
	return 0;
}
