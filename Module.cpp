#include "Module.h"
#include <iostream>
using namespace std;

int Sequence::getLength() {
	return this->n;
}

void Sequence::setLength(int l) {
	this->n = l;
}

int Sequence::getElem(int pos) {
	return this->s[pos];
}

void Sequence::setElem(int pos, int val) {
	this->s[pos] = val;
}

void Sequence::shellSort() {
	int i = 0, j = 0, pas = 0, temp = 0;

	for(pas = this->n / 2; pas > 0; pas /= 2)
		for(i = pas; i < this->n; i++)
			for (j = i - pas; j >= 0 && this->s[j] > this->s[j + pas]; j -= pas)
				swap(this->s[j], this->s[j + pas]);
}
