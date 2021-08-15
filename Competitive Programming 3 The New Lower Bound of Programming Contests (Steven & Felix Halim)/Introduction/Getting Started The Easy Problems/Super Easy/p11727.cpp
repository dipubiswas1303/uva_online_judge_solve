#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 11727 - Cost Cutting
LINK :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2827
************/
int main()
{
    int t;
    cin >> t;
    int x = t;
    while(t--){
        vector<int> v;
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        cout << "Case " << x - t << ": "<< v[1] <<endl;
    }
    return 0;
}
