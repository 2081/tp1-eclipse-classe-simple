/*************************************************************************
                           Cartography  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Réalisation de la classe <Cartography> (fichier Cartography.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Cartography.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Cartography::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
bool Cartography::Add(float fX, float fY, char* pszDMP)
// Algorithme :
//
{
	/*
	int taille=sizeof(ListeDMP)+1;
	DMP listeDMP2[taille];
	for (int i = 0; i<taille -1; i++){
		ListeDMP2[i]=ListeDMP[i];
	}
	DMP dmp(fX,fY,pszDMP);
	ListeDMP2[taille]=dmp;
	ListeDMP
	*/


	return false;
} //----- Fin de Méthode

long Cartography::Count()
// Algorithme :
//
{
	return 0;
} //----- Fin de Méthode


long Cartography::Count(char* pszDMP)
// Algorithme :
//
{
	return 0;
} //----- Fin de Méthode


void Cartography::Display()
// Algorithme :
//
{
} //----- Fin de Méthode


long Cartography::FindDMP(char* pszDMP, long lFirstPos, float& fX, float& fY)
// Algorithme :
//
{
	return 0;
} //----- Fin de Méthode


char * Cartography::GetData(float x, float y)
// Algorithme :
//
{
	return 0;
} //----- Fin de Méthode

/*
//------------------------------------------------- Surcharge d'opérateurs
Cartography & Cartography::operator = ( const Cartography & unCartography )
// Algorithme :
//
{
	Cartography c;
	return c;
} //----- Fin de operator =
*/

//-------------------------------------------- Constructeurs - destructeur
Cartography::Cartography ( const Cartography & unCartography )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Cartography>" << endl;
#endif
} //----- Fin de Cartography (constructeur de copie)


Cartography::Cartography ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Cartography>" << endl;
#endif



} //----- Fin de Cartography


Cartography::~Cartography ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Cartography>" << endl;
#endif

} //----- Fin de ~Cartography


//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées

