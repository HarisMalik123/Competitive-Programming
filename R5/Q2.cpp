#include<iostream>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    long long count = 0;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        
        long long n = b - a + 1;
     //   cout << n << endl;
        count = count + (n * (a + b)) / 2;
    }
    cout << count << endl;
    return 0;
}
