#include <iostream>
using namespace std;

bool isPrime(int e)
{
    if (e <= 1)
    {
        return false;
    }

    for (int i =2; i<e; i++)
    {
        if(e%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    float sum=0.0;
    int c=0;
    int e;
    cout<<"type a number"<<endl;
    cin>>e;

    for (int i=1; i<e; i++)
    {
        if (isPrime(i))
        {
            sum+=i;
            c+=1;
        }
    }

    cout << "The sum of Prime numbers below " << e << " is " << sum <<endl;
    float avg=sum/c;
    cout<<"The average of the prime numbers is "<<avg<<endl;
}
