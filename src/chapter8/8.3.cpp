#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Fraction
{
private:
    int m_numerator;   
    int m_denominator; 

public:
    // Fraction() // default constructor
    // {
    //      m_numerator = 0;
    //      m_denominator = 1;
    // }

    Fraction(const int& numerator = 0, const int& denominator=1)
    {
        m_numerator = numerator;
        m_denominator = denominator;
    }

    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
    double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};

int main()
{
    Fraction frac;
    cout << frac.getNumerator() << "/" << frac.getDenominator() << endl;
    // frac.m_denominator = 1;
    // frac.m_numerator = 0;


    return 0;
}   