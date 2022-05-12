#include<bits/stdc++.h>
using namespace std;
int check(int n) {
    if(n % 2 == 1) return 0;
    int count = 0;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0 && i % 2 == 0) {
            count++;
        }
        if(n /i % 2 == 0 && n / i != i && n % (n /i) == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int k; cin >> k;
    while(k--) {
        int n; cin >> n;
        cout << check(n) << endl;
    }
}
