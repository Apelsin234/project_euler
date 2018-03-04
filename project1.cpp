#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b) {
    return (b + a * b) * (a) / 2;
}

int main()
{
    int n;
    cin >> n;
    n--;
    int a = sum(n / 3, 3);
    int b = sum(n / 5, 5);
    int c = sum(n / 15, 15);
    int ans = a + b -c;
    cout << ans;
    return 0;
}
