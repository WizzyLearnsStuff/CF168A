#include<iostream>

using namespace std;

int main() {
	int n, x, y;
	cin >> n >> x >> y;

	int k = (y * n) - 100 * x;

	if (k < 0) cout << 0;
	else if (k % 100 == 0) cout << k / 100;
	else cout << k / 100 + 1;
}
