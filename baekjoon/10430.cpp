#include <iostream>
using namespace std;

void calcu(int a, int b, int c);

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    calcu(a, b, c);
}

void calcu(int a, int b, int c){
    cout << (a+b)%c << endl;
    cout << ((a%c) + (b%c))%c << endl;
    cout << (a*b)%c << endl;
    cout << ((a%c) * (b%c))%c << endl;
}