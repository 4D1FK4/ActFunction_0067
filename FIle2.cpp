// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l;

// implementasi Prosedur dan Fungis
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah(float a, float n, float c){
    return a + b + c;
}

int luasPersegiP(int a, int b){
    return a * b;
}

void output(){
    cout << "Hasilnya = " << luasPersegiP(p, 1) << endl;
    cout << "terima kasih" << endl;
}

int main() { //mulai
    input();
    output();
    cout << "hasilnya penjumlahan= " << jumlah(15.1, 24.9, 67);
} //selesai