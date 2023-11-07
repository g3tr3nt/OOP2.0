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
    std::cout << "������ ��'�: ";
    std::cin >> name;
    vipTourist->setName(name);
    vipTourists << "��'� " << name << endl;

    std::cout << "������ �������: ";
    std::cin >> surname;
    vipTourist->setSurname(surname);
    vipTourists << "������� " << surname << endl;

    std::cout << "������ ��: ";
    std::cin >> age;
    vipTourist->setAge(age);
    vipTourists << "³� " << age << endl;

    std::cout << "������ email: ";
    std::cin >> email;
    vipTourist->setEmail(email);
    vipTourists << "email " << email << endl;

    std::cout << "������ �������� ����� ��������: ";
    std::cin >> phone;
    vipTourist->setPhone(phone);
    vipTourists << "�������� ����� �������� " << phone << endl;

    std::cout << "������ ����� ��� �������: ";
    std::cin >> country;
    vipTourist->myTrip.setCountry(country);
    vipTourists << "����� " << country << endl;

    std::cout << "������ ����� �������: ";
    std::cin >> duration;
    vipTourist->myTrip.setDuration(duration);
    vipTourists << "����� ������� " << duration << endl;

    std::cout << "������ ��������� ��� �������: ";
    std::cin >> Transport;
    vipTourist->myTrip.setTrasport(Transport);
    vipTourists << "��������� " << Transport << endl;

    vipTourist->setVipService("������ ��������������");
    std::cout << "�� ������ �� �������, ��� ������������� �� ������ " << vipTourist->getVipService() << endl;
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
    std::cout << "������ ��'�: ";
    std::cin >> name;
    tourist->setName(name);
    Tourists << "��'� " << name << endl;

    std::cout << "������ �������: ";
    std::cin >> surname;
    tourist->setSurname(surname);
    Tourists << "������� " << surname << endl;

    std::cout << "������ ��: ";
    std::cin >> age;
    tourist->setAge(age);
    Tourists << "³� " << age << endl;

    std::cout << "������ email: ";
    std::cin >> email;
    tourist->setEmail(email);
    Tourists << "Email " << email << endl;

    std::cout << "������ �������� ����� ��������: ";
    std::cin >> phone;
    tourist->setPhone(phone);
    Tourists << "�������� ����� �������� " << phone << endl;

    std::cout << "������ ����� ��� �������: ";
    std::cin >> country;
    tourist->myTrip.setCountry(country);
    Tourists << "����� " << country << endl;

    std::cout << "������ ����� �������: ";
    std::cin >> duration;
    tourist->myTrip.setDuration(duration);
    Tourists << "����� ������� " << duration << endl;

    std::cout << "������ ��������� ��� �������: ";
    std::cin >> Transport;
    tourist->myTrip.setTrasport(Transport);
    Tourists << "��������� " << Transport << endl;

    string hotel;
    std::cout << "������ ��� ������ ��� ���� �������: ";
    std::cin >> hotel;
    tourist->myTrip.setHotel(hotel);
    Tourists << "��� ������ " << hotel << endl;

    double price;
    std::cout << "������� ���� ������� ";
    for (int i = 0; i < 5; i++) {
        std::cout << prices[i] << " ";
    }
    std::cin >> price;
    tourist->myTrip.setPrice(price);
    Tourists << "ֳ�� " << price << endl;
    calculate(*tourist);
    calculate(phone, age);
    std::cout << "�� ������ �������� �������. ��� ������: " << tourist->myTrip.getHotel() << ". ֳ�� �������: " << tourist->myTrip.getPrice() << endl;
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
