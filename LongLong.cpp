#include "LongLong.h"

UL LongLong::GetX() const { return x; }
UL LongLong::GetY() const { return y; }
void LongLong::SetX(UL value) { x = value; }
void LongLong::SetY(UL value) { y = value; }
LongLong::LongLong() { x = 0, y = 0; }

LongLong::LongLong(UL x = 0, UL y = 0) {
	this->x = x;
	this->y = y;
}

LongLong::LongLong(const LongLong& A) {
	x = A.GetX();
	y = A.GetY();
}

LongLong& LongLong::operator = (const LongLong& A) {
	x = A.x;
	y = A.y;
	return *this;
}

ostream& operator << (ostream& out, const LongLong& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, LongLong& A) {
	cout << "Enter high digit: "; in >> A.x;
	cout << "Enter low digit: "; in >> A.y;
	return in;
}

LongLong::operator string() const {
	stringstream ss;
	ss << x << " " << y;
	return ss.str();
}

//префиксная версия возвращает значение после инкремента
const LongLong& operator++(LongLong& i) {
	long x, y;
	x = i.GetX();
	y = i.GetY();
	y++;
	if (y == 0) {
		x++;
	}
	i.SetX(x);
	i.SetY(y);
	return i;
}

//постфиксная версия возвращает значение до инкремента
const LongLong operator++(LongLong& i, int) {
	long x, y;
	x = i.GetX();
	y = i.GetY();
	LongLong oldValue(x,y);
	y++;
	if (y == 0) {
		x++;
	}
	i.SetX(x);
	i.SetY(y);
	return oldValue;
}

//префиксная версия возвращает значение после инкремента
const LongLong& operator--(LongLong& i) {
	long x, y;
	x = i.GetX();
	y = i.GetY();
	if (y == 0) {
		x--;
	}
	y--;
	i.SetX(x);
	i.SetY(y);
	return i;
}

//постфиксная версия возвращает значение до инкремента
const LongLong operator--(LongLong& i, int) {
	long x, y;
	x = i.GetX();
	y = i.GetY();
	LongLong oldValue(x, y);
	if (y == 0) {
		x--;
	}
	y--;
	i.SetX(x);
	i.SetY(y);
	return oldValue;
}

LongLong operator + (LongLong& A, LongLong& B) {
	UL x, y;
	y = A.GetY() + B.GetY();
	x = A.GetX() + B.GetX();
	if (y < A.GetY()) {
		x++;
	}
	LongLong result(x,y);
	return result;
}

LongLong operator * (LongLong& A, LongLong& B) {
	UL x, y;
	y = A.GetY() * B.GetY();
	x = A.GetX() * B.GetY() + A.GetY() * B.GetX();
	LongLong result(x,y);
	return result;
}

bool LongLong::Lt(LongLong& A, LongLong& B) {
	if (A.x < B.x) return true;
	if (A.x > B.x) return false;
	if (A.y < B.y) return true;
	if (A.y > B.y) return false;
	return false;
}

bool LongLong::Ltq(LongLong& A, LongLong& B) {
	if (A.x < B.x) return true;
	if (A.x > B.x) return false;
	if (A.y < B.y) return true;
	if (A.y > B.y) return false;
	return  true;
}

bool LongLong::Gt(LongLong& A, LongLong& B) {
	if (A.x < B.x) return false;
	if (A.x > B.x) return true;
	if (A.y < B.y) return false;
	if (A.y > B.y) return true;
	return false;
}