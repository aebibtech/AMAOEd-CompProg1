#include <string>
using namespace std;
class Polygon {
    public:
        /* Properties */
        string name, color;
        int numSides;
        /* Methods */
        Polygon(string name, int numSides, string color);
        string getName();
        int getNumberOfSides();
        string getColor();
};

Polygon::Polygon(string name, int numSides, string color) {
    this->name = name;
    this->numSides = numSides;
    this->color = color;
}

string Polygon::getName() {
    return this->name;
}

int Polygon::getNumberOfSides() {
    return this->numSides;
}

string Polygon::getColor() {
    return this->color;
}
