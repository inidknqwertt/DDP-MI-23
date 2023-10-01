#include <iostream>

using namespace std;

int main()
{
    char ipk;
    cin >> ipk;

    if (ipk == 'A')
    {
        cout << "Nilai kamu 100" << endl;
    }
    else if (ipk == 'B')
    {
        cout << "Nilai kamu 76 - 99" << endl;
    }
    else if (ipk == 'C')
    {
        cout << "Nilai kamu dibawah 76 :(" << endl;
    }
    else
    {
        cout << "Nilai Invalid" << endl;
    }

    return 0;
}