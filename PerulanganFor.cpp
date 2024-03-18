#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];


    for(i = 0; i < 5; i++)
    {
        cout << i << " : " << "Fadil" << endl;
    }
    
    for (i = 0; i < 5; i++)
    {
        cout << "Masukkan bilangan = ";
        cin >> arr[i];
    }

    for(i = 5; i < 5; i++)
    {
        cout << "Nama ke - " << i << arr[i] << endl;
    }

    
}
