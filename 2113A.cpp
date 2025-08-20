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
#include<numeric>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vpi vector<pii>
#define fi first
#define se second
#define debug(x) cerr << #x << " = " << (x) << '\n';
#define sz(x) ((int)(x).size())

using namespace std;
void solve(){
    int k;
    int a;
    int b;
    int x;
    int y;
   int  sum1;
   int  sum2;
    cin>>k;
     cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;
    if (x>=y){
        if(k-b>=0){
        sum1=(k-b)/y;
        if((k-b)%y!=0){
            sum1++;
        }
        }
        k-=y*sum1;
        if(k-a>0){
            sum1+=(k-a)/x;
              if((k-a)%x!=0){
            sum1++;
        }
        }
    }
    else {
        if(k-a>=0){
        sum1=(k-a)/x;
        if((k-a)%x!=0){
            sum2++;
        }
        }
        k-=x*sum2;
        if(k-b>0){
            sum1+=(k-b)/y;
              if((k-b)%y!=0){
            sum2++;
        }
        }
    }
    cout<<max(sum1,sum2)<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}