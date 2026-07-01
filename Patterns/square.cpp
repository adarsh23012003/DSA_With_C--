#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            // cout << j << " ";

            cout << "* ";

            // cout << ch << " ";
            // ch++;

            // cout << num << " ";
            // num++;
        }
        cout << endl;
    }
    return 0;
}