#include <bits/stdc++.h>
#include <string>

using namespace std;

typedef long long ll;



int main() {

    int n;;
    cin >> n;
    for(int a = 1; a < n - 2; a++){
        for(int b = a + 1; b < n - a; b++ ){
            int c = n - b - a;
            if(a * a + b * b == c * c){
                cout << a << " " << b << " " << c << " " << (a * 1ll * b * 1ll * c ) << "\n";
            }
        }
    }


    return 0;
}
