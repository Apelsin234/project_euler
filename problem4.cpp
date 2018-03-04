#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
    int k = 0;
    while(x > 0) {
        k = k * 10 + x % 10;
        x /= 10;
    }
    return k;
}

int main() {
    int ans = -1;
    for(int i = 100; i < 1000; i++) {
        for(int j = i; j < 1000; j++) {
            int t = i * j;
            if(t / 1000 == reverse(t % 1000)){
                ans = max(ans, t);
            }
        }
    }
    cout << ans;
    return 0;
}
