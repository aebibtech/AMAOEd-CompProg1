#include <string>
class Person {
    private:
        /* Properties */
        std::string name, address, gender, occupation;
        int age;
    public:
        Person(std::string name, std::string address, std::string gender, int age, std::string occupation);
        /* Accessors & Mutators */
        std::string getName(); void setName(std::string name);
        std::string getAddress(); void setAddress(std::string address);
        std::string getGender(); void setGender(std::string gender);
        int getAge(); void setAge(int age);
        std::string getOccupation(); void setOccupation(std::string occupation);
};
Person::Person(std::string name, std::string address, std::string gender, int age, std::string occupation) {
    this->name = name;
    this->address = address;
    this->gender = gender;
    this->age = age;
    this->occupation = occupation;
}
/* Accessors */
std::string Person::getName() { return this->name; }
std::string Person::getAddress() { return this->address; }
std::string Person::getGender() { return this->gender; }
int Person::getAge() { return this->age; }
std::string Person::getOccupation() { return this->occupation; }
/* Mutators */
void Person::setName(std::string name) { this->name = name; }
void Person::setAddress(std::string address) { this->address = address; }
void Person::setGender(std::string gender) { this->gender = gender; }
void Person::setAge(int age) { this->age = age; }
void Person::setOccupation(std::string occupation) { this->occupation = occupation; }
