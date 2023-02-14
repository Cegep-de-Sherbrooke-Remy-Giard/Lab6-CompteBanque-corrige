#include "Cheque.h"

using namespace std;

Cheque::Cheque(const int montant) : _montant(montant) {
}

int Cheque::getMontant() const {
	return _montant;
}

ostream& operator << (ostream& flux, const Cheque& cheque) {
	flux << "Cheque: " << cheque.getMontant() << "$";
	return flux;
}