#include "interf.h" // каждый файл, который использует isPositive,
// absEqual или getGrade должен #include (включать) "prototypes.h"
int superglobal; // "реализация" переменной
// Сами определения функций здесь, в файле .cpp
bool isPositive( double value ) {
    return value > 0;
}
bool absEqual( int a, int b) {
    // Делаем a и b положительными
    if( a < 0 )
        a = -a;
    if( b < 0 )
        b = -b;
    // теперь, когда они оба положительные,
    // на нужно лишь сравнить на равенство a и b
    return a == b;
}
