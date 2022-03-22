#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long> vec;
    vec.push_back(0);
    vec.push_back(1);

    for (int i = 2; i <= n; i++){
        vec.push_back(vec[i-2]+vec[i-1]);
    }

    cout << vec[n] << endl;
}