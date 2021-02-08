#include <bits/stdc++.h>
using namespace std;

int main() {
  /* checking if the s2 is a rotation of s1 */
	string s1 = "waterbottle";
	string s2 = "rebottlewat";
	string s3 = s2+s2;
	
    size_t found = s3.find(s1); 
    if (found != string::npos) 
        cout << "yes"<< endl; 
    else{
    	cout<<"NO"<<endl;
    }
	
	return 0;
}
