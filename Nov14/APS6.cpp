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
 int one;
 int two ;
 int three;
 int four;
 int five;
 int six;
 cin>>one>>two>>three>>four>>five>>six;



 int count=0;
 int freeone=0;
 count+=six;
 count+=five;
 freeone+=five*11;
 int freetwo=0;
 count+=four;
 freetwo+=5*four;
 count+=three/4;
 if(three%4==1){
    count++;
    freetwo+=5;
    freeone+=7;
 }
  if(three%4==2){
    count++;
    freetwo+=3;
    freeone+=6;

 }
  if(three%4==3){
    count++;
    freetwo+=1;
    freeone+=5;
 }

 int temp=freetwo-two;
 two-=freetwo;
 two=max(two,0);
 freetwo=max(temp,0);
 count+=two/9;
 if(two%9!=0){
    count++;
    freetwo=freetwo+9-(two%9);
 }

 freeone+=freetwo*4;
 one-=freeone;
 if( one>0){
    count+=(one/36);
    count+=(one%36!=0);
 }

 cout<<count<<endl;
return 0;
 
 


}