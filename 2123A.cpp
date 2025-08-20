#include <iostream>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
#define fi first
#define se second
#define debug(x) cout << #x << " = " << (x) << '\n';
#define sz(x) ((int)(x).size())

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n%4==0){
        cout<<"BOB";
        return;
    }
        if(n%4==1){
            cout<<"ALice";
            

        return;
    }    if(n%4==2){
        cout<<"Alice";

        return;
    }    if(n%4==3){
        cout<<"ALice";

        return;
    }
    
    
   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
