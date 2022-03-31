#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int s = 1;

    vector<int> vec;
    vector<char> ans;

    for (int i = 0; i < n; i++){
        int c;
        cin >> c;

        if (vec.empty()){
            do{
                vec.push_back(s++);
                ans.push_back('+');
                
            }while(vec.back() < c);
        }

        if (vec.back() > c){
            cout << "NO" << '\n';
            return 0;
        }

        if (!vec.empty()){
            if (vec.back() < c){
                for (; vec.back() != c;){
                    vec.push_back(s++);
                    ans.push_back('+');
                }
                vec.pop_back();
                ans.push_back('-');
            }else if (vec.back() > c){
                for (; vec.back() != c;){
                    vec.pop_back();
                    ans.push_back('-');
                }
            }else{
                vec.pop_back();
                ans.push_back('-');
            }
        }
    }

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << '\n';
    }
}