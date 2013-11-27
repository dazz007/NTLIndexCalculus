#pragma once
#include <NTL/ZZ.h>
#include <NTL/vector.h>
using namespace std;
using namespace NTL;


class IndexCalc
{
public:
	Vec<ZZ> primeNumbers;
	ZZ ic_P; //p = 2*q + 1
	ZZ ic_Q;
	ZZ ic_G;
	ZZ ic_Y;
	ZZ ic_X;
	IndexCalc(void);
	~IndexCalc(void);

	void GenerateBase(long quantity);
	void GeneratePandQ(long bits);
	void CalculateY();
	void IndexCalculus();
};

