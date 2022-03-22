#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> vec;

    int n;
    cin >> n;

    vec.push_back(1);
    vec.push_back(1);

    for (int i = 2; i <= n; i++){
        vec.push_back(vec[i-1]*i);
    }

    cout << vec[n] << endl;
}