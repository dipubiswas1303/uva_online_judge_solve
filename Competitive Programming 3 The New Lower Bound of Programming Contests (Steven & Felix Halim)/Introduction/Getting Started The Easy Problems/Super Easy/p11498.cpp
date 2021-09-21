#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 11498 - Division of Nlogonia
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2493
************/
int main()
{
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        int x, y;
        cin >> x >> y;
        for(int i = 0; i < n; ++i){
            int a, b;
            cin >> a >> b;
            if(x == a || y == b){
                cout << "divisa" << endl;
            }else if(x > a && y > b){
                cout << "SO" << endl;
            }else if(x < a && y > b){
                cout << "SE" << endl;
            }else if(x < a && y < b){
                cout << "NE" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

