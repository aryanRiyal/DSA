class Fraction{
    private:
        int numerator;
        int denominator;

    public:
        Fraction() {

        }

        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }

        int getNumerator() const {
            return numerator;
        }

        int getDenominator() const {
            return denominator;
        }

        void setNumerator(int n) {
            numerator = n;
        }

        void setDenominator(int d) {
            denominator = d;
        }

        void print() const {
            cout<<numerator<<"/"<<denominator<<endl;
        }

        void simplify() {
            int gcd = 1;
            int j = min(this->numerator, this->denominator);
            for(int i = 1; i<=j; i++){
                if(this->numerator % i == 0 && this->denominator%i== 0) {
                    gcd = i;
                }
            }
            this->numerator = this->numerator/gcd;
            this->denominator = this->denominator/gcd;
        }

        Fraction add(Fraction const &f2) {
            int lcm = denominator * f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x * numerator + (y * f2.numerator);
            Fraction fNew( num, lcm);
            fNew.simplify();
            return fNew;
        }

        Fraction multiply(Fraction const &f2) {
            int num = numerator * f2.numerator;
            int denom = denominator * f2.denominator;
            Fraction fNew( num, denom);
            fNew.simplify();
            return fNew;
        }

        Fraction operator+(Fraction const &f2) const {            //First Argument is in 'this' keyword and second argument is in function argument
            int lcm = denominator * f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x * numerator + (y * f2.numerator);
            Fraction fNew( num, lcm);
            fNew.simplify();
            return fNew;
        }

        //Pre-increment
        Fraction& operator++() {                                   //Fraction& because we are Returning by reference
            numerator = numerator + denominator;
            simplify();
            return *this;
        }

        //Post-increment
        Fraction operator++(int) {
            Fraction fNew(numerator, denominator);
            numerator = numerator + denominator;
            simplify();
            fNew.simplify();
            return fNew;
        }

        Fraction& operator+=(Fraction const &f2) {
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = x * numerator + (y * f2.numerator);

            numerator = num;
            denominator = lcm;
            simplify();
            return *this;
        }

        Fraction operator*(Fraction const &f2) const {
            int num = numerator * f2.numerator;
            int denom = denominator * f2.denominator;
            Fraction fNew( num, denom);
            fNew.simplify();
            return fNew;
        }

        bool operator==(Fraction const &f2) const {
            return (numerator == f2.numerator && denominator == f2.denominator);
        }
};
