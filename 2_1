#include <iostream>
using namespace std;

int f(int n) {
	int b = 0;
	int r = 2;
	
	while (n != 0) {
		if (r != n%2) {
			b++;
		}
		r = n%2;
		cout << r;
		n = (n - r)/2;
	}
	cout << endl;
	return b;
}

int main() {
	cout << f(15);
	return 0;
}
