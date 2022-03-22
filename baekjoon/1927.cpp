#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int> > pq;
    vector<int> vec;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int c;
        cin >> c;

        if (c == 0){
            if (pq.empty()){
                vec.push_back(0);
            }else{
                vec.push_back(pq.top());
                pq.pop();
            }
        }else{
            pq.push(c);
        }
    }

    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << '\n';
    }
}