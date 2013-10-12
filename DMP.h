/*************************************************************************
                           DMP  -  description
                             -------------------
    début                : 11 oct. 2013
    copyright            : (C) 2013 par kantoine
*************************************************************************/

//---------- Interface de la classe <DMP> (fichier DMP.h) ------
#if ! defined ( DMP_H_ )
#define DMP_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <DMP>
//
//
//------------------------------------------------------------------------

class DMP
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void Display();
	// Mode d'emploi :
	//
	// Contrat :
	//

	bool Equal( const DMP & unDMP) const;
	// Mode d'emploi :
	//
	// Contrat :
	//

	char * GetElement() const;
	// Mode d'emploi :
	//
	// Contrat :
	//

	float GetX() const;
	// Mode d'emploi :
	//
	// Contrat :
	//

	float GetY() const;
	// Mode d'emploi :
	//
	// Contrat :
	//

//------------------------------------------------- Surcharge d'opérateurs
    DMP & operator = ( const DMP & unDMP );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    DMP ( const DMP & unDMP );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    DMP ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    DMP (float x, float y,char * element);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~DMP ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
float x,y;
char * element;
};

//--------------------------- Autres définitions dépendantes de <DMP>

#endif // DMP_H_

