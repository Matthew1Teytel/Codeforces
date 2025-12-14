
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
      int limit=1000000000000;

    int x,y,k;
    cin>>x>>y>>k;
    vector<int> A(limit,1);
   
    for (int i=2;i<sqrt(limit);i++){
        if(A[i]==1){
        for(int j=2*i;j<=limit;j+=i){
            A[j]=0;
        }
    }
    }
    
    int num=x;
    for(int i=3;i<limit;i++){
        if (A[i-1]==1&&A[i+1]==1){
            num--;
            if(num==0){
                cout<<"("<<i-1<<", "<<i+1<<")\n";
                return 0;
            }
            
        }
        
    }
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