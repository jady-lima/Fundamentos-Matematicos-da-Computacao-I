#include <iostream>
#include <math.h>

using namespace std;

int fibonacci(int x){
    if (x == 0 || x == 1) {
        return x;
    } else {
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

int main(){
    long long n = 0, m = 0, fn = 0, mn = 0, mod = 0;

    do {
        cin >> n >> m;        
    } while((n < 0 || n > (pow(2, 31) - 1)) || (m < 0 || m > 20));

    fn = fibonacci(n);
    mod = pow(2, m);
    mn = fn % mod;
    
    cout << mn << endl;

    return 0;
}