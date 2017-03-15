/*	              struct.h	                *
 *-----------------------------------------*
 *			     File HEADER		        *
 * header struttura date di "conta_numeri"  *  
 *-----------------------------------------*
 *					                        */

#ifndef STRUCT_H
#define STRUCT_H

#include <iostream>
#include <string>

using namespace System;
using namespace std;

class DATE
{
	public:

		void assegna(string giorno, string mese, string anno);  //assegna i valori di a m y trasformando da stringa ad intero
		int g(void); 

	private:
		
		//variabili della data
		
		int y;  //anno
		int	m;  //mese
		int d;  //giorno

};


#endif //STRUCT_H