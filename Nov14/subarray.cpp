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



int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin>>n;
      vector<int> arr(n);
    for(int &x:arr){cin>>x;}
    long long maxi=arr[0];
    long long count=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,count+arr[i]);
        count = max(count+arr[i],0LL);
    }
    cout<<maxi;
    return maxi;

}