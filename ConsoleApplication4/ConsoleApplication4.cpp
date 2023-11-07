#include "Header3.h"
#include "Source1.cpp"
#include <iostream>
#include <vector>
#include <locale>
#include <fstream>
#include <string>
#include <algorithm>  
#include <cstdlib>    
#include <ctime> 

int main() {
    setlocale(LC_ALL, "ukr");
    vector<Tourist*> tourists;
    vector<Tourist*> Viptourists;
    string command;
    int prices[5] = { 1500, 2000, 2500, 3000, 3500 };
    do {
        std::cout << "Введіть команду (Add, Show, Task1 або Exit): ";
        std::cin >> command;
      
       
        if (command == "Add") {
            ofstream Tourists("Tourists", ios::app);
            string type;
            std::cout << "Введіть тип подорожі (VIP або Common): ";
            std::cin >> type;

            if (type == "VIP") {
                setVIPTourists();
            }
            else if (type == "Common") {
                setCommonTourists();
                
            }
        }
        else if (command == "Task1")
        {
            Tourist newTourist = createTourist("John", "Doe", 30, "john.doe@example.com", 123456789);
            std::cout << "Ім'я: " << newTourist.getName() << std::endl;
            std::cout << "Прізвище: " << newTourist.getSurname() << std::endl;
            std::cout << "Вік: " << newTourist.getAge() << std::endl;
            std::cout << "Електронна пошта: " << newTourist.getEmail() << std::endl;
            std::cout << "Номер телефону: " << newTourist.getPhone() << std::endl;


        }
        else if (command == "Show") {
            randomAgeArray();
            string line;
            ifstream vipTourists("VipTourists.txt");
            if (vipTourists.is_open()) {
                cout << "Віп туристи: " << endl;
                while (getline(vipTourists, line)) {
                    cout << line << '\n';
                }
                vipTourists.close();
                ifstream Tourists("Tourists.txt");
                if (Tourists.is_open()) {
                    cout << "Туристи: " << endl;
                    while (getline(Tourists, line)) {
                        cout << line << '\n';
                    }
                    Tourists.close();

                    for (Tourist* vipTourist : Viptourists) {
                        std::cout << "Віп туристи:\n";

                        std::cout << "Ім'я: " << vipTourist->getName() << "\n";
                        std::cout << "Прізвище: " << vipTourist->getSurname() << "\n";
                        std::cout << "Вік: " << vipTourist->getAge() << "\n";
                        std::cout << "Email: " << vipTourist->getEmail() << "\n";
                        std::cout << "Телефон: " << vipTourist->getPhone() << "\n";
                        std::cout << "Країна: " << vipTourist->myTrip.getCountry() << endl;
                        std::cout << "Термін подорожі: " << vipTourist->myTrip.getDuration() << endl;
                        std::cout << "Транспорт: " << vipTourist->myTrip.getTransport() << endl;
                    }


                    for (Tourist* tourist : tourists) {
                        std::cout << "Туристи:\n";

                        std::cout << "Ім'я: " << tourist->getName() << "\n";
                        std::cout << "Прізвище: " << tourist->getSurname() << "\n";
                        std::cout << "Вік: " << tourist->getAge() << "\n";
                        std::cout << "Email: " << tourist->getEmail() << "\n";
                        std::cout << "Телефон: " << tourist->getPhone() << "\n";
                        std::cout << "Готель: " << tourist->myTrip.getHotel() << "\n";
                        std::cout << "Ціна подорожі: " << tourist->myTrip.getPrice() << "\n";
                        std::cout << "Країна: " << tourist->myTrip.getCountry() << endl;
                        std::cout << "Термін подорожі: " << tourist->myTrip.getDuration() << endl;
                        std::cout << "Транспорт: " << tourist->myTrip.getTransport() << endl;
                    }
                }
            }
        }

    } while (command != "Exit");

    for (Tourist* tourist : tourists) {
        delete tourist;
    }
    
    return 0;

}
