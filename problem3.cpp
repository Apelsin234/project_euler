#include <bits/stdc++.h>

using namespace std;

long long foo(long long k) {
    long long r = (long long)sqrt(k) + 1ll;
    long long ans = k;
    for(long long i = 2; i <= r && k != 1; i++) {
        int cnt = 0;
        while(k % i == 0){
            cnt++;
            k /= i;
            ans = i;
        }
    }
    return ans;
}

int main() {
    long long n;
    cin >> n;

    cout << foo(n);
    return 0;
}
