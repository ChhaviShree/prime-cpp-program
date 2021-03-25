#include <iostream>
using namespace std;

int main()
{
    int n, i, count1 = 1, count2 = 1, count3 = 0, j;
    float sum = 0;
    cout << "Enter a number"<<"\n";
    cin >> n;
    for (i = 2; i <= n / 2; i++) 
    {
        count1 = 1;
        count2 = 1;
        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                count1= 0;
                j = i;
            }
        }
        for (j = 2; j < n - i; j++) 
        {
            if ((n - i) % j == 0) 
            {
               count2 = 0;
                j = n - i;
            }
        }
        if (count1== 1 && count2 == 1) 
        {
            cout << n << " = " << i << " + " << n - i << endl;
            count3= 1;
        }
    }
    if (count3 == 0) 
    {
        cout << n << "not possible" << endl;
    }
}
