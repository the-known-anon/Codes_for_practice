#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long a,b,n;
  cin >> a >> b >> n;
  for(int i = a; i <= b; i++){
    if(i <= a + n - 1 || i >= b - n + 1){
      cout << i << endl;
    }
  }
	
}
