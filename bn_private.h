#include <iostream>

#include <cstring>

#include <stdio.h>

#include <string.h>

using namespace std;

class BN

{

char strBigNumber[255];

public:

BN()

{

strBigNumber[0] = '\0';//пустая строка, обнулили строку

}

char* getStrBigNumber()

{

return strBigNumber;

}

};