#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 12403 - Save Setu
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3834
************/
int main(){

    int t, sum = 0;
    cin >> t;
    while(t--){
        string a;
        int x;
        cin >> a;
        if(a[0] == 'd'){
            cin >> x;
            sum += x;
        }
        else{
            cout << sum << endl;
        }
    }
    return 0;
}
