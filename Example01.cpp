// Tugas: Mengkonversi notulen 24 jam ke notasi AM / AM 12 jam.
// Masukan: 24 jam
// Output: waktu 12 jam yang sesuai, dengan indikasi AM / PM
// Diperlukan: 3 fungsi: input, konversi, dan output.

#include <iostream>
using namespace std;
void input(int& jam24, int& menit);
void convert(int& jam, char& AMPM);
void output(int jam, int menit, char AMPM);
int main()
{
int jam, menit;
char AMPM, ans;
do
{
input(jam, menit);
convert(jam, AMPM);
output(jam, menit, AMPM);
cout << "Masukkan Y atau y untuk melanjutkan, tekan apapun untuk berhenti."
<< endl;
cin >> ans;
} while('Y'== ans || 'y' == ans);
return 0;
}
void input(int& jam24, int& menit)
{
char colon;
cout << "Masukkan waktu 24 jam dalam format HH: MM "
<< endl;
cin >> jam24 >> colon >> menit;
}
void convert(int& jam, char& AMPM)
{
if(jam > 12) // pada sore hari
{
jam = jam - 12;
AMPM = 'P';
}
else if (12 == jam) // batas jam siang
AMPM = 'P'; // tapi jam tidak berubah.
else if (0 == jam) // batas jam pagi
{
jam = jam + 12;
AMPM = 'A';
}
else // (jam <12) // pasti jam pagi
AMPM = 'A'; // jam tidak berubah
}
void output(int jam, int menit, char AMPM)
{
cout << "Waktu dalam format 12 jam : " << endl
<<jam << ":" << menit << " "
<< AMPM << 'M' << endl;
}
