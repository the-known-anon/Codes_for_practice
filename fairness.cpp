#include <iostream>
using namespace std;
 
int main() {
	long long A,B,C,K;
	cin>>A>>B>>C>>K;
	
	
	if(abs(A-B< 1e18 )){
	    if(K%2==0){
	    	cout<<A-B;
	    }
	    else{
	    	cout<<B-A;
	    }
	}
	else{
		cout<< "unfairness";
	}
	return 0;
}
