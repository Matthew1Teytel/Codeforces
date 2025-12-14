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
    int n,a,less,great;
    less=0;
    great=0;
    cin>>n>>a;
    vector<int> arr(n);
    for(int &x:arr){cin>>x;}
    for(int i=0;i<n;i++){
        if (arr[i]>a){
            great++;
        }
        if (arr[i]<a){
            less++;
        }


    }
    if(less>great){
        cout<<a-1;
    }
    else{
        cout<<a+1;
    }
cout<<endl;

}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}