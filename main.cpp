#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string name; int number;

int main()
{
    cout<<"This program asks for name and a number. Then writes the name such number of times "<<endl;
    cout<<"Give a name:"<<endl;
    cin>>name;
    cout<<"Give a number:"<<endl;
    cin>>number;

    for(int i=1; i<=number; i++)
    {
        cout<<i<<". "<<name<<endl;
    }

    cout<<"\nPress any key to exit";
    getchar();
    getchar();
   return 0;
}
