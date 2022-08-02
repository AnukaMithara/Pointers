#include <iostream>
using namespace std;
int main()
{
int A,B,*a,*b;
cout<<"Enter the first number :";
    cin>>A;
    cout<<"Enter the second number :";
    cin>>B;

a= &A;
b = &B;

cout<<"Addition is "<< *a + *b <<endl;

return 0;
}
