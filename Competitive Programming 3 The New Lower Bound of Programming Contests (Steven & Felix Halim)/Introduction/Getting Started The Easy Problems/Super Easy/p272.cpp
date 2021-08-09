#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : p272
LINK :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
************/
int main()
{
    string a;
    int c = 0;
    while(getline(cin, a)){
    for(int i = 0; i < a.size(); ++i){
        if(a[i] == '"' && c % 2 == 0){
            cout << "``";
            c++;
        }else if(a[i] == '"' && c % 2 == 1){
            cout << "''";
            c++;
        }else{
            cout << a[i];
        }
    }
    cout << endl;
    }
    return 0;
}
