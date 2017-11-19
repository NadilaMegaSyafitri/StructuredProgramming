//mph.cpp
// Program ini menguji fungsi kelebihan beban untuk mengonversi kecepatan
// dalam hitungan menit dan detik sampai mil per jam, dan juga untuk berkonversi
// kilometer per jam sampai mil per jam.

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
// Function prototypes
double ConvertToMPH(int kecepatanMin, int kecepatanSec);
double ConvertToMPH(double kph);
// ======================
// ConvertToMPH
// Mengonversi kecepatan dalam hitungan menit / detik per mil
// mil per jam.
// ======================
double ConvertToMPH(int kecepatanMin, int kecepatanSec)
{
int milperdetik;
double mph;
// Mengkonversi kecepatan hingga detik per mil
milperdetik = kecepatanMin * 60 + kecepatanSec;
// Konversikan ke mil per jam. 1 / secspermile adalah mil / detik dan kemudian
// skala sampai satu jam dengan mengalikan 3600 detik / jam
mph = (1 / static_cast<double>(milperdetik)) * 3600;
return mph;
}
// ======================
// ConvertToMPH
// Mengubah kecepatan dalam kilometer per mil
// mil per jam.
// ======================
double ConvertToMPH(double kph)
{
double mph;
mph = kph / 1.61;
return mph;
}

int main()
{
cout << "6:30 kaki adalah " << ConvertToMPH(5,30) << " MPH." << endl;
cout << "7:50 kaki adalah " << ConvertToMPH(7,30) << " MPH." << endl;
cout << "8:00 kaki adalah " << ConvertToMPH(8,0) << " MPH." << endl;
cout << "10 kph adalah " << ConvertToMPH(10) << " MPH." << endl;
cout << "30 kph adalah " << ConvertToMPH(20) << " MPH." << endl;
cout << "120 kph adalah " << ConvertToMPH(120) << " MPH." << endl << endl;
}
