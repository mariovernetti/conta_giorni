/*	              struct.cpp		        *
 *-----------------------------------------*
 *				   File CPP		            *
 *   cpp struttura date di "conta_numeri"   *  
 *-----------------------------------------*
 *					                        */

#include "stdafx.h"

#include "struct.h"

//assegna i valori di a m y trasformando da stringa ad intero

void DATE::assegna(string giorno, string mese, string anno)
{
	d=stoi(giorno);        // stoi è una funzione di <string> che trasforma da stringa ad intero
	m=stoi(mese);
	y=stoi(anno);
}

int DATE::g(void)
{
	m = (m + 9) % 12;
	y = y - m/10;
	return (365*y + y/4 - y/100 + y/400 + (m*306 + 5)/10 + ( d - 1 ));
}