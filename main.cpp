#include <iostream>
#include <string>

using namespace std;

int main(){
    
    // String Merupakan sebuah teks yang berisi gabungan huruf, angka dan spasi,
    string Teks = "Ini isi dari sebuah string";
    cout << Teks << endl << endl;

    // String merupakan kumpulan dari char atau array char;
    cout << "Teks Yang diambil : ";
    // Cara Mengakses tiap huruf pada String
    cout << Teks[8] << Teks[9] << Teks[10] << Teks[11]; // Array Dimulai dari 0
    
    cin.get();
    return 0;   
}