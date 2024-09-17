#include <iostream>
using namespace std;

//Оператор enum на самом деле является типом int. 
enum Food {
    Fish,
    Bread,
    Apple,
    Orange
};

enum StreetFood {
    StreetFish = 1<<0, // бинарное 001
    StreetBread = 1<<1, // бинарное 010
    StreetApple = 1<<2, // бинарное 100
};


int main() {
    Food food = Bread;
    if (food == Bread) {

    }
    //WindowProperties wp = Bordered | Modal;
    // if( wp & Modal ) {
    // cout << "Вы смотрите на модальное окно" << endl;
    // }

    int sendwich = StreetBread | StreetFish;
    if (sendwich & StreetBread) {
        cout << "Bread" << endl;
    } if (sendwich & StreetFish) {
        cout << "Fish" << endl;
    }
    cout << sendwich;

}