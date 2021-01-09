#include <string>
#include "person.h"
class Student : public Person {
    private:
        std::string academicProgram, universityName;
        short yearLevel;
    public:
        Student(std::string name, std::string address, std::string gender, int age,
                std::string universityName, std::string academicProgram, short yearLevel);
        /* Accessors & Mutators */
        std::string getAcademicProgram(); void setAcademicProgram(std::string academicProgram);
        std::string getUniversityName(); void setUniversityName(std::string universityName);
        short getYearLevel(); void setYearLevel(short yearLevel);
};
/* Constructor */
Student::Student(std::string name, std::string address, std::string gender, int age,
std::string universityName, std::string academicProgram, short yearLevel) :
Person(name, address, gender, age, "Student") {
    this->universityName = universityName;
    this->academicProgram = academicProgram;
    this->yearLevel = yearLevel;
}
/* Accessors & Mutators */
std::string Student::getAcademicProgram() { return this->academicProgram; }
void Student::setAcademicProgram(std::string academicProgram) {this->academicProgram = academicProgram; }

std::string Student::getUniversityName() { return this->universityName; }
void Student::setUniversityName(std::string universityName) { this->universityName = universityName; }

short Student::getYearLevel() { return this->yearLevel; }
void Student::setYearLevel(short yearLevel) { this->yearLevel = yearLevel; }
