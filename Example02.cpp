// Tugas: Mengkonversi kaki / inci ke meter
// Input: panjang di kaki dan inci, dengan kemungkinan desimal
// bagian inci
// Output: panjang dalam meter, dengan 2 tempat desimal, yang mana
// adalah 'sentimeter' yang ditentukan dalam masalah.

#include <iostream>
using namespace std;
void input(int& kaki, double& inci);
void convert (int kai, double inci, double& meter);
void output(int kai, double inci, double meter);

int main()
{
int kaki;
double inci, meter;
char ans;
do
{
input(kaki, inci);
convert(kaki, inci, meter);
output(kaki, inci, meter);
cout << "Masukkan Y atau y untuk melanjutkan, tekan apapun untuk berhenti. "
<< endl;
cin >> ans;
} while('Y' == ans || 'y' == ans);
return 0;
}
void input(int& kaki, double& inci)
{
cout << "Masukkan kaki dalam bilangan bulat: " << flush;
cin >> kaki;
cout << "Masukkan inci : " << flush;
cin >> inci;
}
const double meter_per_kaki = 0.3048;
const double inci_per_kaki = 12.0;
void convert(int kaki, double inci, double& meter)
{
meter = meter_per_kaki * (kaki + inci/inci_per_kaki);
}
void output(int kaki, double inci, double meter)
{
//nci, meter ditampilkan sebagai angka dengan dua tempat desimal
cout.setf(ios::showpoint);
cout.setf(ios::fixed);
cout.precision(2);
cout << "nilai kaki, inci : " << kaki << ","
<< inci << endl
<< " diubah menjadi meter, sentimeter : "
<< meter << endl;
}

