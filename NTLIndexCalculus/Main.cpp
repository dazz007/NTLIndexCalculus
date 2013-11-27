#include <NTL/ZZ.h>
#include <NTL/vector.h>
#include "IndexCalc.h"
#include <iostream>
using namespace std;
using namespace NTL;

int main()
{
   ZZ a, b, c; /*
   const ZZ limit = conv<ZZ>("1000");*/
   const long limit = 100000;
   const long bits = 65;
   IndexCalc ic; 

   ic.GenerateBase(limit);
   ic.GeneratePandQ(bits);
   
   system("PAUSE");

   return 0;
}