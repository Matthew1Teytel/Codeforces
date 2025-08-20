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
#define debug(x) cout << #x << " = " << (x) << '\n';
#define sz(x) ((int)(x).size())

using namespace std;
void solve(){
    int a;
    int b;
    int x;
    int y;
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;

    if (a%2!=0&&b==a-1){
        cout<<y<<endl;
    }
    else if(a>b){
        cout<<-1<<endl;
    }
    else if(a==b){
        cout<<0<<endl;
    }
    else if ((b-a)%2==1&&a%2==0){
        cout<<(b-a)*x/2+min(x,y)*((b-a)/2+1)<<endl;
    }
     else if ((b-a)%2==1&&a%2==1){
        cout<<((b-a)/2+1)*x+(b-a)/2*min(x,y)<<endl;
    }
    else{
        cout<<((b-a)/2)*x+(b-a)/2*min(x,y)<<endl;


    }



}


int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}