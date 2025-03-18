#include <iostream>
using namespace std;

int main(){
    //Perulangan for untuk pencacah naik
    int i;
    cout << "Perulangan For Untuk Pencacah Naik" << endl;
    for (i = 0; i <= 4; i ++){
        cout << "Nilai i : " << i
        << " Lari keliling lapangan" << endl;
    }

    cout << "Nilai ter 1akhir : " << i << endl;
    cout << endl;

    //Perulangan for untuk pencacah turun
    cout << "Perulangan For Pencacah Turun" << endl;
    for (i = 4; i >= 0; i--){
        cout << "Nilai i : " << i
        << " Lari keliling lapangan" << endl;
    }

    cout << "Nilai ter 1akhir : " << i << endl;
    cout << endl;

}
