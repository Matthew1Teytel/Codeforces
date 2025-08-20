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
    vector<int> arr(n);
    for (int &x : arr){cin >> x;}
    vector<int> arrmin(n);
    vector<int> arrmax(n);
    arrmin[0]=arr[0];
    arrmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        arrmin[i]=min(arrmin[i-1],arr[i]);
    }

    for(int i=n-2;i>=0;i--){
        arrmax[i]=max(arrmax[i+1],arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]==arrmax[i]||arr[i]==arrmin[i]){
            cout<<"1";
        }
        else{cout<<"0";}
        }   
        cout<<endl;
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
