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
	Cartography c;
	c.Display();

	ListeDMP ldmp;
	DMP d(1,2,"b");
	ldmp.Add(d);
	ldmp.Add(d);
	ldmp.Add(d);

	ldmp.Add(d);
	ldmp.Add(d);
	ldmp.Add(d);
	ldmp.Add(d);


	cout<<"LOL"<<endl;

	ldmp.Display();

	return 0;
}
