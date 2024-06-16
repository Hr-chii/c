#include <iostream>
using namespace std;

long long powerMod(long long a, long long b, long long c) {
    long long result = 1; 
    a = a % c; 

    while (b > 0) {
        if (b & 1) 
            result = (result * a) % c;

        b = b >> 1; 
        a = (a * a) % c;  
    }
    return result;
}

int main() {
    long long a, b, c;
    
    while (cin >> a >> b >> c) {
        if (a == -1 && b == -1 && c == -1) break; 
        cout << powerMod(a, b, c) << endl;
    }

    return 0;
}


