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
    int n,k,count=0;
    char a;
    int lim=-1;
   cin>>n>>k;
   vector<char> A(n);
   for(int i=0;i<n;i++){
    cin>>A[i];
   }
   int i=0;
   while(i<n){
   // debug(i);
    if(A[i]=='1'){
        lim=i+k;
        }
    if(i>lim){
        count++;
    }
    i++;
   }
   cout<<count<<endl;
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
