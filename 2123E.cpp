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
    int x;
    vector<int> arr(n);
    vector<int> arr2;

    for(int i=0;i<n;i++){
        cin>>x;
        arr[x]++;
    }
    int y=0;
      for(int i=0;i<arr.size();i++){
        debug(arr[i])
    }
    
    for(int i=0;i<arr2.size();i++){
        debug(arr2[i])
    }

    while(arr[y]!=0){
        arr2.push_back(arr[y]);
        y++;
    }
    for(int i=0;i<arr.size();i++){
        debug(arr[i])
    }
    sort(all(arr2));
    debug(arr2[0]);
    int free = n-arr2.size();
    int output=1;
    int index=0;
       for(int k=0;k<=n;k++){
        if(k>free){
            output--;
        }
        while(arr2.size()>index&&arr2[index]<=k){
            index++;
            output++;
        }
        cout<<output<<" ";
        
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
