#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 11764 - Jumping Mario
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2864
************/

int main()
{
    int t;
    cin >> t;
    int tmp = 0;
    while(t--){
        int n, high = 0, low = 0;
        cin >> n;
        int a;
        cin >> a;
        for(int i = 1; i < n; ++i){
            int x;
            cin >> x;
            if(a < x){
                high++;
                a = x;
            }
            else if(a > x){
                low++;
                a = x;
            }else{
                a = x;
            }
        }
        cout << "Case " << ++tmp << ": " << high << " " << low << endl;
    }
    return 0;
}

