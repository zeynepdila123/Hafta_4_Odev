#include <iostream>

using namespace std;

int main()
{
    int sayi;
    cout <<"Sayi girin: ";
    cin >> sayi;

    if(sayi>10)
    {
        sayi -= 10;
        cout <<sayi<< endl;
    }
    else
    {
        sayi += 10;
        cout <<sayi<< endl;
    }
    return 0;
}
