/*Tag 2, cin is in und cout is out*/

#include <iostream>

using namespace std;

int main()

{
	int Runde1, Runde2;
	int Gesamtpunkte = 0;

	cout << "Punkte der ersten Runde eingeben: ";
	cin >> Runde1;

	cout << "Punkte der zweiten Runde eingeben: ";
	cin >> Runde2;

	Gesamtpunkte = Runde1 + Runde2;
	cout << "Erreichte Gesamtpunktzahl: " << Gesamtpunkte <<endl;

	return 0;

	cin.get();
}