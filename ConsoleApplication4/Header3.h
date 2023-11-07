#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>  
#include <cstdlib>    
#include <ctime>  

using namespace std;



class Trip {
private:
    const string& country;
    const int& duration;
    const double& price;
    const string& hotel;
    const string& transport;

public:
    Trip(const string& country = "", const int& duration = 0, double price = 0.0, const string& hotel = "", const string& transport = "")
        : country(country), duration(duration), price(price), hotel(hotel), transport(transport){}


    void setCountry(string country) { this->country == country; }
    void setDuration(int duration) { this->duration == duration; }
    void setDuration(double duration) { this->duration == duration; }
    void setPrice(double price) { this->price == price; }
    void setHotel(string hotel) { this->hotel == hotel; }
    void setTrasport(string transport) { this->transport == transport; }



    string getTransport() { return transport; }
    string getCountry() { return country; }
    int getDuration() { return duration; }
    double getPrice() { return price; }
    string getHotel() { return hotel; }
    Trip(const Trip& other)
        : country(other.country), duration(other.duration), price(other.price), hotel(other.hotel), transport(other.transport) {}
};

class Tourist {
private:
    string name;
    string surname;
    int age;
    string email;
    int phone;

public:


    Trip* trip;

    
    vector<Trip> trips;

 
    Trip myTrip;


    Tourist() : name(""), surname(""), age(0), email(""), phone(0), trip(nullptr), myTrip(Trip()) { std::cout << "Entering Tourist block" << std::endl; }

    
    void setName(string name) { this->name = name; }
    void setSurname(string surname) { this->surname = surname; }
    void setAge(int age) { this->age = age; }
    void setEmail(string email) { this->email = email; }
    void setPhone(int phone) { this->phone = phone; }
    void setPhone(double phone) { this->phone = phone; }

    string getName() { return name; }
    string getSurname() { return surname; }
    int getAge() { return age; }
    string getEmail() { return email; }
    int getPhone() { return phone; }
    ~Tourist() {
        std::cout << "Exiting Tourist block" << std::endl;
    }
};

class VipTourist : public Tourist {
private:
    string vipService;

public:
    VipTourist() : Tourist(), vipService("") {}

    void setVipService(string service) {
        vipService = service;
    }

    string getVipService() {
        return vipService;
    }
};

void calculate(Tourist& tourist) {
    double dailyCost = tourist.getPhone() / tourist.getAge();
    std::cout << "Результать ділення номеру телефона на вік: " << dailyCost << std::endl;
}
void calculate(int phone, int age) {
    
    double dailyCost = phone / age;

    std::cout << "Результат ділення номеру телефона на вік: " << dailyCost << std::endl;
}

Tourist createTourist(const string& name, const string& surname, int age, const string& email, int phone) {
    Tourist tourist;
    tourist.setName(name);
    tourist.setSurname(surname);
    tourist.setAge(age);
    tourist.setEmail(email);
    tourist.setPhone(phone);
    return tourist;
}
