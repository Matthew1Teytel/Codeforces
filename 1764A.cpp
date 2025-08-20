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
    vector<int> arr(n);
    for(int &x:arr){cin>>x;}
    int min=0;
    int max=n-1;
    int keepmin=0;
    int keepmax = n-1;
    while (min<max){
        if(arr[max]-arr[min+1]<arr[max-1]-arr[min]){
            max--;
        }
        else{
            min++;
        }
        if(arr[max]-arr[min]-max+min>arr[keepmax]-arr[keepmin]-keepmax+keepmin){
            keepmax=max;
            keepmin=min;

            
        }
    }
    cout<<arr[keepmin]<<" "<<arr[keepmax]<<endl;


}


int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}