#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class library
{
public:
int id;
char name[100];
char author[100];
char student[100];
int price;
int pages;
};

int main()
{
library lib[100];  //calling the class
int input=0;
int count=0;

while(input!=3)
{
cout<<"enter 1 to input details like: id, name, author,student,price,pages"<<endl;
cout<<"enter 2 to display the details "<<endl;
cout<<"enter 3 to exit"<<endl;
cin>>input;

switch(input)
{
  case 1:
  start:
  cout<<"enter book id" <<endl;
  cin>>lib[count].id;
  cout<<"enter book name" <<endl;
 // cin>>lib[count].name;
  cin.getline(lib[count].name,100,'$'); //variable,size,dailymeter
  cout<<"enter book author" <<endl;
 // cin>>lib[count].author;
  cin.getline(lib[count].author,100,'$');
  cout<<"enter book which is taken by student (name) " <<endl;
 // cin>>lib[count].student;
  cin.getline(lib[count].student,100,'$');
  cout<<"enter book price" <<endl;
  cin>>lib[count].price;
  cout<<"enter book pages" <<endl;
  cin>>lib[count].pages;
  count++;
  break;
case 2:
for(int i=0;i<count;i++)
{
cout<<"book id : "<<lib[i].id<<endl;
cout<<"book name : "<<lib[i].name;
cout<<"book author : "<<lib[i].author;
cout<<"book student : "<<lib[i].student;
cout<<"book price : "<<lib[i].price<<endl;
cout<<"book pages : "<<lib[i].pages<<endl;
}
break;
case 3:
exit(0);
break;

default:
cout<<"you have enter wrong value,please type again"<<endl;
goto start;

}
}
}


