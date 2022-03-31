#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    vector<vector<string> > vec(n);

    for (int i = 0; i < n; i++){
        string str;
        getline(cin, str);
        istringstream ss(str);
        string stringBuffer;

        while (getline(ss, stringBuffer, ' ')){
            vec[i].push_back(stringBuffer);
        }
    }

    for (int i = 0; i < vec.size(); i++){
        for (int j = 0; j < vec[i].size(); j++){
            reverse(vec[i][j].begin(), vec[i][j].end());
            cout << vec[i][j] << ' ';
        }
        cout << '\n';
    }
}