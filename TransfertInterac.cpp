#include "TransfertInterac.h"

TransfertInterac::TransfertInterac(const int montant) : _montant(montant) {
}

int TransfertInterac::getMontant() const
{
    return _montant;
}
