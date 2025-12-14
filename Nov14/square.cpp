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
#include <iomanip>
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
    vector<tuple<double, double, double, double>> square;
    for (int i = 0; i < n; i++) {
        double Xu, Yu, Ru;
        cin >> Xu >> Yu >> Ru;

        double leftx = Xu - Ru;
        double rightx = Xu+Ru;
        double lefty =Yu-Ru;
        double righty = Yu+Ru;
        square.push_back(make_tuple(leftx, rightx, lefty, righty));
}
        set<double> x_set, y_set;

    for (int i = 0; i < (int)square.size(); i++) {
        x_set.insert(get<0>(square[i])); 
        x_set.insert(get<1>(square[i])); 
        y_set.insert(get<2>(square[i])); 
        y_set.insert(get<3>(square[i])); 
    }

vector<double> A(all(x_set));
vector<double> B(all(y_set));

vector<vector<int>> grid(A.size()-1, vector<int>(B.size()-1, 0));

for (int i = 0; i < (int)grid.size(); i++) {
    for (int j = 0; j < (int)grid[0].size(); j++) {
        double cx = (A[i] + A[i+1]) / 2.0;
        double cy = (B[j] + B[j+1]) / 2.0;

        for (int k = 0; k < (int)square.size(); k++) {
            double leftx = get<0>(square[k]);
            double rightx = get<1>(square[k]);
            double lefty = get<2>(square[k]);
            double righty = get<3>(square[k]);

            if (cx >= leftx && cx <= rightx && cy >= lefty && cy <= righty) {
                grid[i][j] = 1;
                break;
            }
        }
    }
}

double total_area = 0.0;
for (int i = 0; i < (int)grid.size(); i++) {
    for (int j = 0; j < (int)grid[0].size(); j++) {
        if (grid[i][j] == 1) {
            total_area += (A[i+1] - A[i]) * (B[j+1] - B[j]);
        }
    }
}

cout << fixed << setprecision(2) << total_area;
}