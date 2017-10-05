/*Nama : Indah Putriani Fajar Sidik 3411151139
		 Bagus Rahadi	3411151141
  APLIKASI UNTUK MENGHITUNG REGRESI LINIER
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
 float X[300];
 float Y[300];
 float data, totalX, totalY, totalXY, totalXkuadrat, kuadrattotalX;
 float m,c ;
 int i, ulang;
 cout << "\n";
 cout << "            REGRESI LINEAR\n";
 cout << "\n";
 cout << " Nama Kelompok :\n";
 cout << " [1] Indah Putriani Fajar Sidik [3411151139]\n";
 cout << " [2] Bagus Rahadi	        [3411151141]\n";
 cout << "\n";
 cout << " SIE C\n";
 cout << endl ;
 
 do
 {
    totalX=0, totalY=0, totalXY=0, totalXkuadrat=0;
    cout << endl << endl ;
 cout << "Input Jumlah N : " ;
 cin >> data ;
 cout << endl ;
 
 //input data
 for (i=0 ; i<data ; i++)
  {
   cout << "INPUT X-" << i+1 << " : " ;
   cin >> X[i];
   cout << "INPUT Y-" << i+1 << " : " ;
   cin >> Y[i];
   cout << endl;
  }
 
 cout << endl;
 
 // menghitung nilai c
  
  //menghitung nilai jumlah nilai XY
  for (i=0 ; i<data ; i++)
   totalXY=totalXY+(X[i]*Y[i]);
  
  //menghitung nilai jumlah X dan jumlah Y
  for (i=0 ; i<data ; i++)
   {
    totalX=totalX+X[i];
    totalY=totalY+Y[i];
   }
  
  //menghitung total X kuadrat
  for (i=0 ; i<data ; i++)
   totalXkuadrat=totalXkuadrat+(X[i]*X[i]);
  
  // menghitung kuadrat total X
  for (i=0 ; i<data ; i++)
   kuadrattotalX=totalX*totalX;
  
  //menghitung nilai c
  float b=((data*totalXY)-(totalX*totalY)) / ((data*totalXkuadrat)-(kuadrattotalX));
  
  
 //menghitung nilai m
  
  float a=((totalXkuadrat*totalY)-(totalX*totalXY)) / ((data*totalXkuadrat)-(kuadrattotalX));
   
 // menampilkan hasil persamaan regresi
 cout << "Persaamaan linear dari fungsi regresi di atas adalah Y=" << endl << c << "X" 
         << setiosflags(ios::showpos) << m << endl;
 getch();
    
    // fungsi mengulang program
    cout << "Ingin mengulang (Y/T) ?" ;
    ulang=getch();
    } while (ulang=='Y' || ulang=='y');
    
 return 0;
} 
