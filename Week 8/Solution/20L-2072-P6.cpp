#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    const int arraysize = 13;

    int seed;
    cout << "Enter Seed Number " << endl;
    cin >> seed;

    int counter[13]{}, sum = 0;
    for (int i = 0; i < 13; i++) {
        counter[i] = 0;
    }

    int dice1,dice2;

    for (int roll1 = 0; roll1 <= 36000; roll1++) {
        dice1 = 1 + rand() % 6;
        dice2 = 1 + rand() % 6;
        counter[dice1 + dice2]++;
    }

    cout << "sum of Faces" << setw(13) << "Frequency" << endl;

    for (int side = seed; side < arraysize; side++)
    {
        cout << setw(7) << side << setw(13) << counter[side] << endl;
        sum += counter[side];
    }

    cout << "sum: " << sum << endl;

    system("Pause");
    return 0;
}