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
    int x;
    int min=1000000000;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>min*2-1){
            cout<<"No"<<endl;
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if(x<min){
            min=x;
        }
    }
    cout<<"Yes"<<endl;
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
