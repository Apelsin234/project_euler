#include <bits/stdc++.h>

using namespace std;

map<int, int> mp;
void foo(int k) {
    int r = (int)sqrt(k) + 1;
    for(int i = 2; i <= r; i++) {
        int cnt = 0;
        while(k % i == 0) {
            cnt++;
            k /= i;
        }
        if(cnt) {
            mp[i] = max(mp[i], cnt);
        }
    }
    mp[k] = max(mp[k],1);
}

int pow(int a, int b){
    //return b ? pow(a, b-1) * a : 1;
    int y = 1;
    while(b != 0){
        if((b & 1) != 0) {
            y *= a;
        }
        b /= 2;
        a *= a;
    }
    return y;
}

int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= n;i++) {
        foo(i);
    }
    int ans = 1;
    for(auto i: mp) {
        ans *= pow(i.first, i.second);
    }

    cout << ans;
    return 0;
}
