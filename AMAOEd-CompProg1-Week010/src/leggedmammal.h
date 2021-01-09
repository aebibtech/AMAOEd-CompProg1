#include <string>
using namespace std;
class LeggedMammal {
    public:
        /* Properties */
        int numberOfLegs;
        string kindOfFur;
        bool tail;
        /* Methods */
        LeggedMammal(int l, string f, bool t);
        int getNumberOfLegs();
        string getKindOfFur();
        bool withTail();


};

LeggedMammal::LeggedMammal(int nLegs, string kFur, bool wTail) {
    this->numberOfLegs = nLegs;
    this->kindOfFur = kFur;
    this->tail = wTail;
}

int LeggedMammal::getNumberOfLegs() {
    return this->numberOfLegs;
}

string LeggedMammal::getKindOfFur() {
    return this->kindOfFur;
}

bool LeggedMammal::withTail() {
    return this->tail;
}
