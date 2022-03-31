#include <iostream>
#include <vector>
using namespace std;
int self_num(int n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i < n; i++){
        if (self_num(i) == n){
            cout << i << '\n';
            return 0;
        }
    }

    cout << '0' << '\n';
}

int self_num(int n){
    int k = n;
    int a = n;

    while (1){
        a += k%10;
        k = k/10;

        if (k == 0){
            break;
        }
    }

    return a;
}