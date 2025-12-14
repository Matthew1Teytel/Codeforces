#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    int n;
    cin >> m>>n;

    vector<int> coins(n);
    int a = 0;
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        a += coins[i];
    }

    vector<int> notdp(a + 1, 1000000000);
    

    notdp[0] = 0;

    
    for (int i = 0; i < n; i++) {//wont forget coins used this way
        int coin = coins[i];

        for (int j = a; j >= coin; j--) {
            
            if (notdp[j - coin] != 1000000000) {
                
                if (notdp[j - coin] + 1 < notdp[j]) {
                    notdp[j] = notdp[j - coin] + 1; 
                }
            }
        }
    }

    int sum = -1;
    for (int i = m; i <= a; ++i) {
        if (notdp[i] != 1000000000) {
            cout << i << " " << notdp[i] << endl;
            sum = i;
            break; 
        }
    }
    return 0;
}