#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : p12289
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3710
************/

int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int k = a.size();
        if(k == 5){
            cout << 3 << endl;
        }else{
            if(a[0] == 'o' && a[1] == 'n' && a[2] != 'e'){
                cout << 1 << endl;
            }else if(a[0] == 'o' && a[1] != 'n' && a[2] == 'e'){
                cout << 1 << endl;
            }else if(a[0] != 'o' && a[1] == 'n' && a[2] == 'e'){
                cout << 1 << endl;
            }else if(a[0] == 'o' && a[1] == 'n' && a[2] == 'e'){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
    }
    return 0;
}

