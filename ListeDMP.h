/*************************************************************************
                           ListeDMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Interface de la classe <ListeDMP> (fichier ListeDMP.h) ------
#if ! defined ( LISTEDMP_H_ )
#define LISTEDMP_H_

#include "DMP.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ListeDMP>
//
//
//------------------------------------------------------------------------

class ListeDMP
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void Add( const DMP &dmp_to_add );
    // Mode d'emploi :
    //
    // Contrat : Méthode récursive, appeler Find avant pour ne pas ajouter deux fois un élément.
    //

    long Count(bool specification = false, char* pszDMP = 0);
    // Mode d'emploi :
    //
    // Contrat :
    //

	void Display();
	// Mode d'emploi :
	//
	// Contrat :
	//

	long Find(const DMP &dmp_to_add, int firstPosition = 0);
	// Mode d'emploi :
	//
	// Contrat :
	//

	char * GetData(float x, float y);


//------------------------------------------------- Surcharge d'opérateurs
    ListeDMP & operator = ( const ListeDMP & unListeDMP );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ListeDMP ( const ListeDMP & unListeDMP );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ListeDMP ( );
    // Mode d'emploi :
    //
    // Contrat :
    //


    virtual ~ListeDMP ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

ListeDMP * nextList;
DMP dmp;
bool isEmpty;

};

//--------------------------- Autres définitions dépendantes de <ListeDMP>

#endif // LISTEDMP_H_

