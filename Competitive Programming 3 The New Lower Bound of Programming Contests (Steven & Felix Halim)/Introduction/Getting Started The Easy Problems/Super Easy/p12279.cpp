#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"
#define nnn cout << "\n"

#define FOR(i, a, b) for(int i=a; i<(b); i++)
#define F0R(i, n) for(int i=0; i<n; ++i)
#define FORd(i, a, b) for(int i = (b)-1; i >= a; i--)
#define F0Rd(i, n) for(int i = (n)-1; i >= 0; i--)
#define trav(a, v) for(auto& a : v)

#define mp make_pair
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define ins insert

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define firstio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    firstio();
    int i = 1;
    while(1){
        int n; cin >> n;
        if(n == 0) break;
        int ct = 0;
        while(n--){
            int x; cin >> x;
            if(x == 0)ct--;
            else ct++;
        }
        cout <<"Case " << i << ": " << ct << nn;
        i++;
    }
    return 0;
}
