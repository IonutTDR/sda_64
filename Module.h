#pragma once
#ifndef MODULE_H
#define MODULE_H

class Sequence {
private:
	int n;
	int* s;
public:
	Sequence(int n) {
		this->n = n;
		this->s = new int[this->n];
	}

	int getLength();
	void setLength(int);
	int getElem(int);
	void setElem(int, int);
	void shellSort();
};

#endif