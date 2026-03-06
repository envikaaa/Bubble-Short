#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang array : ";
        cin >> n;

        if (n <= 20)
        {
            break
        } 
        else 
        {
            cout << error : Maksimal input array adalah 20/n";
        
        }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;
    
    for (int i = 0; 1< n i++) // i++ / i + 1
    {
        cout << "masukkan nilai ke-" << 1 + 1 << " : ";
        cin << a[i];
    }
    void display() 
    {
    cout << endl;
    cout << "==========================" << endl;
    cout << "Elemen array telah terurut" << endl;
    cout << "==========================" << endl;
    }

    {
        for (int j = 0; j <= n - 1 - pass; j++)
        {
            if (a[j]) > a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
    cout << "pass ke-" << pass << ":/t";
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << "/t";
    }


    }
}