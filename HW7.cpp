#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    cin >> m;
    vector<int> k(m);
    
    for(int i = 0; i < m; ++i) {
        cin >> k[i];
    }
    
    for(int i = 0; i < m; ++i) {
        if (binary_search(a.begin(), a.end(), k[i])) {
            cout << "yes" << endl;
        } else {
        	cout << "no" << endl;
        }
    }
    
    return 0;
}

