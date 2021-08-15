#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 11172 - Relational Operator
LINK :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2113&mosmsg=Submission+received+with+ID+26686879
************/
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        if(x > y){
            cout << ">" << endl;
        }else if(x < y){
            cout << "<" << endl;
        }else{
            cout << "=" << endl;
        }

    }
    return 0;
}
