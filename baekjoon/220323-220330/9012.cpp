#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int top = 0;
        int c = 0;
        string str;
        cin >> str;
        
        for (int j = 0; j < str.length(); j++){
            if (str[j] == '('){
                top++;
            }else if (str[j] == ')'){
                top--;
                if (top < 0){
                    cout << "NO" << '\n';
                    c = 1;
                    break;
                }else{
                    ;
                }
            }else{
                ;
            }
        }

        if (c == 0){
            if (top == 0){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << '\n';
            }
        }
        
    }
}