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
#define pii pair<long long, long long>
#define vi vector<long long>
#define vpi vector<pii>
#define fi first
#define se second
#define debug(x) cout << #x << " = " << (x) << '\n';
#define sz(x) ((long long)(x).size())

using namespace std;

void solve()
{
    long long n;
    char a;
    long long lim=-1;
   cin>>n;
   vector<long long> A(n);
   vector<long long> B(n);
   for(long long i=0;i<n;i++){
    cin>>A[i];
   }
     for(long long i=0;i<n;i++){
    cin>>B[i];
   }
   long long mini=0;
   long long maxi=0;
   long long temp=0;
   for(long long i=0;i<n;i++){
    temp=min(mini-A[i],B[i]-maxi);
    maxi=max(maxi-A[i],B[i]-mini);
    mini=temp;
  //  debug(mini);
  //  debug(maxi);
   }
   cout<<maxi<<endl;
   
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
