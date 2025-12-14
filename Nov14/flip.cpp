#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>
using namespace std;

void solve() {
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> cakes;

    int x;
    while (cin >> x) {
        cakes.push_back(x);
    }


    int n = cakes.size();
    vector<int> result_flips;
    for (int curr_size = n; curr_size > 0; curr_size--) {
        
        int maxi = distance(cakes.begin(), max_element(cakes.begin(), cakes.begin() + curr_size));
        if (maxi == curr_size - 1) {
            continue;
        }

        if (maxi > 0) {
            reverse(cakes.begin(), cakes.begin() + maxi + 1);
            
            result_flips.push_back(n - maxi);
        }

        reverse(cakes.begin(), cakes.begin() + curr_size);
        
        result_flips.push_back(n - curr_size + 1);
    }


    for (size_t i = 0; i < result_flips.size(); ++i) {
        cout << result_flips[i] <<" ";
    }
    cout <<0<< endl;
    
    return 0;
}