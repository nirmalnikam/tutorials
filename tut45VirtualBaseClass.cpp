#include <iostream>
using namespace std;

/*student-->test
student-->sports
test-->result
sports-->result
*/

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is " << endl
             << "maths " << maths << endl
             << "physics " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc) 
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "your pt score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is " << total << endl;
    }
};

int main()
{
    Result nirmal;
    nirmal.set_marks(95.3, 96.3);
    nirmal.set_number(93);
    nirmal.set_score(100);
    nirmal.display();

    return 0;
}