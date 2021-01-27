#include <iostream>
using namespace std;

int isprime(int x) {
    int o = 0;
    for (int i = 2; i < x / 2; i++) {
        if (x % i == 0) {
            return o;
        }
    }
    return x;
}

void printPrime() {
    int c = 1;
    int bgin;
    int end;
    cout << "Entre the begining of your cycle"<< endl;
    cin >> bgin;
    cout << "Entre the end of your cycle"<< endl;
    cin >> end;
    for (bgin; bgin < end; bgin++) {
        if (isprime(bgin) == 0) {
            continue;
        }
        else {
            cout << c  << ". " << isprime(bgin) << endl;
            c++;
        }
 
    }
}

int main()
{
    printPrime();
}
