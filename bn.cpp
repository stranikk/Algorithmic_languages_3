#include "bn.h"
#include "bn_private.h"
#include <vector>
#include <string>

BN* bn_create()

{

BN *obj = new BN; //выделяется память под obj, возвращается указатель на область памяти, где может разместиться obj

return obj;

}

int bn_destroy(BN* obj)

{

delete obj; //освобождение выделенной памяти

return 0;

}

int bn_from_string(BN* obj, const char* strData)

{

strcpy(obj->getStrBigNumber(), strData); //копирование содержимого strData в объект, получаемый из функции getStrBigNumber(), фукнция strcpy возвращает указатель на метод getStrBigNumber(); через метод getStrBigNumber() мы получим указатель на нашу строчку(strBigNumber)

return 0;

}