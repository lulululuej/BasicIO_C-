#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    double m;
    cin >> m;
    cout << setprecision(3) << m << endl;
    cout << setprecision(3) << std::fixed << m << endl;
    return 0; 
}