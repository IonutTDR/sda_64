#include "Module.h"
#include <iomanip>
#include <iostream>

using namespace std;

void read(Sequence s) {
	int elem = 0;
	cout << "Citeste elementele secventei: \n";
	for (int i = 0; i < s.getLength(); i++) {
		cout << "s[" << i << "] = ";
		cin >> elem;
		s.setElem(i, elem);
	}
}

void print(Sequence s) {
	for (int i = 0; i < s.getLength(); i++)
		cout << s.getElem(i) << " ";
	cout << "\n";
}

int main() {
	int n = 0;
	cout << "Lungimea secventei este: ";
	cin >> n;
	Sequence seq(n);

	read(seq);
	cout << "--- Elementele inainte de sortare ---\n";
	print(seq);

	cout << "--- Elementele dupa sortare ---\n";
	seq.shellSort();
	print(seq);

	return 0;
}