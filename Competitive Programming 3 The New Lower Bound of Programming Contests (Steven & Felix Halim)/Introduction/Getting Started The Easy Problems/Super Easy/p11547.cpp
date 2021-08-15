#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 11547 - Automatic Answer
LINK :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2542
************/
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        x *= 567;
        x /= 9;
        x += 7492;
        x *= 235;
        x /= 47;
        x -= 498;
        x %= 100;
        x /= 10;
        if(x < 0){
            x *= -1;
        }
        cout << x << endl;
    }
    return 0;
}
