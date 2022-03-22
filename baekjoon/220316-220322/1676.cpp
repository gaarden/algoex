#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> vec(2);
    
    int n;
    cin >> n;


    for (int i = 2; i <= n; i++){
        int c = i;
        while (c%2 == 0){
            vec[0] += 1;
            c = c/2;
        }

        while (c%5 == 0){
            vec[1] += 1;
            c = c/5;
        }
    }

    if (vec[0] >= vec[1]){
        cout << vec[1] << '\n';
    }else{
        cout << vec[0] << '\n';
    }
}