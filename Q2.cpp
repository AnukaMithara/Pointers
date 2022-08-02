#include <iostream>

using namespace std;

int namecount(char *strng)
{
	int c = 0;
    while ((*strng) != '\0') {
        c++;
		strng++;
	}
	return c;
}


int main()
{
char name[] = "name";
cout<<"Enter the name of your home town : ";
cin>>name;
cout << "Length of " << name<<" is "<< namecount(name);
return 0;
}
