#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 10550 - Combination Lock
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1491
************/
int main()
{
    while(1){
        int a, b, c, d, sum = 0;
        cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0){
            break;
        }
        if(a >= b){
            sum += (a - b);
        }
        else{
            sum += 40 - (b - a);
        }
        if(c >= b){
            sum += (c - b);
        }
        else{
            sum += 40 - (b - c);
        }if(c >= d){
            sum += (c - d);
        }
        else{
            sum += 40 - (d - c);
        }
        int ans = sum * 9;
        ans += 1080;
        cout << ans << endl;
    }
    return 0;
}

