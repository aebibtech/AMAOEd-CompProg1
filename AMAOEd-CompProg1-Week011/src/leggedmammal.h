#include <string>
class LeggedMammal {
    private:
        int numberOfLegs;
        std::string kindOfFur;
        bool withTail;
    public:
        LeggedMammal(int l, std::string f, bool t);
        /* Accessors */
        int getNumberOfLegs();
        std::string getKindOfFur();
        bool getWithTail();
        /* Mutators */
        void setNumberOfLegs(int legs);
        void setKindOfFur(std::string kindOfFur);
        void setWithTail(bool withTail);

};

LeggedMammal::LeggedMammal(int nLegs, std::string kFur, bool wTail) {
    this->numberOfLegs = nLegs;
    this->kindOfFur = kFur;
    this->withTail = wTail;
}
/* Accessors */
int LeggedMammal::getNumberOfLegs() { return this->numberOfLegs; }
std::string LeggedMammal::getKindOfFur() { return this->kindOfFur; }
bool LeggedMammal::getWithTail() { return this->withTail; }
/* Mutators */
void LeggedMammal::setNumberOfLegs(int legs){ this->numberOfLegs = legs; }
void LeggedMammal::setKindOfFur(std::string kindOfFur){ this->kindOfFur = kindOfFur; }
void LeggedMammal::setWithTail(bool withTail){ this->withTail = withTail; }
