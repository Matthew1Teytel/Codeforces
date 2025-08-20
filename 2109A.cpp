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
    int n;
    cin>>n;
    bool ones=true;
    bool last;
    int x;
    cin>>last;
    if (last==0){
        ones=false;
    }
    for(int i=1;i<n;i++){
        cin>>x;
        if(last==0&&x==0){
            cout<<"YES\n";
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if(x==0){
            last=0;
            cout<<"";
        }
        if(x==1){
            last=1;
        }
        if (x==0){
            cout<<"";
            ones =false;
        }
    }
    if (ones){
        cout<<"YEs\n";
        return;
    }
    cout<<"NO\n";
    
}


int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}