#include <iostream>
using namespace std;
int main() {
    double X;
    double x;
    cin >> X;
    while(X != 0){
        x = X % 2;
        X /= 2;
        cout<<x;
    }


    return 0;
}