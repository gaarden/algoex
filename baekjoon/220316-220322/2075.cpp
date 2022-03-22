#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int> > pq;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            int a;
            cin >> a;
        
            pq.push(a);

            if (pq.size() > n){
                pq.pop();
            }
        }
    }

    cout << pq.top() << endl;
}