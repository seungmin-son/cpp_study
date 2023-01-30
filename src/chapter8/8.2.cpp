#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Friend
{
    string m_name;
    string m_address;
    int m_age;
    double m_height;
    double m_weight;
public: //access specifier
    void setdata(const string& name_input, const string& address_input, const int& age_input)
    {
        m_name = name_input;
        m_address = address_input;
        m_age = age_input;

    }

    int printage()
    {
        return m_age;
    }
    
    void copyFrom(const Friend& original)
    {
        m_name = original.m_name;
        m_address = original.m_address;
        m_age = original.m_age;
        m_height = original.m_height;
        m_weight = original.m_weight;

    }
};

int main()
{
    Friend CHOI;
    CHOI.setdata("HOW","ANSAN",25);
    cout << CHOI.printage() << endl;

    // CHOI.height = 200.0;
    // CHOI.weight = 100.0;
    Friend copy;
    copy.copyFrom(CHOI);

    return 0;
}