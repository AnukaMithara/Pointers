#include <iostream>
#include<cctype>

using namespace std;

int namecount(char *str)
{
	int c = 0;
    while ((*str) != '\0') {
        c++;
		str++;
	}
	return c;
}

int main(){
    char word0[100],word[100] ;
    int i, l,coun = 0;

    cout << "Enter your string : ";
    cin >> word;

    l = namecount(word);

    for(i=0;i < l ;i++){

         if (isupper(word[i]))
            word0[i] = word[i] + 32;

        else
            word0[i] = word[i];
    }
    for(i=0;i < l ;i++){

        if(word0[i] != word0[l-i-1]){
            coun = 1;
            break;
   }
}

    if (coun) {
        cout << " String is not palindrome" << endl;
    }
    else {
        cout << " String is palindrome" << endl;
    }

    return 0;
}
