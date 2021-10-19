#include <iostream>
#include <string>
#include <list>

using namespace std;

// 4.6.1
// 1.set Car license number by constructor, setter or by direct read
// 2. start Car
class Car {
private:
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
}
