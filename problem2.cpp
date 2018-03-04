#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans = 0;
    long long a = 1;
    long long b = 1;
    while(a < n) {
        int c = b;
        b += a;
        a = c;
        if(b % 2 == 0) {
            ans += b;
        }
    }
    cout << ans;
    return 0;
}
