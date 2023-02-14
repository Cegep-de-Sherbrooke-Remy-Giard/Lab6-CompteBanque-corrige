#include "CarteDeCredit.h"

using namespace std;

CarteDeCredit::CarteDeCredit(const int solde) : _solde(solde) {
}

int CarteDeCredit::getSolde() const
{
	return _solde;
}

void CarteDeCredit::operator=(const int montant)
{
	_solde = montant;
}

ostream& operator << (ostream& flux, const CarteDeCredit& carte) {
	flux << "Carte de Credit: " << carte.getSolde() << "$";
	return flux;
}