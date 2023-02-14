#include "TransfertInterac.h"

using namespace std;

TransfertInterac::TransfertInterac(const int montant) : _montant(montant) {
}

int TransfertInterac::getMontant() const
{
    return _montant;
}

ostream& operator<<(ostream& flux, const TransfertInterac& transfert)
{
    flux << "Transfert Interac: " << transfert.getMontant() << "$";
    return flux;
}
