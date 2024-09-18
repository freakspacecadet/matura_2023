#include <iostream>
using namespace std;

int pow(int base, int exp) {
	int temp = 1;
	for (int i = 0; i < exp; i++) {
		temp = temp * base;
	}
	return temp;
}

int dec(long int n) {
	int b = 0;
	int r = 0;
	int i = 0;
	
	while (n != 0) {
		r = n%10;
		b += r * pow(2, i);
		n = (n - r)/10;
		i++;
	}

	return b;
}

int main() {
	int max = 0;
	long int max_bin = 0;
	
	for (int i = 0; i < 100; i++) {
		long int n;
		cin >> n;
		int temp = dec(n);
		if (temp > max) {
			max = temp;
			max_bin = n;
		}
	}
	cout << max_bin;
	return 0;
}
