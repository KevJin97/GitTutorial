#include <iostream>
using namespace std;

int fib (int n);

int main ()
{
    int n, answer;
    string ans;
    int x = 0;
    do
    {
    cout << "Enter number to find: ";
    cin >> n;

    cout << "\n\n";
    answer = fib(n);

    if (n == 1)
    {
        cout << answer << " is the " << n << "st Fibonacci number\n";
    }
    else if ( x == 2)
    {
        cout << answer << " is the " << n << "nd Fibonacci number\n";
    }
    else if (x == 3)
    {
        cout << answer << " is the " << n << "rd Fibonacci number\n";
    }
    else
    {
        cout << answer << " is the " << n << "th Fibonacci number\n";
    }

    cout << "Repeat? (y/n):";
    cin >> ans;
    cout << "\n\n" << endl;
    if (ans == "n")
    {
        x = 1;
        cout << "\n\n" << endl;
    }

    } while (x==0);
    return 0;
}

int fib (int n)
{
    cout << "Processing fib(" << n << ")...";
        if (n < 3)
        {
            cout << "Return 1!\n";
            return (1);
        }
        else
        {
            cout << "Call fib(" << n-2 << ") and fib (" << n-1 << ").\n";
            return(fib(n-2) + fib (n-1));
        }
}
