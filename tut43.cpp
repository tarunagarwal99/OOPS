#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int n)
{
    roll_number = n;
}
void student::get_roll_number()
{
    cout << "your roll number is:" << roll_number << endl;
}
class marks : public student
{
protected:
    float physics_marks;
    float maths_marks;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void marks::set_marks(float m1, float m2)
{
    physics_marks = m1;
    maths_marks = m2;
}
void marks::get_marks()
{
    cout << "your marks obtained in physics subject are:" << physics_marks << endl;
    cout << "your marks obtained in maths subject are:" << maths_marks << endl;
}
class result : public marks
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        cout << "you got percenatge in the above subject is:" << (maths_marks + physics_marks) / 2 << "%" << endl;
    }
};

int main()
{
    result rs;
    rs.set_roll_number(543);
    rs.set_marks(54, 50);
    rs.display();

    return 0;
}