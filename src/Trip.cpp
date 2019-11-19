/*************************************************************************
                           Trip  -  description
                             -------------------
    début                : 2019-11-19
    copyright            : (C) 2019 BERTHOMET Guillaume & FORLER Corentin
    e-mail               : guillaume.berthomet@insa-lyon.fr
                           corentin.forler@insa-lyon.fr
*************************************************************************/

//---- Réalisation de la classe <Trip> (fichier Trip.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "City.h"
#include "Trip.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
const City *Trip::GetStart() const
{
    return this->startCity;
} //----- Fin de Size
const City *Trip::GetEnd() const
{
    return this->endCity;
} //----- Fin de Size

//-------------------------------------------- Constructeurs - destructeur
Trip::Trip(const Trip &aTrip)
    : startCity(aTrip.startCity), endCity(aTrip.endCity)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Trip> (non-surchargé)" << endl;
#endif
} //----- Fin de Trip (constructeur de copie)

Trip::Trip(const City *start, const City *end)
    : startCity(start), endCity(end)
{
#ifdef MAP
    cout << "Appel au constructeur de <Trip> (non-surchargé)" << endl;
#endif
} //----- Fin de Trip

Trip::~Trip()
{
#ifdef MAP
    cout << "Appel au destructeur de <Trip> (non-surchargé)" << endl;
#endif
} //----- Fin de ~Trip

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées