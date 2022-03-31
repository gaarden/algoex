#include <iostream>
#include <vector>
using namespace std;

int hs(int a);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int s = 0;

    for (int i = 1; i <= n; i++){
        if (hs(i)){
            s++;
        }
    }

    cout << s << '\n';
}

int hs(int a){
    int c;

    if (a < 100){
        return 1;
    }

    if (a == 1000){
        return 0;
    }

    c = a%10 - (a/10)%10;
    a = a/10;

    if (c == a%10 - (a/10)%10){
        return 1;
    }

    return 0;
}