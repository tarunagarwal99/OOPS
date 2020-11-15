#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n,a(0),b(0),S,T,max(0),W,L;
	cin >> n;
	while(n>0){
		cin >> S >> T ;
		a += S;
		b += T;
		L = abs(a-b);
		if (L>max) {
			W = (a>b) ? 1 : 2;
			max = L;
		}
		n--;
	}
	cout << W << " " << max << endl;
	return 0;
}