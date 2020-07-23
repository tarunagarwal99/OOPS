#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void get_roll_no()
    {
        cout << "your roll_no is:" << roll_no << endl;
    }
};
class test :  virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float r1, float r2)
    {
        maths = r1;
        physics = r2;
    }
    void get_marks()
    {
        cout << "you marks is:"
             << "maths:" << maths << endl
             << "physics:" << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "the score they obtained is:" << endl;
    }
};
class result : public sports, public test
{
    float total;

public:
    void display()
    {
        total = physics + maths + score;
        get_roll_no();
        get_marks();
        get_score();
        cout << "your result is:" << total << endl;
    }
};

int main()
{
    result rs;
    rs.set_roll_no(4300);
    rs.set_marks(43.5, 45.7);
    rs.set_score(5);
    rs.display();
    return 0;
}