#include <string>
using namespace std;
class Person {
    public:
        /* Properties */
        string name, address, gender, occupation;
        int age;
        /* Methods */
        Person(string name, string address, string gender, int age, string occupation);
        string getName();
        string getAddress();
        string getGender();
        int getAge();
        string getOccupation();
};
Person::Person(string name, string address, string gender, int age, string occupation) {
    this->name = name;
    this->address = address;
    this->gender = gender;
    this->age = age;
    this->occupation = occupation;
}
string Person::getName() {
    return this->name;
}
string Person::getAddress() {
    return this->address;
}
string Person::getGender() {
    return this->gender;
}
int Person::getAge() {
    return this->age;
}
string Person::getOccupation() {
    return this->occupation;
}
