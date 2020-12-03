#include <iostream>
using namespace std;

int main() {
	int n, a, b; 
	cin >> n >> a >> b;
    int sum = 0;
    for(int i=1;i<=n;i++) {
    int sum1 = 0;
    int m=i;
    while(m>0) {
      sum1 += m%10;
      m /= 10;
    }
    if (sum1 >= a && sum1 <= b) {
      sum += i;
    }
  }
  cout<<sum;
}
