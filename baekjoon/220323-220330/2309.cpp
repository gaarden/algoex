#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int v[], int a, int b);

// 9개 다 더하고 2개씩 빼기
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int vec[9];
    int sum = 0;

    for (int i = 0; i < 9; i++){
        int c;
        cin >> c;
        vec[i] = c;
        sum += c;
    }

    sort(vec, vec+9);

    int a;
    int b;
    int out;

    for (int i = 0; i < 9; i++){
        for (int j = i; j < 9; j++){
            out = vec[i]+vec[j];

            if (sum-out == 100){
                print(vec, i, j);
                return 0;
            }
            out = 0;
        }
    }
}

void print(int v[], int a, int b){
    for (int i = 0; i < 9; i++){
        if ((i != a) && (i != b)){
            cout << v[i] << '\n';
        }
    }
}