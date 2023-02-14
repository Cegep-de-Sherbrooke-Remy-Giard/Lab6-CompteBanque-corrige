#include "CompteBanque.h"
#include <string>

using namespace std;

CompteBanque::CompteBanque(const int solde) : _solde(solde) {
}

int CompteBanque::getSolde() const {
	return _solde;
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

CompteBanque& CompteBanque::operator-=(const CarteDeCredit &carte)
{
	_solde -= carte.getSolde();
	return *this;
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

ostream& operator<<(ostream& flux, const CompteBanque& compte)
{
	flux << "Compte de Banque: " << compte._solde << "$";
	return flux;
}

istream& operator>>(istream& flux, CompteBanque& compte)
{
	flux >> compte._solde;
	return flux;
}

CompteBanque operator+(const CompteBanque& compte1, const CompteBanque& compte2)
{
	int solde = compte1.getSolde() + compte2.getSolde();
	return CompteBanque(solde);
}

bool operator>=(const CompteBanque& compte, const Cheque& cheque)
{
	return compte.getSolde() >= cheque.getMontant();
}

bool operator>(const CompteBanque& compte, const CarteDeCredit& carte)
{
	return compte.getSolde() > carte.getSolde();
}

bool operator<(const CompteBanque& a, const CompteBanque& b)
{
	return a.getSolde() < b.getSolde();
}
