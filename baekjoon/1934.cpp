#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
    int n;
    int max, min;
    
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++){
        int a, b;
        cin >> a;
        cin >> b;

        vec[i] = lcm(a, b);
    }

    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}