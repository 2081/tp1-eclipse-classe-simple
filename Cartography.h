/*************************************************************************
                           Cartography  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Interface de la classe <Cartography> (fichier Cartography.h) ------
#if ! defined ( CARTOGRAPHY_H_ )
#define CARTOGRAPHY_H_
#include "DMP.h"
#include "ListeDMP.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Cartography>
//
//
//------------------------------------------------------------------------

class Cartography
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


	bool Add(float fX, float fY, char* pszDMP);
	// Mode d'emploi :
	//
	// Contrat :
	//

	long Count();
	// Mode d'emploi :
	//
	// Contrat :
	//

	long Count(char* pszDMP);
	// Mode d'emploi :
	//
	// Contrat :
	//

	long FindDMP(char* pszDMP, long lFirstPos, float& fX, float& fY) ;
	// Mode d'emploi :
	//
	// Contrat :
	//

	void Display() ;
	// Mode d'emploi :
	//
	// Contrat :
	//

	char * GetData(float fX, float fY) ;
	// Mode d'emploi :
	//
	// Contrat :
	//


//------------------------------------------------- Surcharge d'opérateurs
    Cartography & operator = ( const Cartography & unCartography );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Cartography ( const Cartography & unCartography );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Cartography ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Cartography ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    ListeDMP listdmp;


};

//--------------------------- Autres définitions dépendantes de <Cartography>

#endif // CARTOGRAPHY_H_

