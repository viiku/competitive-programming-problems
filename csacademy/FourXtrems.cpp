#include <bits/stdc++.h>
using namespace std;
int fourXtremes(int a, int b, int c, int d) {
    return abs(min({a,b,c,d})-max({a,b,c,d}));
}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fourXtremes(a, b, d, c) << "\n";
    return 0;
}
