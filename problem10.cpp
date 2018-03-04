#include <bits/stdc++.h>
#include <bitset>

using namespace std;

typedef long long ll;
const ll N = (ll)2e6;


int main() {

    bitset<N> b;
    ll n, k;

    cin >> n;
    n--;
    k = 0;
    for(ll i = 2; i < n; i++) {
        if(!b[i]) {
            k += i;
            for(ll j = i * i; j < n; j += i) {
                b.set(j);
            }
        }
    }
    cout << k;


    return 0;
}
