#include <string>
class Payslip {
    private:
        std::string name, payGrade;
        int overTimeHours;
        double basicSalary, overTimePay, grossPay, netPay, withHoldingTax, taxRate;
    public:
        Payslip(std::string name, double basicSalary, int overTimeHours);
        /* Accessors and Mutators */
        std::string getName(); void setName(std::string name);
        std::string getPayGrade(); void setPayGrade(std::string payGrade);
        int getOverTimeHours(); void setOverTimeHours(int overTimeHours);
        double getBasicSalary(); void setBasicSalary(double basicSalary);
        double getOverTimePay(); void setOverTimePay(double overTimePay);
        double getGrossPay(); void setGrossPay(double grossPay);
        double getNetPay(); void setNetPay(double netPay);
        double getWithHoldingTax(); void setWithHoldingTax(double withHoldingTax);
        double getTaxRate(); void setTaxRate(double taxRate);
        void determinePayGradeAndTaxRate();
        void computePay();
};
Payslip::Payslip(std::string name, double basicSalary, int overTimeHours) {
    this->name = name;
    this->basicSalary = basicSalary;
    this->overTimeHours = overTimeHours;
}

/* Accessors and Mutators */
std::string Payslip::getName() { return this->name; }
void Payslip::setName(std::string name) { this->name = name; }

std::string Payslip::getPayGrade() { return this->payGrade; }
void Payslip::setPayGrade(std::string payGrade) { this->payGrade = payGrade; }

int Payslip::getOverTimeHours() { return this->overTimeHours; }
void Payslip::setOverTimeHours(int overTimeHours) { this->overTimeHours = overTimeHours; }

double Payslip::getBasicSalary() { return this->basicSalary; }
void Payslip::setBasicSalary(double basicSalary) { this->basicSalary = basicSalary; }

double Payslip::getOverTimePay() { return this->overTimePay; }
void Payslip::setOverTimePay(double overTimePay) { this->overTimePay = overTimePay; }

double Payslip::getGrossPay() { return this->grossPay; }
void Payslip::setGrossPay(double grossPay) { this->grossPay = grossPay; }

double Payslip::getNetPay() { return this->netPay; }
void Payslip::setNetPay(double netPay) { this->netPay = netPay; }

double Payslip::getWithHoldingTax() { return this->withHoldingTax; }
void Payslip::setWithHoldingTax(double withHoldingTax) { this->withHoldingTax = withHoldingTax; }

double Payslip::getTaxRate() { return this->taxRate; }
void Payslip::setTaxRate(double taxRate) { this->taxRate = taxRate; }

void Payslip::determinePayGradeAndTaxRate() {
    if(this->getBasicSalary() >= 10000 && this->getBasicSalary() < 15000) {
        this->setPayGrade("A");
        this->setTaxRate(0.10);
    } else if(this->getBasicSalary() >= 15000 && this->getBasicSalary() < 20000) {
        this->setPayGrade("B");
        this->setTaxRate(0.10);
    } else if(this->getBasicSalary() >= 20000 && this->getBasicSalary() < 25000) {
        this->setPayGrade("A");
        this->setTaxRate(0.15);
    } else if(this->getBasicSalary() >= 25000 && this->getBasicSalary() < 30000) {
        this->setPayGrade("B");
        this->setTaxRate(0.15);
    } else if(this->getBasicSalary() >= 30000 && this->getBasicSalary() < 35000) {
        this->setPayGrade("A");
        this->setTaxRate(0.20);
    } else if(this->getBasicSalary() >= 35000 && this->getBasicSalary() < 40000) {
        this->setPayGrade("B");
        this->setTaxRate(0.20);
    } else if(this->getBasicSalary() >= 40000 && this->getBasicSalary() < 45000) {
        this->setPayGrade("A");
        this->setTaxRate(0.25);
    } else if(this->getBasicSalary() >= 45000 && this->getBasicSalary() < 50000) {
        this->setPayGrade("B");
        this->setTaxRate(0.25);
    } else if(this->getBasicSalary() >= 50000 && this->getBasicSalary() < 55000) {
        this->setPayGrade("A");
        this->setTaxRate(0.30);
    } else if(this->getBasicSalary() >= 55000) {
        this->setPayGrade("B");
        this->setTaxRate(0.30);
    } else {
        // Nothing to do.
    }
}

void Payslip::computePay() {
    double sss = 500.00, pagibig = 200.00, philHealth = 100.00;
    this->setOverTimePay( this->getOverTimeHours() * 0.01 * this->getBasicSalary() );
    this->setGrossPay( this->getBasicSalary() + this->getOverTimePay() );
    this->setWithHoldingTax( this->getGrossPay() * this->getTaxRate() );
    this->setNetPay( this->getGrossPay() - this->getWithHoldingTax() - (sss + pagibig + philHealth) );
}
