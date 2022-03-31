#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    vector<int> vec;
    vector<int> print;

    for (int i = 0; i < n; i++){
        string str;
        getline(cin, str);

        if (str == "pop"){
            if (vec.empty()){
                print.push_back(-1);
            }else{
                print.push_back(vec.back());
                vec.pop_back();
            }
        }else if (str == "size"){
            print.push_back(vec.size());
        }else if (str == "empty"){
            if (vec.empty()){
                print.push_back(1);
            }else{
                print.push_back(0);
            }
        }else if (str == "top"){
            if (vec.empty()){
                print.push_back(-1);
            }else{
                print.push_back(vec.back());
            }
        }else{//push
            string num = str.substr(5, 6);
            int c;
            c = stoi(num);
            vec.push_back(c);
        }
    }

    for (int i = 0; i < print.size(); i++){
        cout << print[i] << '\n';
    }
}