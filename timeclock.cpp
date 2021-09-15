#include<iostream>

#include<Windows.h>

using namespace std;

int main()

{

int hr,min,sec,a=0;

cout<<"PLease enter the hr:";cin>>hr;

cout<<"Please enter the min:";cin>>min;

cout<<"Please Enter the sec:";cin>>sec;

while(a==0)

{

system("cls");

cout<<"Time is:"<<hr<<":"<<min <<":"<<sec<<endl;

sec++;

Sleep(1000);

if(sec>59)

{

min++;

sec=0;

}

if(min>59)

{

hr++;

min=0;

}

if(hr>11)

{

hr=0;

}

}

getchar();

getchar();

return 0;

}