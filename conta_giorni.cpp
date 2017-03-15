/*	          	conta_giorni.cpp		    *
 *-----------------------------------------*
 *				   File MAIN		        *
 *           main di "conta_numeri"         *  
 *-----------------------------------------*
 *					                        */

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <string>

#include "struct.h"
#include "utilities_func.h"



using namespace System;
using namespace std;
	


void main(void)
{
	DATE date1;  //strutture per la data uno e la data due
	DATE date2; 

	vector<string> numeri;  //stringa temporanea usata per aìil ritorno della funzione split, poi usata per dividere la data

    string giorno;
	string mese;
	string anno;

	string a, b;

	int d0=0;
	int d1=1;


	cout<<"Inserisci la prima data: ";cin>>a;   //LE DATE DA INSERIRE SONO COSI' FORMATE: gg/mm/yyyy (es. 01/01/0001)
	cout<<"Inserisci la seconda data: ";cin>>b;
	

	numeri=split_date(a);   //data 1, operazioni su essa

	giorno=numeri.at(0)+numeri.at(1);
	mese=numeri.at(2)+numeri.at(3);                                    
	anno=numeri.at(4)+numeri.at(5)+numeri.at(6)+numeri.at(7);

	date1.assegna(giorno, mese, anno);

	numeri=split_date(b);   //data 2, operazioni su essa     

	giorno=numeri.at(0)+numeri.at(1);
	mese=numeri.at(2)+numeri.at(3);
	anno=numeri.at(4)+numeri.at(5)+numeri.at(6)+numeri.at(7);

	date2.assegna(giorno, mese, anno);

	difference= date1.g-date2.g;
	cout<<difference;
	
	Console::ReadKey();
    
}
