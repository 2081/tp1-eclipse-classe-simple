/*
 * test.cpp
 *
 *  Created on: 11 oct. 2013
 *      Author: kantoine
 */

#include <iostream>
#include "Cartography.h"
#include "DMP.h"
#include "ListeDMP.h"


using namespace std;

int main() {
	cout<<"Test :"<<endl;
//	ListeDMP ldmp;
//	char str_tab[] = {'H','2','O','\0'};
//	char * str = str_tab;
//	DMP dmp(3,2,str);
//	ldmp.Add(dmp);
//	ldmp.Add(DMP(2,2,"CO2"));
//	ldmp.Add(dmp);
//    ldmp.Add(dmp);
//	ldmp.Add(DMP(4,6,"CO2"));
//	ldmp.Add(dmp);
//	ldmp.Add(dmp);
    cout<<"Affichage -----------------------"<<endl;
    Cartography cart;
    cart.Add(124.5, 60, "h2o");
    cart.Add(128, 45789.54, "SiO2");
    cart.Add(124.6, 60, "h2o");
    cart.Add(300, -456.2, "SiO2");
    cart.Add(1,1,"h2o");
    cart.Add(1,2,"CO2");
    cart.Add(1,5,"NaCl");
    cart.Add(2,1.890,"Mg");
    cart.Add(2.3,2,"NaCl");
    cart.Display();
    long nbrElements , nbrNaCl;
    char* pelement;
    pelement="h2o";
    cout<<"Nombre d'elements : "<<cart.Count()<<endl;
    cout<<"Nombre de NaCl : "<<cart.Count(pelement)<<endl;
    cout<<"Element correspondant au point (1,2) : "<<cart.GetData(1,2)<<endl;
    cout<<"Element correspondant au point (1,1) : "<<cart.GetData(1,1)<<endl;
    //cart.FindDMP("h2o",3,1.4,1);

	return 0;
}
