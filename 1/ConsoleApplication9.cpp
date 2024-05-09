#include<iostream>
#include<assert.h>

using namespace std;
class top
{
private:
    char renk = 'k';
    double yaricap = 5;
public:
    top(char renk)
    {
        renk = 'k';
    }
    top(double r)
    {
        yaricap = r;
        
    }
    top(char x, double y)
    {
        renk = x;
        yaricap = y;
    }
    top() = default;

    char renkal() { return renk; }
    double yaricapal() { return yaricap; }
};
int main()
{
    top t1{};
    cout << t1.renkal() << " " << t1.yaricapal() << endl;

    top t2{ 'l' };
    cout << t2.renkal() << " " << t2.yaricapal() << endl;

    top t3{ 1.0};
    cout << t3.renkal() << " " << t3.yaricapal() << endl;

    top t4{ 'p', 13 };
    cout << t4.renkal() << " " << t4.yaricapal() << endl;

    //classroomda belirttiğiniz const char olayını denedim fakat yine hata aldım
}