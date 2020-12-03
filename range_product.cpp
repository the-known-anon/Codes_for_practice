#include <iostream>
using namespace std;
 
int main() {
	long long A,B;
	cin>>A>>B;
	if(A<0 && B<0){
		int c = B-A;
		if((c+1)%2==0){
			cout<<"Positive";
		}
		else{
			cout<<"Negative";
		}
		
	}
	else if(A<0 && B>0){
		cout<<"Zero";
	}
	else{
		cout<<"Positive";
	}
}
