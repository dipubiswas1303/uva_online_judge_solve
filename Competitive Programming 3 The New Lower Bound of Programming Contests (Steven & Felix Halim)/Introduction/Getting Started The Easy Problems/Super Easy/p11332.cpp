#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 11332 - Summing Digits
LINK : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307
************/
long long result(long long x){
    long long s = 0;
    while(x != 0){
        s += x % 10;
        x = x / 10;
    }
    long long ans;
    if(s > 9){
       ans = result(s);
    }
    else{
        return s;
    }
    return ans;
}
int main(){
    while(1){
        long long n, sum = 0;
        cin >> n;
        if(n == 0){
            break;
        }
        sum = result(n);
        cout << sum << endl;

    }
    return 0;
}
