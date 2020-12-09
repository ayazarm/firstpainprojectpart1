#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	

	cout << "Uc Tamsayi Giriniz:";
	cin >> a >> b >> c;
	int toplami = a + b + c;
	cout << "Toplami: " << toplami << endl;
	cout << "Ortalamasi: " << toplami / 3 << endl;
	int carpimi = a*b*c;
	cout << "Carpimi: " << carpimi << endl;
	// en kucuk en buyuk sayi bulma yapilamadi
	if (a < b < c) {
		cout << "En Kucuk Sayi: " << a << endl;
	}
	else if (b<a)








	return 0;
}