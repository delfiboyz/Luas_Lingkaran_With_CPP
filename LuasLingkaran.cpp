#include <iostream>
using namespace std;

int main() {
    double jariJari;
    
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
    
    double luas = 3.14159 * jariJari * jariJari;
    
    cout << "Luas lingkaran adalah: " << luas << endl;
    
    return 0;
}
