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
    int max;
    int min;
    int start;
    n--;
    cin>>start;
    min=start-1;
    max=start+1;
    int curr;
    while(n--){
        cin>>curr;
        if (curr==min){
            min--;
        }
        else if (curr==max){
            max++;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";


}


int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}