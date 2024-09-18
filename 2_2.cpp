#include <iostream>
using namespace std;

int f(long int n) {
	int b = 0;
	int r = 11;
	
	while (n != 0) {
		if (r != n%10) {
			b++;
		}
		r = n%10;
		n = (n - r)/10;
		if (n == 0) {
			break;
		}
	}

	return b;
}

int main() {
	int ile = 0;
	
	for (int i = 0; i < 100; i++) {
		long int n;
		cin >> n;
		//cout << f(n) << endl;
		if (f(n) < 3) {
			ile++;
		}
	}
	cout << ile;
	return 0;
}
