/*************************************************************************
                           Cartography  -  description
                             -------------------
    d�but                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- R�alisation de la classe <Cartography> (fichier Cartography.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Cartography.h"
#include "ListeDMP.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type Cartography::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode
bool Cartography::Add(float fX, float fY, char * pszDMP)
// Algorithme :
//
{
    listdmp.Add(DMP(fX,fY,pszDMP));
    return false;
} //----- Fin de M�thode

long Cartography::Count()
// Algorithme :
//
{
    long result;
    result = listdmp.Count();
    return result;
} //----- Fin de M�thode


long Cartography::Count(char* pszDMP)
// Algorithme :
//
{
    long result;
    bool spec=true;
    result = listdmp.Count(spec,pszDMP);
    return result;
} //----- Fin de M�thode


void Cartography::Display()
// Algorithme :
//
{
    listdmp.Display();
} //----- Fin de M�thode


long Cartography::FindDMP(char* pszDMP, long lFirstPos, float& fX, float& fY)
// Algorithme :
//
{
//    long dmp;
//    dmp = listdmp.Find(DMP(fX,fY,pszDMP));
//    cout << "// Element : " << listdmp.pszDMP << endl;
//    cout << "// fX : " << listdmp.fX << endl;
//    cout << "// fY : " << fY << endl;
    return 0;
} //----- Fin de M�thode


char * Cartography::GetData(float fX, float fY)
// Algorithme : /
//Se contente de r�cup�rer GetData de ListeDMP
//
{
    char * m_element;
    m_element = listdmp.GetData(fX,fY);
    return m_element;
} //----- Fin de M�thode

/*
//------------------------------------------------- Surcharge d'op�rateurs
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



//----------------------------------------------------- M�thodes prot�g�es


