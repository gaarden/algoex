#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n;
    cin >> k;

    queue<int> q;

    for (int i = 1; i <= n; i++){
        q.push(i);
    }

    cout << '<';

    for (int i = 0; i < n; i++){
        for (int i = 0; i < k-1; i++){
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();


        if (i != n-1){
            cout << ", ";
        }
    }
    cout << '>' << '\n';
}