/* I put each method in a single line because my screen has limited space. */
#include <string>
#include "leggedmammal.h"

class Dog : public LeggedMammal {
    private:
        std::string breed;
        int size;
        bool isRegistered;
    public:
        Dog(std::string breed, int size, bool isRegistered);
        /* Accessors */
        std::string getBreed();
        int getSize();
        bool getIsRegistered();
        /* Mutators */
        void setBreed(std::string breed);
        void setSize(int size);
        void setIsRegistered(bool isRegistered);
};

Dog::Dog(std::string breed, int size, bool isRegistered) : LeggedMammal(4, "Undercoat, Guard Hair, Whiskers", true) {
    this->breed = breed;
    this->size = size;
    this->isRegistered = isRegistered;
}
/* Accessors */
std::string Dog::getBreed() { return this->breed; }
int Dog::getSize() { return this->size; }
bool Dog::getIsRegistered() { return this->isRegistered; }

/* Mutators */
void Dog::setBreed(std::string breed) { this->breed = breed; }
void Dog::setSize(int size) { this->size = size; }
void Dog::setIsRegistered(bool isRegistered) { this->isRegistered = isRegistered; }
