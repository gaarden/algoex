#include <iostream>
using namespace std;
int gcd(int a, int b);

struct fraction{
    int numer;
    int denom;
};

int main(){
    fraction f1;
    fraction f2;
    fraction result;

    cin >> f1.numer;
    cin >> f1.denom;

    cin >> f2.numer;
    cin >> f2.denom;

    result.numer = (f1.numer * f2.denom) + (f2.numer * f1.denom);
    result.denom = f1.denom * f2.denom;

    int div;
    div = gcd(result.numer, result.denom);

    result.numer = result.numer/div;
    result.denom = result.denom/div;

    cout << result.numer << " " << result.denom << endl;
}

int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}