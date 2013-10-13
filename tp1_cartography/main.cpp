#include <iostream>
#include "Cartography.h"
#include "DMP.h"
#include "ListeDMP.h"
#include "test.cpp"
using namespace std;

int main()
{
	cout<<"Test :"<<endl;
	Cartography c;
	c.Display();

	ListeDMP ldmp;
	char str_tab[] = {'H','2','O','\0'};
	char * str = str_tab;
	DMP d(1,2,str);
	ldmp.Add(d);
	ldmp.Add(DMP(2,2,"CO2"));
	ldmp.Add(d);
    ldmp.Add(d);
	ldmp.Add(DMP(4,6,"CO2"));
	ldmp.Add(d);
	ldmp.Add(d);
    cout<<"Affichage -----------------------"<<endl;
    ldmp.Display();

	cout<<"Data : "<<ldmp.GetData(2,2)<<endl;

	return 0;}
