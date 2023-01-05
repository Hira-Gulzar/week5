#include <iostream>
using namespace std;
string capital(char alphabet);
main()
{
char alphabet;
string total; 
cout << " enter character:";
cin >> alphabet;
total = capital(alphabet);
if(total == "capitalcase")
{
cout << "you have entered:" << total << endl;
}
if(total== "lowercase")
{
cout << " you have entered:" << total << endl;
}
}
string capital(char alphabet)
{
string character;
string character1;
character = "uppercase";
character1 = "lowercase";
if (alphabet=='A')
{
return character;
}
if (alphabet=='a')
{
return character1;
}

if (alphabet=='B')
{
return character;
}
if (alphabet=='b')
{
return character1;
}

if (alphabet=='C')
{
return character;
}
if (alphabet=='c')
{
return character1;
}
if (alphabet=='D')
{
return character;
}
if (alphabet=='d')
{
return character1;
}
if (alphabet=='E')
{
return character;
}
if (alphabet=='e')
{
return character1;
}
if (alphabet=='F')
{
return character;
}
if (alphabet=='f')
{
return character1;
}
if (alphabet=='G')
{
return character;
}
if (alphabet=='g')
{
return character1;
}
if (alphabet=='H')
{
return character;
}
if (alphabet=='h')
{
return character1;
}
if (alphabet=='I')
{
return character;
}
if (alphabet =='i')
{
return character1;
}
if (alphabet=='J')
{
return character;
}
if (alphabet=='j')
{
return character1;
}

if (alphabet=='K')
{
return character;
}
if (alphabet=='k')
{
return character1;
}
if (alphabet=='L')
{
return character;
}
if (alphabet='l')
{
return character1;
}
if (alphabet=='M')
{
return character;
}
if(alphabet =='m')
{
return character1;
}
if (alphabet=='N')
{
return character;
}
if (alphabet=='n')
{
return character1;
}
if (alphabet=='0')
{
return character;
}
if (alphabet=='o')
{
return character1;
}
if (alphabet=='P')
{
return character;
}
if (alphabet=='p')
{
return character1;
}
if (alphabet=='Q')
{
return character;
}
if (alphabet=='q')
{
return character1;
}
if (alphabet=='R')
{
return character;
}
if (alphabet=='r')
{
return character1;
}
if (alphabet=='S')
{
return character;
}
if (alphabet=='s')
{
return character1;
}
if (alphabet=='T')
{
return character;
}
if (alphabet=='t')
{
return character1;
}

if (alphabet=='U')
{
return character;
}
if (alphabet=='u')
{
return character1;
}
if (alphabet=='V')
{
return character;
}
if (alphabet=='v')
{
return character1;
}
if (alphabet=='W')
{
return character;
}
if (alphabet=='w')
{
return character1;
}
if (alphabet=='X')
{
return character;
}
if (alphabet=='x')
{
return character1;
}
if (alphabet=='Y')
{
return character;
}
if (alphabet=='y')
{
return character1;
}
if (alphabet=='Z')
{
return character;
}
if (alphabet=='z')
{
return character1;
}
return 0;
}













