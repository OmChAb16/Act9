#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int sum(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int n1, n2;
    cout << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;
    cout << "n1 + n2 = " << sum(n1, n2) << endl;
    return 0;
}
