#include "CompteBanque.h"

CompteBanque::CompteBanque(const int solde) : _solde(solde) {
}

int CompteBanque::getSolde() const {
	return _solde;
}

void CompteBanque::reduire(Cheque cheque) {
	_solde -= cheque.getMontant();
}

CompteBanque& CompteBanque::operator+=(const int montant)
{
	_solde += montant;
	return *this;
}

CompteBanque& CompteBanque::operator+=(const Cheque &cheque)
{
	_solde += cheque.getMontant();
	return *this;
}

CompteBanque& CompteBanque::operator-=(const Cheque &cheque)
{
	_solde -= cheque.getMontant();
	return *this;
}

bool CompteBanque::operator>=(const Cheque &cheque)
{
	return _solde >= cheque.getMontant();
}

CompteBanque& CompteBanque::operator-=(const CarteDeCredit &carte)
{
	_solde -= carte.getSolde();
	return *this;
}

bool CompteBanque::operator>(const CarteDeCredit &carte)
{
	return _solde > carte.getSolde();
}

CompteBanque& CompteBanque::operator-=(const TransfertInterac &transfert)
{
	_solde -= transfert.getMontant();
	return *this;
}

CompteBanque& CompteBanque::operator+=(const TransfertInterac& transfert)
{
	_solde += transfert.getMontant();
	return *this;
}

bool CompteBanque::operator<(const CompteBanque& compte)
{
	return _solde < compte._solde;
}

CompteBanque operator+(const CompteBanque& compte1, const CompteBanque& compte2)
{
	int solde = compte1.getSolde() + compte2.getSolde();
	return CompteBanque(solde);
}
