#include <iostream>

using namespace std;

int main()
{
    int sayi;
    cout << "Sayi girin: ";
    cin >> sayi;

    if(sayi%2 == 0)
    {
        if(sayi%4 == 0)
            cout <<"Sayi 4'e bolunur" << endl;

        else
            cout <<"Sayi 4'e bolunmez" << endl;

    }
    if(sayi%2 != 0)
    {
        if(sayi%3 == 0)
            cout <<"Sayi 3'e bolunur" << endl;

        else
            cout <<"Sayi 3'e bolunmez" << endl;

    }
    return 0;
}
