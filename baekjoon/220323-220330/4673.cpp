#include <iostream>
#include <vector>
using namespace std;
int self_num(int n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int max = 10000;
    vector<int> vec;

    for (int i = 0; i <= max; i++){
        vec.push_back(i);
    }

    for (int i = max; i >= 1; i--){
        if (vec[i] == 0){
            break;
        }

        int c;
        c = self_num(i);
        if (c <= max){
            vec[c] = 0;
        }
    }

    for (int i = 1; i <= max; i++){
        if (vec[i] != 0){
            cout << i << '\n';
        }
    }
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