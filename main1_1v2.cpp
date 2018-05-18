#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a - b) * (a - c) < 0)
		cout << a << " median" << endl;
	else
		if ((b - c) * (b - a) < 0)
			cout << b << " median" << endl;
		else 
			cout << c << " median" << endl;
}
