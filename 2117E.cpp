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
    set<int> one;
    set<int> two;
    int num=n;
    vector<int> A(n);
    bool find=0;
    for (int &x : A){cin >> x;}
      vector<int> B(n);
    for (int &x : B){cin >> x;}
    for(int i=n-1;i<=0;i++){
        if(i%2==0){
            debug(n);
            one.insert(B[i]);
            two.insert(A[i]);
            if (i>n-2){
                one.insert(A[i+2]);
                two.insert(B[i+2]);
            }
            if(one.count(A[i])>0||two.count(B[i])>0){
               // cout<<num<<endl;
                return;
            }
        }
        else{  
            two.insert(B[i]);
            one.insert(A[i]);
            if (i>n-2){
                two.insert(A[i+2]);
                one.insert(B[i+2]);
            }
                }
         if(two.count(A[i])>0||one.count(B[i])>0){
              //  cout<<num<<endl;
                return;
            }
    }
    cout<<0<<endl;
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
