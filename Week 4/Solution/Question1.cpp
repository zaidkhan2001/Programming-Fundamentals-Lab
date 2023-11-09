#include<iostream>
using namespace std;
int main()

{
int age,qual,expr;
char gen;

cout<<" Enter Gender "<<endl;
cin>>gen;


if(gen=='m'||gen=='M'){
cout<<"enter your age"<<endl;
cin>>age;

   if(age>25){
cout<<" Enter your Qualification 1: BS, 2: MS, 3: PhD "<<endl;
cin>>qual;

if(qual==1)
cout<<" Salary will be in range  25-40K"<<endl;

if(qual==2||qual==3){

cout<<" Enter your Experience "<<endl;
cin>>expr;

if(expr>5){
cout<<" Salary will be 70K+"<<endl;
}
else
cout<<" Salary will be in range 40K to 70K"<<endl;
}
}
else
cout<<" You are too Young "<<endl;
}
else
cout<<" Only Males are Allowed "<<endl;


system("pause");
return 0;
}