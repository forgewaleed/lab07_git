#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
    
}

int main()
{
    int input;
    cout << "Enter N: ";
    cin >> input;

    fact ( input ); //not printing solution

    cout << fact ( input ) << endl;


}