#include <string>
class Payslip {
    private:
        std::string name = "";
        char payGrade = 'A';
        int overTimeHours = 0, basicSalary = 0;
        double overTimePay = 0, grossPay = 0, netPay = 0, withHoldingTax = 0, taxRate = 0;
    public:
        /* Accessors and Mutators */
        std::string getName() {
            return this->name;
        }

        void setName(std::string n) {
            this->name = n;
        }

        char getPayGrade() {
            return this->payGrade;
        }

        void setPayGrade(char pg) {
            this->payGrade = pg;
        }

        int getOverTimeHours() {
            return this->overTimeHours;
        }

        void setOverTimeHours(int ot) {
            this->overTimeHours = ot;
        }

        int getBasicSalary() {
            return this->basicSalary;
        }

        void setBasicSalary(int bs) {
            this->basicSalary = bs;
        }

        double getOverTimePay() {
            return this->overTimePay;
        }

        void setOverTimePay(double otp) {
            this->overTimePay = otp;
        }

        double getGrossPay() {
            return this->grossPay;
        }

        void setGrossPay(double gp) {
            this->grossPay = gp;
        }

        double getNetPay() {
            return this->netPay;
        }

        void setNetPay(double np) {
            this->netPay = np;
        }

        double getWithHoldingTax() {
            return this->withHoldingTax;
        }

        void setWithHoldingTax(double wht) {
            this->withHoldingTax = wht;
        }

        double getTaxRate() { return this->taxRate; } void setTaxRate(double tr) { this->taxRate = tr; }

        void determinePayGradeAndTaxRate() {
            if(this->getBasicSalary() >= 10000 && this->getBasicSalary() < 15000) {
                this->setPayGrade('A');
                this->setTaxRate(0.10);
            } else if( this->getBasicSalary() >= 15000 && this->getBasicSalary() < 20000) {
                this->setPayGrade('B');
                this->setTaxRate(0.10);
            } else if( this->getBasicSalary() >= 20000 && this->getBasicSalary() < 25000) {
                this->setPayGrade('A');
                this->setTaxRate(0.15);
            } else if( this->getBasicSalary() >= 25000 && this->getBasicSalary() < 30000) {
                this->setPayGrade('B');
                this->setTaxRate(0.15);
            } else if( this->getBasicSalary() >= 30000 && this->getBasicSalary() < 35000) {
                this->setPayGrade('A');
                this->setTaxRate(0.20);
            } else if( this->getBasicSalary() >= 35000 && this->getBasicSalary() < 40000) {
                this->setPayGrade('B');
                this->setTaxRate(0.20);
            } else if( this->getBasicSalary() >= 40000 && this->getBasicSalary() < 45000) {
                this->setPayGrade('A');
                this->setTaxRate(0.25);
            } else if( this->getBasicSalary() >= 45000 && this->getBasicSalary() < 50000) {
                this->setPayGrade('B');
                this->setTaxRate(0.25);
            } else if( this->getBasicSalary() >= 50000 && this->getBasicSalary() < 55000) {
                this->setPayGrade('A');
                this->setTaxRate(0.30);
            } else if( this->getBasicSalary() >= 55000 ) {
                this->setPayGrade('B');
                this->setTaxRate(0.30);
            } else {
                this->setPayGrade('A');
                this->setTaxRate(0.10);
            }
        }

        void computePay() {
            double sss = 500.00, pagIbig = 200.00, philHealth = 100.00;
            this->setOverTimePay(this->getOverTimeHours() * this->getBasicSalary() * 0.01);
            this->setGrossPay(this->getBasicSalary() + this->getOverTimePay());
            this->setWithHoldingTax(this->getBasicSalary() * this->getTaxRate());
            this->setNetPay(this->getGrossPay() - this->getWithHoldingTax() - (sss + pagIbig + philHealth));
        }
};
