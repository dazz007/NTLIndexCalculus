#include "IndexCalc.h"


IndexCalc::IndexCalc(void)
{
}


IndexCalc::~IndexCalc(void)
{
}

void IndexCalc::GenerateBase(long quant){
	Vec<ZZ> numbersTable;

	numbersTable.SetLength(quant);

	for(long i = 2; i < quant; ++i)
	   numbersTable[i] = conv<ZZ>("0");


   for (long i = 2; i*i < quant; ++i ) // przeszukuj liczby od 2 do sqrt(n), 0 i 1 nie s� liczbami pierwszymi
    {
        if (numbersTable[i] == conv<ZZ>("1")) // je�eli dana liczba jest ju� wykre�lona
            continue; // to przejd� do kolejnej
        for (long j = 2*i ; j < quant; j += i){ // przejd� od liczby 2 * i do n przesuwaj�c si� o i
            numbersTable[j] = conv<ZZ>("1"); // i ka�d� z nich usuwaj ze zbioru
		}
    }

    cout << "Liczby pierwsze z przedzia�u od 2 do " << quant << ":" << endl;
    long j = 0;
    for (int i = 2; i < quant; i++) // przeszukaj liczby od 2 do n
        if (numbersTable[i] == conv<ZZ>("0")){ // je�li liczba nie zosta�a usuni�ta ze zbioru
			j++;
			primeNumbers.SetLength(j);
            primeNumbers[j-1] = i; 
	}
}

void IndexCalc::GeneratePandQ(long bits){
	ic_Q = GenGermainPrime_ZZ(bits);
    ic_P = 2*ic_Q + 1;
	ic_G = RandomBits_ZZ(bits/6);
	ic_X = GenPrime_ZZ(bits/8);
}

void IndexCalc::CalculateY(){
	 PowerMod(const ZZ& a, const ZZ& e, const ZZ& n);
	 y = PowerMod(g,
}

void IndexCalc::IndexCalculus(){
	ZZ y;
	long limit = primeNumbers.length();
	
	ZZ x;

	for(long i = 0; i < 4*limit; i++){
		x =  RandomBnd(p) + 1;


	}
	

}