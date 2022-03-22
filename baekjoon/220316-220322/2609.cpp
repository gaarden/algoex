#include <iostream>
#include <algorithm>
using namespace std;

void calcu(int a, int b, int max, int min);

int main(){
    int a, b;
    int max, min;

    cin >> a;
    cin >> b;

    calcu(a, b, max, min);
}

void calcu(int a, int b, int max, int min){
    int c;

    if (a == b){
        max = 1;
        min = a;
    }else{
        if (a > b){
            c = a-b;
            if (c > b){
                c = b;
            }
        }else{
            c = b-a;
            if (c > a){
                c = a;
            }
        }

        for (int i = c; i >= 1; i--){
            if (i == 1){
                max = 1;
            }else{
                if ((a%i == 0) && (b%i == 0)){
                    max = i;
                    break;
                }else{
                    ;
                }
            }
            
        }
        min = a * b / max;
    }

    cout << max << endl;
    cout << min << endl;
}