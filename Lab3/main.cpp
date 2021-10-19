#include <iostream>
#include <string>
#include <list>

using namespace std;

// 4.6.1
// set Car license number by constructor, setter or by direct read
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
    cout<< newCar2->getLicenseNumber();
}
