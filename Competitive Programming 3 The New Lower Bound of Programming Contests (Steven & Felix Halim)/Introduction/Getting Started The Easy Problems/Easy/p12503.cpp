#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 12503 - Robot Instructions
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=3947
************/
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, ans = 0;
        cin >> n;
        vector<string> v;
        while(n--){
            string x;
            cin >> x;
            if(x == "LEFT"){
                v.push_back(x);
            }else if(x == "RIGHT"){
                v.push_back(x);
            }else{
                string a;
                int b;
                cin >> a >> b;
                v.push_back(v[b - 1]);
            }
        }
        for(auto vx : v){
            if(vx == "LEFT"){
                ans--;
            }
            else{
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

