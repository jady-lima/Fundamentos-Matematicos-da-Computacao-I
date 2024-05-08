#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int divisores(int n){
    int d = 0;
    for (int i = 1; (i*i) <= n; ++i) {
        if (n % i == 0) {
            if (i*i == n) {
                d += 1;
            } else {
                d += 2;
            }
        }
    }
    return d;
}

vector<int> sequence(int inicio, int fim) {
    vector<int> seq;
    seq.push_back(1);

    for(int i = 1; seq.back() <= fim; i++){
        seq.push_back(seq[i - 1] + divisores(seq[i - 1]));
    }
    
    return seq;
}

int intInSequence(int a, int b){
    vector<int> seq = sequence(a, b);
    int c = 0;
    for (size_t i = 0; i < seq.size() ; i++) {
        if (seq[i] >= a && seq[i] <= b) {
            c++;
        }
    }
    return c;
}

int main() {
    int t = 0;
    long long a, b;
    
    cin >> t ;  

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << "Caso " << i+1 << ": " << intInSequence(a, b) << endl; 
    }
    
    return 0;
}