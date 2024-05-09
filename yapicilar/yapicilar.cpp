#include<iostream>
#include<string>

using namespace std;
class top
{
private:
    double yaricap = 5;
    string  renk = "kirmizi";
public:
    top(string x, double y)

    {
        renk = x;
        yaricap = y;
    }
    top(string x)
    {
        renk = x;
    }
    top(double y) {
        yaricap = y;
    }
    top() = default;


    string renk_icin() {
        return renk;
    }
    double yaricap_icin() {
        return yaricap;
    }

};
int main()
{
    top b1{};
    cout << b1.renk_icin() << " " << b1.yaricap_icin() << endl;

    top b2{ "lacivert" };
    cout << b2.renk_icin() << " " << b2.yaricap_icin() << endl;

    top b3{ 23 };
    cout << b3.renk_icin() << " " << b3.yaricap_icin() << endl;

    top b4{ "murdum", 19 };
    cout << b4.renk_icin() << " " << b4.yaricap_icin() << endl;
}