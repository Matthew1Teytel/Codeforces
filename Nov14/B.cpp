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
    int less,great;
    less=0;
    great=0;
    vector<char> arr;
    string inp;
    cin>>inp;
    for(char x:inp){arr.push_back(x);}
    int lefts=0;
    int rights=0;
 
    while(lefts<arr.size()&&arr[lefts]=='<'){
        lefts+=1;
    }

    if(lefts<arr.size()&&arr[lefts]=='*'){
        lefts++;
        rights++;
    }
   for(int i=lefts;i<arr.size();i++){
        if(arr[i]!='>'){
            cout<<-1<<endl;
            return;
        }
        rights++;
   }
   cout<<max(lefts,rights)<<endl;
    

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