#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : p12372
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=3794
************/

int main()
{
    int i = 0, t;
    cin >> t;
    while(t--){
        i++;
        int a, b, c;
        cin >> a >> b >> c;
        if(a <= 20 && b <= 20 && c <= 20){
            cout << "Case " << i << ": good" << endl;
        }else{
            cout << "Case " << i << ": bad" << endl;
        }
    }
    return 0;
}
