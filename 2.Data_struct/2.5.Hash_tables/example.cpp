#include <iostream>
#include <unordered_map>


int main(){
    // Создание unordered_map для хранения пар (string, int)
    std::unordered_map<std::string, int> ages;

    // Добавление элементов в unordered_map ('insert' или с помощью оператора [])
    ages["Oleg"] = 17;
    ages["Kristina"] = 10;
    ages["Artem"] = 17;
    ages.insert(std::make_pair("Serge", 9));
    ages.insert(std::make_pair("Alex", 7));

    std::cout << "Возраст Олега" << ages["Олег"] << std::endl;

    for (const auto& pair : ages){
        std::cout << pair.first << " Возраст " << pair.second << " лет " << std::endl;
    }

    return 0;
}