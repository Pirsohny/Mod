#pragma once
#include <string>
#include <iostream>

using namespace std;

const int MNOJINALENGTH = 1000;

class MnojinaString {
public:
	string massiv[MNOJINALENGTH];
	int n;


	MnojinaString(string list[])
	{
		for (int i = 0; i < sizeof(list); i++)
			massiv[i] = list[i];
		n = sizeof(list);
	}

	MnojinaString(MnojinaString & setToCopy)
	{
		for (int i = 0; i < setToCopy.n; i++)
		{
			massiv[i] = setToCopy.massiv[i];
		}
		n = setToCopy.n;
	}

	MnojinaString & operator +=(const string right)
	{
		massiv[n] = right;
		n++;
		return *this;
	}

	MnojinaString & operator -=(const string right)
	{
		for (int i = 0; i < n; i++)
		{
			if (massiv[i] == right)
			{
				for (int j = i; j <= n; j++)
					massiv[j] = massiv[j + 1];
				return *this;
			}
		}
		n--;
		return *this;
	}

	MnojinaString & operator =(MnojinaString & right)
	{
		for (int i = 0; i < right.n; i++)
		{
			massiv[i] = right.massiv[i];
		}
		n = right.n;
		return *this;
	}


	MnojinaString & operator +(const string & right)
	{
		MnojinaString result(massiv);
		for (int i = n; i < n + sizeof(massiv); i++)
		{
			result.massiv[i] = massiv[i - n + 1];
		}
		result.n = n + sizeof(massiv);
		return result;
	}

	friend ostream & operator <<(ostream  & os, MnojinaString massiv);

	friend ostream & operator <<(ostream  & os, MnojinaString massiv)
	{
		for (int i = 0; i <massiv.n; i++)
		os << massiv.massiv[i] << endl; 
		return os;
	}

	bool operator ==(MnojinaString & setToCompare)
	{
		if (n != setToCompare.n)
			return false;
		for (int i = 0; i < n; i++)
		{
			if (massiv[i] != setToCompare.massiv[i])
				return false;
		}
		return true;
	}
};
