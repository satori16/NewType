#pragma once
#include "PhysicsEnum.h"

template<class T, CalculationID PID>
class CalculationType {
public:
	typedef CalculationID ID;

	CalculationType(const T& In) :Value_(In) {}

	const T& Get() {
		return Value_;
	}

	const T& operator =(const T& In) {
		Value_ = In;
		return Value_;
	}

	operator const T& () {
		return Value_;
	}

protected:
	T Value_ = T(0);
};
/** /
template<class T, CalculationConstantID PID>
class CalculationConstatntType {
	typedef CalculationID ID;

	CalculationType(const T& In) :Value_(In) {}

	const T& Get() {
		return Value_;
	}

	const T& operator =(const T& In) {
		Value_ = In;
		return Value_;
	}

	operator const T& () {
		return Value_;
	}

protected:
	T Value_ = T(0);
};
/**/
template<class T> using Meter = CalculationType<T, CalculationID::Meter>;
template<class T> using Speed = CalculationType<T, CalculationID::Speed>;
template<class T> using Gram = CalculationType<T, CalculationID::Gram>;
template<class T> using Newton = CalculationType<T, CalculationID::Newton>;
template<class T> using Metric = CalculationType<T, CalculationID::Metric>;
template<class T> using Gravity = CalculationType<T, CalculationID::GravityConstant>;
template<class T> using Velocity = CalculationType<T, CalculationID::Velocity>;