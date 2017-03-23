#include <iostream>
#include <string>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()

{
    string str;
    const char *pc;
    char txtNum[10];

    cout << "Una cadena ";
    cin >> str;

    cout << "len:" << str.length() << endl;

    pc = str.c_str();
    int nDigit = 0;
    for (int i = 0; i <=str.length(); i++ ) {
         if ( '1' <= pc[i] && pc[i] <= '9') {
             cout << pc[i] << endl;
             txtNum[nDigit] = pc[i];
         }

    }

    /*
    char * cadena = NULL;
    string a;

    printf( "ingresa algo");
    getline (cin, a);

    cadena = (char *)malloc (a.length() * sizeof(char));

    strcpy( cadena, a.c_str());
    int len = strlen(cadena);
    char * resultado= NULL;

    printf(cadena);

    for (int i=0; i<len; i++){


        if((isdigit(cadena[i])!= 0)){
           cout << cadena << endl;
           resultado[i]= cadena[i];

           cout << resultado << endl;
           }

    }
 cout << resultado << endl;

free(cadena);
    return 0;

    */
}
