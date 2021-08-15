#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 12250 - Language Detection
LINK :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3402
************/
int main()
{
    int c = 0;
    while(1){
        c++;
        if(c == 2001){
            break;
        }
        string a;
        cin >> a;
        if(a == "HELLO"){
            cout << "Case " << c << ": " << "ENGLISH" << endl;
        }else if(a == "HALLO"){
            cout << "Case " << c << ": " << "GERMAN" << endl;
        }else if(a == "CIAO"){
            cout << "Case " << c << ": " << "ITALIAN" << endl;
        }else if(a == "ZDRAVSTVUJTE"){
            cout << "Case " << c << ": " << "RUSSIAN" << endl;
        }else if(a == "BONJOUR"){
            cout << "Case " << c << ": " << "FRENCH" << endl;
        }else if(a == "HOLA"){
                cout << "Case " << c << ": " << "SPANISH" << endl;
        }else if(a == "#"){
            break;
        }else{
            cout << "Case " << c << ": " << "UNKNOWN" << endl;
        }

    }
    return 0;
}
