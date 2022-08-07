#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }

    for (int i =2; i<x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    float sum=0.0;
    int count=0;
    int x;
    cout<<"type a number"<<endl;
    cin>>x;

    for (int i=1; i<x; i++)
    {
        if (isPrime(i))
        {
            sum+=i;
            count++;
        }
    }

    cout << "The sum of Prime numbers below " << x << " is " << sum <<endl;
    float average=sum/count;
    cout<<"The average of the prime numbers is "<<average<<endl;
}
/*Saviour Abla Kaledzi 1096242*/
