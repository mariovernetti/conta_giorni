/*				utilities_func.cpp		    *
 *-----------------------------------------*
 *				   File CPP	                *
 * cpp di funzioni varie di "conta_numeri"  *  
 *-----------------------------------------*
 *					                        */

#include "stdafx.h"

#include "utilities_func.h"

vector<string> split_date(string date_string)
{
	string tmp;  //striga temporanea per splittare
	vector<string> ritorno;   //vettore che contiene giorno mese e anno, usato per ritornare e poi dividere i valori
	
	 
     for(int i = 0; i < date_string.size(); i++)                   //  divide la data scartando gli '/' e salvando prima in tmp e poi 
	 {															   //  trasferendo poi in ritorno

        if(date_string.at(i) == '/')	
        {
            tmp.clear();      
        }

        else
        {
            tmp.insert(tmp.end(), date_string.at(i));
            ritorno.push_back(tmp);
            tmp.clear();
        } 
    }
		
	 
		return ritorno;
				
	

}