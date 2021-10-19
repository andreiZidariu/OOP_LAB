#include <iostream>
#include <string>
#include <list>

using namespace std;

// 4.6.1
// 1.set Car license number by constructor, setter or by direct read
// 2. start Car
//3. add Person (name, address etc) to Car. Person to be added should have a name given by constructor, setter or by direct read


class Person{
private:
    string name;
    string address;
public:
    Person(string name,string address){
        this->name= name;
        this->address = address;
    }
    string getName(){
        return this->name;
    }
};


class Car {
private:
    Person *person;
    string licenseNumber;
public:
    void setLicenseNumber(string licenseNumber) {
        this->licenseNumber = licenseNumber;
    }
    void readLicenseNumber () {
        cout << "LicenseNumber:";
        cin >> this->licenseNumber;
    }
    string getLicenseNumber() {
        return this->licenseNumber;
    }
    void start(){
        cout<<" Car"<<this->licenseNumber<< "started"<<endl;
    }
    Car() {
    }
    Car( string licenseNumber) {
        this->licenseNumber = licenseNumber;
    }
    Car(string licenseNumber,Person *person){
        this->licenseNumber = licenseNumber;
        this->person =person;
    }
    Person* getPerson(){
        return this->person;
    }
};

int main() {
    Car *newCar;
    newCar = new Car("DJ111");
    cout<< newCar->getLicenseNumber()<<endl;
    cout<<endl;

    Car *newCar2 = new Car();
    newCar2->setLicenseNumber("DJJJJJ");
    cout<< newCar2->getLicenseNumber()<<endl;
    newCar2->start();

    Person *andrei;
    andrei = new Person("Andrei","Catargiu");
    Car *newCar3 = new Car("DJ10AVH",andrei);
    cout << newCar3->getLicenseNumber()<<endl;
    cout << newCar3->getPerson()->getName()<<endl;
}
