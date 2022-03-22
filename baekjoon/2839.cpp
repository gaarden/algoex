#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double a;
    int rem;
    cin >> n;

    int x = 0, y = 0;
    a = n/5;
    x = floor(a);
    rem = n-(5*x);

    if (rem%3 == 1){
        x = x-1;
        rem = rem+5;
    }else if(rem%3 == 2){
        x = x-2;
        rem = rem+10;
    }else{
        ;
    }

    if (x >= 0){
        y = rem/3;
        cout << x+y << endl;
    }else{
        cout << -1 << endl;
    }
    
}