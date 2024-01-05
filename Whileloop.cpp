#include <iostream>
using namespace std;

int main()
{
    int num1 = 2, num2 = 500, i, num, digit, sum;
    cout << "The Armstrong numbers are: " << endl;
    cout << "1\n2\n3\n4\n5\n6\n7\n8\n9" << endl;
    i = num1;
    while (i <= num2)
    {
        sum = 0;
        num = i;
        while (num > 0)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
            num /= 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
