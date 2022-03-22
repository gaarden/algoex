#include <iostream>
using namespace std;

long long count(long long a, long long b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    long long a, b;

    a = count(2, n) - count(2, n-m) - count(2, m);

    b = count(5, n) - count(5, n-m) - count(5, m);

    if (a > b){
        cout << b << '\n';
    }else{
        cout << a << '\n';
    }
}

long long count(long long a, long long b){
    long long c = 0;

    for (long long i = a; i <= b; i = i*a){
        c += b/i;
    }

    return c;
}