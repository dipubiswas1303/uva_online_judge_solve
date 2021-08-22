#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : p12577
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=4022
************/

int main()
{
    int i = 0;
    while(1){
        i++;
        string a;
        cin >> a;
        if(a[0] == 'H'){
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        }else if(a[0] == 'U'){
            cout << "Case " << i << ": Hajj-e-Asghar" << endl;
        }else{
            break;
        }
    }
    return 0;
}
