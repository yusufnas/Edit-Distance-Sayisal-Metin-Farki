#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{

 string metin1;
 string metin2;
 cout<<"Birinci Metin:"<<endl;

 getline(cin,metin1);

 cout<<"Ikinci Metin:"<<endl;

 getline(cin,metin2);

 while(metin1.size()!= metin2.size())
 {

 cout<<"Metinler Ayni sayida Karektere Sahip degil. Ikinci metni
tekrar girin"<<endl;
 cin>>metin2;

 }

 int fark=0;

 for(int i=0;i<(int)(metin1.size());i++){

 if(metin1.at(i)!=metin2.at(i))

 fark++;
 }

cout<<"iki metin arasindaki karakter farki: "<<fark;

 return 0;
}