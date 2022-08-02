#include <iostream>
using namespace std;

int* change(int amount)
{
static int A[6];
A[0] = amount/100;
amount %= 100;
A[1] = amount/50;
amount %= 50;
A[2] = amount/20;
amount %= 20;
A[3] = amount/10;
amount %= 10;
A[4] = amount/5;
amount %= 5;
A[5] = amount;
return A;
}

int main()
{
int amount,*result;
cout<<"Enter the amount of money: ";
cin>>amount;
result = change(amount);
cout <<amount<<" has "<<result[0]<<" hundreds, "<<result[1]<<" fifties, ";
cout <<result[2]<<" twenties, "<<result[3]<<" tens, ";
cout <<result[4]<<" fives, "<<result[5]<<" ones."<<endl;
return 0;
}
