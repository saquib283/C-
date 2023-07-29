#include <iostream>
using namespace std;
class student
{
    int studentID;
    static int count;

public:
    void getdata(void);
    void setdata(void);
};

void student::setdata(void)
{
    cout << "Enter Your Student-ID :" << endl;
    cin >> studentID;
    count++;
}
void student::getdata(void)
{
    cout << "Student ID-is " << studentID << " and Count is " << count<<endl;
}
int student::count;
int main()
{
    student rehan,harry;
    rehan.setdata();
    rehan.getdata();
    harry.setdata();
    harry.getdata();

    return 0;
}