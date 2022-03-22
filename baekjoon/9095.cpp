#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long> vec(n); //정답넣기
    vector<long> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);

    for (int i = 4; i < 11; i++){
        v.push_back(v[i-3]+v[i-2]+v[i-1]);
    }

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec[i] = v[a];
    }

    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}