#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

int main(){
    map<char, int> mymap;

    int n;
    int m;

    cin >> n >> m;

    int c = 0;

    for (int i = 0; i < n; i++){
        string str;
        cin >> str;

        mymap.clear();

        for (int j = 0; j < str.size(); j++){
            if (mymap.find(str[j]) == mymap.end()){
                mymap[str[j]] = 1;
            }else{
                mymap[str[j]] += 1;
            }
        }

        if (mymap.size() <= m){
            c += 1;
        }
    }

    cout << c << endl;
}