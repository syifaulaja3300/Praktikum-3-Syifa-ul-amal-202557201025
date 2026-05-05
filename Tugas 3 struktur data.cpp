#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int banyakjenis;
    
    char kodepotong[3];
    int banyakbeli[100];
    int hargasatuan[3],jumlahharga[3];
    
    double jumlahbayar = 0;
    double pajak, totalbayar;
	
    cout << "-------------------------" << endl;
    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "-------------------------" << endl;
    cout << "Kode  Jenis  Harga" << endl;
    cout << "-------------------------" << endl;
    cout << "D     Dada   Rp. 2500" << endl;
    cout << "P     Paha   Rp. 2000" << endl;
    cout << "S     Sayap  Rp. 1500" << endl;
    cout << "-------------------------" << endl << endl;
	
    cout << "\n\nBanyak Jenis : "; cin >> banyakjenis;
    cout << endl;

    for (int i = 0; i < banyakjenis; i++) {
        cout << "Jenis Ke - " << i + 1 << endl;
        cout << "Jenis Potong [D/P/S] : "; cin >> kodepotong[i];
        cout << "Banyak Potong        : "; cin >> banyakbeli[i];

        if (kodepotong[i] == 'D' || kodepotong[i] == 'd') {
            hargasatuan[i] = 2500;
        } else if (kodepotong[i] == 'P' || kodepotong[i] == 'p') {
            hargasatuan[i] = 2000;
        } else if (kodepotong[i] == 'S' || kodepotong[i] == 's') {
            hargasatuan[i] = 1500;
        } else {
            hargasatuan[i] = 0;
        }

        jumlahharga[i] = hargasatuan[i] * banyakbeli[i];
        jumlahbayar += jumlahharga[i];
        cout << endl;
    }
	system ("cls");
    cout << "\n\nGEROBAK FRIED CHICKEN" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "No.   Jenis        Harga       Banyak      Jumlah" << endl;
    cout << "      Potong       Satuan      Beli        Harga" << endl;
    cout << "----------------------------------------------------" << endl;

    for (int i = 0; i < banyakjenis; i++) {
        cout << setiosflags(ios::left) << setw(6) << i + 1;    
        if (kodepotong[i] == 'D' || kodepotong[i] == 'd') 
            cout << setw(13) << "Dada";
        else if (kodepotong[i] == 'P' || kodepotong[i] == 'p') 
            cout << setw(13) << "Paha";
        else if (kodepotong[i] == 'S' || kodepotong[i] == 's') 
            cout << setw(13) << "Sayap";
        else 
            cout << setw(13) << "Tidak Ada";

        cout << "Rp. " << setw(8) << hargasatuan[i];
        cout << setw(12) << banyakbeli[i];
        cout << "Rp. " << jumlahharga[i] << endl;
    }

     pajak = 0.1 * jumlahbayar;
     totalbayar = jumlahbayar + pajak;

    cout << "----------------------------------------------------" << endl;
    cout <<resetiosflags(ios::left)<<setw(47)<< "Jumlah Bayar Rp. " << jumlahbayar << endl;
    cout <<resetiosflags(ios::left)<<setw(47)<< "Pajak 10%    Rp. " << pajak << endl;
    cout <<resetiosflags(ios::left)<<setw(47)<< "Total Bayar  Rp. " << totalbayar << endl;
    cout << "                              ----------------------\n\n\n\n\n\n" << endl;
	
    return 0;
}
