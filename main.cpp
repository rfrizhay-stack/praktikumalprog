#include <iostream>
using namespace std;

void pyramid(int tinggi, int variasi) {
    
    if (variasi == 0) {
        
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (variasi == 1) {
        
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= tinggi - i; j++) {
                cout << " ";  
            }
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (variasi == 2) {
        
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= tinggi - i; j++) {
                cout << " ";  
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            for (int j = 1; j <= tinggi - i; j++) {
                cout << " ";  
            }
            cout << endl;
        }
    }
    else {
       
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main() {
    int tinggi, variasi;

    
    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;
    cout << "Masukkan variasi (0, 1, atau 2): ";
    cin >> variasi;

    
    pyramid(tinggi, variasi);

    return 0;
}
