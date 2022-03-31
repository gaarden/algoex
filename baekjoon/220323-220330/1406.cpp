#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    stack<char> left;
    stack<char> right;

    for (int i = 0; i < str.size(); i++){
        left.push(str[i]);
    }

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++){
        string s;
        getline(cin, s);

        if (s[0] == 'L'){
            // 커서 왼쪽 이동
            if (!left.empty()){
                right.push(left.top());
                left.pop();
            }else{
                ;
            }
        }else if(s[0] == 'D'){
            // 커서 오른쪽 이동
            if (!right.empty()){
                left.push(right.top());
                right.pop();
            }else{
                ;
            }
        }else if(s[0] == 'B'){
            // 커서 왼쪽 문자 삭제
            if (!left.empty()){
                left.pop();
            }else{
                ;
            }
        }else{
            // 커서 왼쪽에 문자 x 삽입
            char x;
            x = s[2];
            left.push(x);
        }
    }

    for (; !left.empty(); ){
        right.push(left.top());
        left.pop();
    }

    for (; !right.empty(); ){
        cout << right.top();
        right.pop();
    }
    cout << '\n';
}