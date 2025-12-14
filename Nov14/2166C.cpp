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
struct Node{
    int data;
    Node*next;
};
void solve(){
    int n;
    cin>>n;
    Node* B = new Node;
    cin >> B->data;
    Node* root = B;
    Node* C = B;

    for (int i = 0; i < n - 1; i++) {
        Node* A = new Node;
        cin >> A->data;
        C->next = A;
        cout << C->data;
        C = A;
    }

    C->next = B;
     for(int i=0;i<10;i++){

        cout<<C->data<<endl;
        C=(C->next);
     }
    priority_queue<tuple<int,Node*>, std::vector<int>, std::greater<int>> minHeap;

     for(int i=0;i<n-1;i++){
        
             tuple<int,Node*> tup;

        

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
