#include <iostream>
using namespace std;

  
//Structure Definition or Structure Variable
typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} emp; //emp is typedef of employee;

int main()
{  //Structure Call or Variable Making;
    emp rohan;   //Type def of employee as emp;
    struct employee rehan;
    struct employee Harry;
    struct employee shubham; // Making variable from defined structure


    rehan.salary=500000;   
    rehan.eID = 10;     //Assigning Value to the variable
    rehan.favChar = 'D';

    cout<< rehan.salary<<endl;   
    cout<<rehan.favChar<<endl;
    cout<<rehan.eID<<endl;



    return 0;
}


