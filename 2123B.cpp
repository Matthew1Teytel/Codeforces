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
    int j;
    int k;
    cin >> n;
    cin >> j;
    cin >> k;

    if(k>1){
        cout<< "Yes"<<endl;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    int x;
    int num;
    int max;
    for(int i=1;i<=n;i++){
        cin >> x;
        if (max<x){
            max=x;
        }
        if(i==j){
            num=x;
        }
    }
    if(num==max){
        cout<<"YES"<<endl;
        
        return;
    }
   cout<<"No"<<endl;
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
