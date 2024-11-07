#include <iostream>
using namespace std;

void printStars(int n) {
    if (n <= 0) return;
    cout << "*";
    printStars(n - 1);
}

int main() {
    int n;
    cout << "количество звезд ";
    cin >> n;
    printStars(n);
    cout << endl;
    return 0;
}
