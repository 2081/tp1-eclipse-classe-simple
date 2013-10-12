/*************************************************************************
                           ListeDMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Réalisation de la classe <ListeDMP> (fichier ListeDMP.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ListeDMP.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ListeDMP::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void ListeDMP::Add( DMP fdmp )
// Algorithme :
//
{


	ListeDMP * nextItem = this;
	while(!(*nextItem).isEmpty)
	{
		nextItem = (*nextItem).nextDMP;
	}
    (*nextItem).dmp = fdmp;
    ListeDMP ldmp;
    (nextItem->nextDMP) = &ldmp;
    (*nextItem).isEmpty = false;

} //----- Fin de ListeDMP

void ListeDMP::Display( )
// Algorithme :
//
{
	cout<<"LOL"<<endl;
	ListeDMP * nextItem = this;
	while(!(*nextItem).isEmpty)
	{
		nextItem->dmp.Display();
		nextItem = nextItem->nextDMP;
	}

} //----- Fin de ListeDMP



//------------------------------------------------- Surcharge d'opérateurs
/*
ListeDMP & ListeDMP::operator = ( const ListeDMP & unListeDMP )
// Algorithme :
//
{
	return 0;
} //----- Fin de operator =*/


//-------------------------------------------- Constructeurs - destructeur
ListeDMP::ListeDMP ( const ListeDMP & unListeDMP )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeDMP>" << endl;
#endif
} //----- Fin de ListeDMP (constructeur de copie)


ListeDMP::ListeDMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeDMP>" << endl;
#endif

    isEmpty = true;

} //----- Fin de ListeDMP



ListeDMP::~ListeDMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeDMP>" << endl;
#endif
} //----- Fin de ~ListeDMP


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

