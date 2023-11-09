#include<iostream>
#include<string>
using namespace std;


struct menuit {
    string menuitems;
    float price;
};


void show_menu() {
    cout << "1: Plain Egg          RS15.00"  << endl;
    cout << "2: Omlet              RS15.00"  << endl;
    cout << "3: Paratha            RS15.00"  << endl;
    cout << "4: French Toast       RS20.99"  << endl;
    cout << "5: Fruit Basket       RS120.49" << endl;
    cout << "6: Coffee             RS50.00"  << endl;
    cout << "7: Tea                RS20.00"  << endl;
    cout << "GST of 17% is applicable on all items" << endl;
}

void obtain_data(menuit  menu[], int temp[]) {

    int choice;
    int quantity;
    char to_continue;
    to_continue = 'y';

    menu[0].menuitems = "Plain Egg";
    menu[0].price = 15.00;

    menu[1].menuitems = "Omelet";
    menu[1].price = 15.00;

    menu[2].menuitems = "Paratha";
    menu[2].price = 12.00;

    menu[3].menuitems = "French Toast";
    menu[3].price = 20.99;

    menu[4].menuitems = "Fruit Basket";
    menu[4].price = 120.49;

    menu[5].menuitems = "Coffee";
    menu[5].price = 50.00;

    menu[6].menuitems = "Tea";
    menu[6].price = 20.00;

    while (to_continue != 'n') {

        cout << "Enter your choice :";
        cin >> choice;
        cout << "Enter the Quantity :";
        cin >> quantity;
        {
        if (choice == 1)
            temp[0] = temp[0] + quantity;

        if (choice == 2)
            temp[1] = temp[1] + quantity;

        if (choice == 3)
            temp[2] = temp[2] + quantity;

        if (choice == 4)
            temp[3] = temp[3] + quantity;

        if (choice == 5)
            temp[4] = temp[4] + quantity;

        if (choice == 6)
            temp[5] = temp[5] + quantity;

        if (choice == 7)
            temp[6] = temp[6] + quantity;

        if(choice>=8 || choice<=-1)
            cout << "Then Number Entered is Invalid" << endl;
    }
        cout << "To Add More Items in Cart Enter (y=yes) or (n=no) " << endl;
        cin >> to_continue;
    }
}
void total_price(menuit  menu[], int temp[]) {
  
    float price = 0;
    float tax;
    float total;

    for (int i = 0; i < 8; i++) {
        price = price + (menu[i].price * temp[i]);
    }
    
    tax = price * 0.17;
    total = price + tax;
        
    cout << "Total Cost =" << total << endl;


}

int main() {

    menuit menu[7];
    int temp[7] = { 0,0,0,0,0,0,0 };
    show_menu();
    obtain_data(menu, temp);
    total_price(menu, temp);
 
    system("pause");
    return 0;
}