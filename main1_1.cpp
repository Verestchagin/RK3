#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c, m, x, y, z;
	cin >> a >> b >> c;
	if (a < b){
		x = a;
		y = b;
	}
	else{
		x = b;
		y = a;
	}
	if ( y < c) z = y;
	else z = c;
	if (x > z) cout << x << " median" << endl;
	else cout << z << " median";
}
