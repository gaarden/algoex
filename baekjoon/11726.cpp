#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    for (int i = 3; i <= n; i++){
        vec.push_back((vec[i-1]+vec[i-2])%10007);
    }

    cout << vec[n]%10007 << endl;
}