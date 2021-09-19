#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 11364 - Parking
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2349&mosmsg=Submission+received+with+ID+26787950
************/
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x = -2, y = 200, n, ans = 0;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            if(a > x){
                x = a;
            }
            if(a < y){
                y = a;
            }
        }
        ans = (x - y) * 2;
        cout << ans << endl;
    }
    return 0;
}
