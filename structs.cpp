#include <iostream>
#include <csv.h>
using namespace std;

struct Smartphone {
    string name;
    int storageSpace;
    string color;
    float price;
};

struct Person {
    string name;
    int age;
    string race;
    Smartphone smartphone;
};

void funcSmartphone(Smartphone mysmartphone) {
    cout << "price: $" << mysmartphone.price << endl;
}

void printPersonInfo(Person person) {
    cout << "name: " << person.name << endl;
    cout << "age : " << person.age << endl;
    cout << "race : " << person.race << endl;
    cout << "smartphone name: " << person.smartphone.name << endl;
    cout << "smartphone storage-space: " << person.smartphone.storageSpace << endl;
    cout << "smartphone color: " << person.smartphone.color << endl;
    cout << "smartphone price: " << person.smartphone.price << endl;
}

int main() {
    string name = "iPhone 12";
    int storageSpace = 128;
    string color = "black";
    float price = 999.99;

    string name2 = "Samsung Galaxy S21 Ultra";
    int storageSpace2 = 256;
    string color2 = "gray";
    float price2 = 888.88;

    Smartphone smartphone;

    smartphone.name = "iPhone 12";
    smartphone.storageSpace = 256;
    smartphone.color = "purple";
    smartphone.price = 1299;

    Person person; 
    person.name = "Afolabi";
    person.age = 22;
    person.race = "White";
    person.smartphone.name = "Samsung Galaxy S21 Ultra";
    person.smartphone.storageSpace = 256;
    person.smartphone.color = "space gray";
    person.smartphone.price = 1199.99;

    printPersonInfo(person);

    cout << "\n\n\n" << endl;

    funcSmartphone(person.smartphone);
    
    return 0;
}