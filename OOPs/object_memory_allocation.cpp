#include <iostream>
using namespace std;
class shop
{
    int price[100];
    int id[100];
    int count;

public:
    void initcounter(void)
    {
        count = 0;
    };
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
    cout << "Enter item-iD : ";
    cin >> id[count];
    cout << "Enter item-Price : ";
    cin >> price[count];
    count++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << " Price of ID " << id[i] << "  is " <<  price[i] ;
    }
}

int main()
{
    shop rehan;
    rehan.initcounter();
    rehan.setPrice();
    rehan.setPrice();
    rehan.displayPrice();
    return 0;
}