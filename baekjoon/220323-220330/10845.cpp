#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    queue<int> q;

    for (int i = 0; i < n; i++){
        string str;
        getline(cin, str);

        if (str == "pop"){
            if (q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
                q.pop();
            }
        }else if (str == "size"){
            cout << q.size() << '\n';
        }else if (str == "empty"){
            if (q.empty()){
                cout << '1' << '\n';
            }else{
                cout << '0' << '\n';
            }
        }else if (str == "front"){
            if (q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
            }
        }else if (str == "back"){
            if (q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.back() << '\n';
            }
        }
        else{//push
            string num = str.substr(5, 6);
            int c;
            c = stoi(num);
            q.push(c);
        }
    }
}