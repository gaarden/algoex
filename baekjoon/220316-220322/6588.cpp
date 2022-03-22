#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int check(int c);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a, b;

    vector<string> vec;

    do{
        cin >> n;

        for (int i = 3; i < n; i=i+2){
            a = i;
            b = n - a;

            if (a <= b){
                if (check(a)*check(b)){
                    string str;
                    str = to_string(n) + " = " + to_string(a) + " + " + to_string(b);
                    vec.push_back(str);
                    break;
                }else{
                    ;
                }
            }else{
                vec.push_back("Goldbach's conjecture is wrong.");
            }
        }
    }while (n != 0);

    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << '\n';
    }
}

int check(int c){
    for (int i = 3; i <= ceil(sqrt(c)); i++){
        if (c % i == 0){
            return 0;
        }else{
            ;
        }
    }

    return 1;
}