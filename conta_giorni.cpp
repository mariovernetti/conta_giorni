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

#include "struct.cpp"
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


	cout<<"Inserisci la prima data: ";cin>>a;
	cout<<"Inserisci la seconda data: ";cin>>b;
	

	numeri=split_date(a);

	giorno=numeri.at(0)+numeri.at(1);
	mese=numeri.at(2)+numeri.at(3);
	anno=numeri.at(4)+numeri.at(5)+numeri.at(6)+numeri.at(7);

	date1.d=stoi(giorno);
	date1.m=stoi(mese);
	date1.y=stoi(anno);

	numeri=split_date(b);

	giorno=numeri.at(0)+numeri.at(1);
	mese=numeri.at(2)+numeri.at(3);
	anno=numeri.at(4)+numeri.at(5)+numeri.at(6)+numeri.at(7);

	date2.d=stoi(giorno);
	date2.m=stoi(mese);
	date2.y=stoi(anno);

	cout<<date2.d<<endl;
	cout<<date2.m<<endl;
	cout<<date2.y<<endl;

	
	Console::ReadKey();
    
}
