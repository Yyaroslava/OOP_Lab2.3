#pragma once
#include <iostream>
#include <sstream>
#include <string>

#pragma pack(1)
#define UL unsigned long

using namespace std;

class LongLong {
	UL x, y;
public:
	UL GetX() const;
	UL GetY() const;
	void SetX(UL value);
	void SetY(UL value);
	LongLong();
	LongLong(UL, UL);
	LongLong(const LongLong&);
	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;
	bool Lt(LongLong& A, LongLong& B);
	bool Ltq(LongLong& A, LongLong& B);
	bool Gt(LongLong& A, LongLong& B);
	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);
	//префиксный инкремент
	friend const LongLong& operator++(LongLong& i);
	//постфиксный инкремент
	friend const LongLong operator++(LongLong& i, int);
	//префиксный декремент
	friend const LongLong& operator--(LongLong& i);
	//постфиксный декремент
	friend const LongLong operator--(LongLong& i, int);
};
