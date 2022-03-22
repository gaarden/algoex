#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int check(int a);

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    vector<int> v;

    for (int i = 0; i < vec.size(); i++){
        cin >> vec[i];
    }

    for (int i = 0; i < vec.size(); i++){
        if (check(vec[i])){
            v.push_back(vec[i]);
        }
    }

    cout << v.size() << endl;
}

int check(int a){
    if (a == 1){
        return 0;
    }

    for (int i = 2; i < a; i++){
        if (a % i == 0){
            return 0;
        }else{
            ;
        }
    }

    return 1;
}