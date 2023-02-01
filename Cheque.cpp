#include "Cheque.h"

Cheque::Cheque(const int montant) : _montant(montant) {
}

int Cheque::getMontant() const {
	return _montant;
}

