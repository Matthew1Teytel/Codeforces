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
    int c;
    cin>>c;

    vector<int> arr(n);
    for (int &x : arr){cin >> x;}
    sort(all(arr));
    int start =0;

    for(int i=n-1;i>=0;i--){
        if ( arr[i]<=c){
            start=i;
            //debug(start);
            break;
        }
    }
    int count=0;
     for(int i=start;i>=0;i--){
        //debug(arr[i]);
       //debug((pow(2,count)));
       // debug((arr[i]*(pow(2,count))));
        if((arr[i]*pow(2,count))<=c){
            count++;
        }
    }
    cout<<n-count<<endl;
   
}

int main()
{
    ios::sync_with_stdio(false);
cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
