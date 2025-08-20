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
        int s;
    int m;
    cin>>n;
    cin>>s;
    cin>>m;
    int start;
    int end;
    bool no=false;
    cin>>start;
    if(start>=s){
        no=true; 
    }
    cin>>end;

    for(int i=0;i<n-1;i++){
        cin>>start;
        if (start-end>=s){
            no=true;
        }
        cin>>end;
        
    }
    if(m-end>=s){
        no=true; 
    }
    if(no){cout<<"YES\n";return;}
    cout<<"NO\n";




}


int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}