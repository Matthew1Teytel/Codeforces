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

void solve() {
    int n, q;
    cin >> n >> q;
    string num;
    num.reserve(n);

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        num.push_back(c);
    }

    int base_sum = 0;
    int trusub = 0, falsesub = 0, nosub = 0;

    // evaluate fixed characters & classify '?'
    auto val = [&](char c){ return (c=='X'?10:(c=='V'?5:1)); };

    // Last character:
    if (num[n-1] == 'X') base_sum += 10;
    else if (num[n-1] == 'V') base_sum += 5;
    else if (num[n-1] == 'I') base_sum += 1;
    else if (num[n-1] == '?') nosub++;

    bool cansub = (num[n-1] == '?');

    for (int i = n-2; i >= 0; i--) {
        char c = num[i];
        char nxt = num[i+1];

        if (c == 'X')      { base_sum += 10; cansub = 0; }
        else if (c == 'V') { base_sum += 5;  cansub = 0; }
        else if (c == 'I') { base_sum += (nxt=='X' || nxt=='V' ? -1 : 1); cansub = 0; }
        else { // '?'
            // classification
            if (nxt == 'X' || nxt == 'V') {
                trusub++;    // forced subtract
                cansub = 0;
            } else if (nxt == '?') {
                if (cansub) falsesub++;
                else nosub++;
                cansub = !cansub;
            } else { // next = 'I'
                nosub++;
                cansub = 1;
            }
        }
    }

    int total_questions = trusub + falsesub + nosub;

    while (q--) {
        int CX, CV, CI;
        cin >> CX >> CV >> CI;

        long long sum = base_sum; // fresh per query
        int a = trusub, b = falsesub, c = nosub;

        int remI = CI;

        // 1. use I on trusub (−1)
        int take = min(remI, a);
        sum -= take;
        remI -= take;
        a -= take;

        // 2. use I on falsesub (−1)
        take = min(remI, b);
        sum -= take;
        remI -= take;
        b -= take;

        // 3. use I on nosub (+1)
        take = min(remI, c);
        sum += take;
        remI -= take;
        c -= take;

        // Now remaining '?' = b + a + c (but we don't care breakdown)
        int left = a + b + c;

        // 4. use V (value +5)
        take = min(left, CV);
        sum += take * 5;
        left -= take;

        // 5. rest X (+10)
        sum += left * 10;

        cout << sum << "\n";
    }
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
