#include "stdafx.h"

#include "utilities_func.h"

void split_date(string date_string, string giorno, string mese, string anno)
{
	string tmp;
	vector<string> nums;
	
		// splitta 
     for(int i = 0; i < date_string.size(); i++)
	 {
        if(date_string.at(i) == '/')	
        {
            tmp.clear();      
        }

        else
        {
            tmp.insert(tmp.end(), date_string.at(i));
            nums.push_back(tmp);
            tmp.clear();
        } 
    }
		
	 
		giorno=nums.at(0);

		mese=nums.at(1);

	 	anno=nums.at(2)+nums.at(3)+nums.at(4)+nums.at(5);
				
	

}