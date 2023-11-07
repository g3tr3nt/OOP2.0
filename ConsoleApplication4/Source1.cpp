#include "Header3.h"
    vector<Tourist*> tourists;
    vector<Tourist*> Viptourists;
    string command;
   
void setVIPTourists() {
    ofstream vipTourists("VipTourists.txt", ios::app);
    VipTourist* vipTourist = new VipTourist();
    string name;
    string surname;
    string email;
    string country;
    string Transport;
    int duration;
    int phone;
    int age;
    std::cout << "Введіть ім'я: ";
    std::cin >> name;
    vipTourist->setName(name);
    vipTourists << "Ім'я " << name << endl;

    std::cout << "Введіть прізвище: ";
    std::cin >> surname;
    vipTourist->setSurname(surname);
    vipTourists << "Прізвище " << surname << endl;

    std::cout << "Введіть вік: ";
    std::cin >> age;
    vipTourist->setAge(age);
    vipTourists << "Вік " << age << endl;

    std::cout << "Введіть email: ";
    std::cin >> email;
    vipTourist->setEmail(email);
    vipTourists << "email " << email << endl;

    std::cout << "Введіть мобільний номер телефону: ";
    std::cin >> phone;
    vipTourist->setPhone(phone);
    vipTourists << "Мобільний номер телефону " << phone << endl;

    std::cout << "Введіть країну для подорожі: ";
    std::cin >> country;
    vipTourist->myTrip.setCountry(country);
    vipTourists << "Країна " << country << endl;

    std::cout << "Введіть термін подорожі: ";
    std::cin >> duration;
    vipTourist->myTrip.setDuration(duration);
    vipTourists << "Термін подорожі " << duration << endl;

    std::cout << "Введіть транспорт для подорожі: ";
    std::cin >> Transport;
    vipTourist->myTrip.setTrasport(Transport);
    vipTourists << "Транспорт " << Transport << endl;

    vipTourist->setVipService("Преміум обслуговування");
    std::cout << "Ви обрали віп подорож, вас обслуговуюють за схемою " << vipTourist->getVipService() << endl;
    Viptourists.push_back(vipTourist);
    vipTourists.close();
}
void setCommonTourists() {
    Tourist* tourist = new Tourist();
    int prices[5] = { 1500, 2000, 2500, 3000, 3500 };
    ofstream Tourists("Tourists.txt", ios::app);
    string name;
    string surname;
    string email;
    string country;
    string Transport;
    int duration;
    int phone;
    int age;
    std::cout << "Введіть ім'я: ";
    std::cin >> name;
    tourist->setName(name);
    Tourists << "Ім'я " << name << endl;

    std::cout << "Введіть прізвище: ";
    std::cin >> surname;
    tourist->setSurname(surname);
    Tourists << "Прізвище " << surname << endl;

    std::cout << "Введіть вік: ";
    std::cin >> age;
    tourist->setAge(age);
    Tourists << "Вік " << age << endl;

    std::cout << "Введіть email: ";
    std::cin >> email;
    tourist->setEmail(email);
    Tourists << "Email " << email << endl;

    std::cout << "Введіть мобільний номер телефону: ";
    std::cin >> phone;
    tourist->setPhone(phone);
    Tourists << "Мобільний номер телефону " << phone << endl;

    std::cout << "Введіть країну для подорожі: ";
    std::cin >> country;
    tourist->myTrip.setCountry(country);
    Tourists << "Країна " << country << endl;

    std::cout << "Введіть термін подорожі: ";
    std::cin >> duration;
    tourist->myTrip.setDuration(duration);
    Tourists << "Термін подорожі " << duration << endl;

    std::cout << "Введіть транспорт для подорожі: ";
    std::cin >> Transport;
    tourist->myTrip.setTrasport(Transport);
    Tourists << "Транспорт " << Transport << endl;

    string hotel;
    std::cout << "Введіть тип готелю для вашої подорожі: ";
    std::cin >> hotel;
    tourist->myTrip.setHotel(hotel);
    Tourists << "Тип готелю " << hotel << endl;

    double price;
    std::cout << "Виберіть ціну подорожі ";
    for (int i = 0; i < 5; i++) {
        std::cout << prices[i] << " ";
    }
    std::cin >> price;
    tourist->myTrip.setPrice(price);
    Tourists << "Ціна " << price << endl;
    calculate(*tourist);
    calculate(phone, age);
    std::cout << "Ви обрали звичайну подорож. Ваш готель: " << tourist->myTrip.getHotel() << ". Ціна подорожі: " << tourist->myTrip.getPrice() << endl;
    tourists.push_back(tourist);
    Tourists.close();
}
void randomAgeArray() {
    srand(time(0));

    int size = rand() % 100 + 1;
    int* ages = new int[size];

    for (int i = 0; i < size; i++) {
        ages[i] = rand() % 100 + 1;
    }

    std::sort(ages, ages + size);

    for (int i = 0; i < size; i++) {
        std::cout << ages[i] << ' ';
    }
    std::cout << '\n';

    delete[] ages;
}
