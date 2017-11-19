#include <iostream>
using namespace std;
// Fungsi prototip
bool ConvertToLowestTerms(int &pembilang, int &penyebut);
bool ConvertToLowestTerms(int &pembilang, int &penyebut)
{
if (penyebut == 0)
return false;
// Pertama, cari pembagi umum terbesar
// dengan memulai dengan nilai yang lebih kecil dan
// dikurangi 1 sampai kita mendapatkan nomor itu
// rata membagi pembilang dan penyebut.
// Ada algoritma yang lebih cepat (misalnya Euclid's)

int gcd = penyebut;
if (gcd > pembilang)
gcd = pembilang;
while (((pembilang % gcd) != 0) ||
((penyebut % gcd) != 0))
{
gcd--;
}
pembilang /= gcd;
penyebut /= gcd;
return true;
}
int main( )
{
int pembilang, penyebut;
pembilang =7;
penyebut = 4;
cout << pembilang << "/" << penyebut << " = ";
ConvertToLowestTerms(pembilang, penyebut);
cout << pembilang << "/" << penyebut << endl;
pembilang = 35;
penyebut = 7;
cout << pembilang << "/" << penyebut << " = ";
ConvertToLowestTerms(pembilang, penyebut);
cout << pembilang << "/" << penyebut << endl;

}
