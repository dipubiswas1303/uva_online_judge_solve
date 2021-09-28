#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 12468 - Zapping
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=3912
************/
int main(){
    while(1){
        int a, b, ans = 0;
        cin >> a >> b;
        if(a == -1 && b == -1){
            break;
        }else{
            if(a > b){
                ans = a - b;
            }else{
                ans = b - a;
            }
        }
        if(ans >= 50){
            cout << 100 - ans << endl;
        }else{
            cout << ans << endl;
        }
    }
    return 0;
}
