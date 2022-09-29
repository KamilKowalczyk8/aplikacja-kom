#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
//a do potegi b, oblicza - można użyć zamiast tego funkcji pow(a,b) z biblioteki <math.h>
int power(int a, int b) {
   int wynik = 1;
   for(int i=0;i<b;i++) {
     wynik *= a;
   }
   return wynik;
}

int main(int argc, char** argv) {
	int wynik=0;
	string bin;

    int potega = 0;
    int cyfra;
	ofstream plik1;
   ifstream plik;  //deklaracja zmiennej pliku tekstowego
   
   plik.open("1.txt");  //otwarcie pliku
   plik1.open("2.txt");  //otwarcie pliku
   
   if(plik.good())  //sprawdzenie czy plik istnieje
            while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
                  {
                  	
                   plik>>bin;  //pobranie linii do zmiennej napis
                   cout<<bin;
                   cout<<endl;
                 
					 for(int i=bin.length()-1; i>=0; i--) { //od końca do początku stringu
					{   cyfra = bin[i]-48; //zamiana znaku char z kodu ASCII na cyfrę int
					 
				}
					   wynik += power(8, potega++) * cyfra;
					 }
                   cout<<"Liczba dziesietna: "<<wynik<<endl;
                   plik1<<wynik<<" ";
                   potega=0;
                   wynik=0;
                   }
                   plik.close();  //zamkniecie pliku tekstowego

cout<<endl;


 




    plik1.close();  
	    
 return 0;
}