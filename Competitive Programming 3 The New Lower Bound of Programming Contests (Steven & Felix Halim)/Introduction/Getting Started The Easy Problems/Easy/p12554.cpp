#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 12554 - A Special "Happy Birthday" Song!!!
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=3999
************/
vector<string> v, res;
int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        v.push_back(x);
    }
    res.push_back(": Happy");
    res.push_back(": birthday");
    res.push_back(": to");
    res.push_back(": you");
    string r =": Rujia";
    int k = v.size();
    int m = 0, n = k / 16 + 1;
    n = n * 16;
    for(int i = 0; i < n; ++i){
        m++;
        if(m == 12){
            cout << v[i % k] << r << endl;
            m = -4;
        }else{
            cout << v[i % k] << res[i % 4] << endl;
        }
    }
    return 0;
}
