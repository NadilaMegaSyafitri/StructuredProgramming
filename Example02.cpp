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

cout << "Masukkan Y atau y untuk melanjutkan, tekan apapun untuk berhenti. "
<< endl;
cin >> ans;
} while('Y' == ans || 'y' == ans);
return 0;
}
