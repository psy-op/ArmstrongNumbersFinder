#include <iostream>
using namespace std;

int main()
{
    int num1 = 2, num2 = 500, i, num, digit, sum;
    cout << "The Armstrong numbers are: " << endl;
    cout << "1\n2\n3\n4\n5\n6\n7\n8\n9" << endl;
    for (i = num1; i <= num2; i++)
    {
        sum = 0;
        num = i;
        for (; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
