/*************************************************************************
                           DMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Réalisation de la classe <DMP> (fichier DMP.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "DMP.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type DMP::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void DMP::Display()
// Algorithme :
{
	cout<<"("<<x<<","<<y<<")-> "<<element<<endl;
} //----- Fin de Méthode



//------------------------------------------------- Surcharge d'opérateurs
DMP & DMP::operator = ( const DMP & unDMP )
// Algorithme :
//
{
	DMP d(*this);
	return d;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
DMP::DMP ( const DMP & unDMP )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <DMP>" << endl;
#endif
} //----- Fin de DMP (constructeur de copie)


DMP::DMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <DMP>" << endl;
#endif

    x = 0;
    y = 0;
    element = 0;
} //----- Fin de DMP

DMP::DMP (float fx, float fy,char * felement)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <DMP>" << endl;
#endif
    x=fx;
    y=fy;
    element=felement;


} //----- Fin de DMP



DMP::~DMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <DMP>" << endl;
#endif
} //----- Fin de ~DMP


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

