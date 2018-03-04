#include <bits/stdc++.h>
#include <bitset>

using namespace std;

typedef long long ll;
const ll N = (ll)1e6;


int main() {

    bitset<N> b;
    ll n, k;
    cin >> n;
    k = 0;
    for(ll i = 2; i < N; i++) {
        if(!b[i]) {
            k++;
            if(k == n) {
                cout << i;
                break;
            }
            for(ll j = i * i; j < N; j += i) {
                b.set(j);
            }
        }
    }


    return 0;
}
