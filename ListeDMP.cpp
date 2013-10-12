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


void ListeDMP::Add( const DMP &dmp_to_add )
// Algorithme :
// Si le maillon courant est vide, on lui attribue l'objet dmp, sinon on le passe au suivant.
{
    if(isEmpty){
        dmp = dmp_to_add;
        isEmpty = false;
        nextList = new ListeDMP();
    } else {
        nextList->Add(dmp_to_add);
    }

} //----- Fin de ListeDMP

long ListeDMP::Count(bool specification, char* pszDMP)
// Algorithme :
//
{
    long result = 0;
    ListeDMP * current = this;
    while(!current->isEmpty){
        if(!specification || (specification && current->dmp.GetElement() == pszDMP)) result++;
        current = current->nextList;
    }
    return result;
}

void ListeDMP::Display( )
// Algorithme :
// Chaque maillon s'affiche, et demande au suivant de s'afficher (si celui si n'est pas vide)
{
    if(isEmpty){ // Seul le premier peut etre vide ET affiche (cf en dessous)
        cout<<"Aucun element a afficher"<<endl;
    } else {
        dmp.Display();
        if(!nextList->isEmpty){
            nextList->Display();
        }
    }

} //----- Fin de ListeDMP

long ListeDMP::Find(const DMP &dmp_to_find, int firstPosition)
// Algorithme :
// On parcours les éléments de la liste jusqu'a trouver un element correspondant.
{
    ListeDMP * current = this;
    int i = 0;
    while(!current->isEmpty){
        if(current->dmp.Equal(dmp_to_find) && i >= firstPosition) return i;
        current = current->nextList;
        i++;
    }
    return -1;
} //----- Fin de ListeDMP

char * ListeDMP::GetData(float fx, float fy)
// Algorithme :
//
{
    ListeDMP * current = this;
    while(!current->isEmpty){
        if(current->dmp.GetX() == fx && current->dmp.GetY() == fy ) return current->dmp.GetElement();
        current = current->nextList;
    }
    return 0;
}


//------------------------------------------------- Surcharge d'opérateurs

ListeDMP & ListeDMP::operator = ( const ListeDMP & unListeDMP )
// Algorithme :
//
{
    cout<<"!"<<endl;
    dmp = unListeDMP.dmp;
    nextList = unListeDMP.nextList;
    isEmpty = unListeDMP.isEmpty;
	return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ListeDMP::ListeDMP ( const ListeDMP & unListeDMP )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeDMP>" << endl;
#endif
    cout<<"CDC :"<<this<<endl;
} //----- Fin de ListeDMP (constructeur de copie)


ListeDMP::ListeDMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeDMP>" << endl;
#endif

    //cout<<"Debut de construction de :"<<this<<endl;
    this->nextList = 0;
    this->isEmpty = true;
    //cout<<"Fin de construction de :"<<this<<endl;

} //----- Fin de ListeDMP



ListeDMP::~ListeDMP ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeDMP>" << endl;
#endif
    delete(nextList);
} //----- Fin de ~ListeDMP


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

