#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
	int i;
	cin >> i;
	x |= (1<<i);
	cout<<x;

    return 0;
}