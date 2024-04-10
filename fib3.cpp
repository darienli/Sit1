#include <iostream>

using namespace std;

void fib(int n){ 
    int previous_el = 1; int current_el = 1;
    if (n > 1) {
        cout << "0"<<"\n"<< "1"<<"\n";
        for (int k = 2; k < n; ++k){
            cout << current_el << "\n";
            current_el +=previous_el;
            previous_el = current_el - previous_el;
        }
    }
    else cout<<"0";
}

int main(){
    int n; 
    cout << "n: "; cin >> n;
    fib(n);
}

