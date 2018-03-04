#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll foo(ll k){
    ll ans = 0;
    for(ll i =  1; i <= k; i++) {
        ans += i * i;
    }
    return ans;
}

ll bar(ll k) {
    ll ans = ((1ll + k) * k) / 2;
    return ans * ans;
}

int main() {
    int n;
    cin >> n;
    cout << bar(n) - foo(n);
    return 0;
}
