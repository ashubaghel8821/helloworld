#include<iostream>
using namespace std;

int main()
{
int cost[10];
int i;
int totalcost=0;
int ntbook;
int txt;
int txttable;
int txttablefig;
cout<<"enter the no of books u want to print";
cin>>ntbook;
for(i=0;i<ntbook;i++)
{
cout<<"for book no "<<i+1;
cout<<"enter the book having text\n";
cin>>txt;
cout<<"enter the book ang txttable";
cin>>txttable;
cout<<"enter the no of books having txttablefig";
cin>>txttablefig;
totalcost=totalcost+(txt*2+txttable*3+txttablefig*5);
}
if(totalcost<=1000)
cout<<"yes u can purchase the book";
else
cout<<"no you can't purchase the book";
}
}
