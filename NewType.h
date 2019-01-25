#pragma once
#include <cstddef>
//#include "PhysicsEnum.h"

enum class CalculationID : std::size_t {
	None,//maybe...
	Float8,//maybe...
	Float16,//maybe...
	Float32,//maybe...
	Float64,//maybe...
	Float80,//maybe...
	Meter,
	Speed,
	Gram,
	Newton,
	Metric,
	GravityConstant,
	Velocity,
};


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
template<class T> using Meter	= CalculationType<T, CalculationID::Meter>;
template<class T> using Speed	= CalculationType<T, CalculationID::Speed>;
template<class T> using Gram	= CalculationType<T, CalculationID::Gram>;
template<class T> using Newton	= CalculationType<T, CalculationID::Newton>;
template<class T> using Metric	= CalculationType<T, CalculationID::Metric>;
template<class T> using Gravity = CalculationType<T, CalculationID::GravityConstant>;
template<class T> using Velocity= CalculationType<T, CalculationID::Velocity>;


template<class T> T StrongGravityConstant = 6.67431;
template<class T> T WeekGravityConstant = 6.67408;
template<class T> T GravityConstantMultipler = (1.0 / 100000000000);
template<class T> T SI_a = 9.80665;


template<class T> T Atto = 0.000000000000000001;
template<class T> T Femto = 0.000000000000001;
template<class T> T Pico = 0.000000000001;
template<class T> T Nano = 0.000000001;
template<class T> T Micro = 0.000001;
template<class T> T Milli = 0.001;
template<class T> T Centi = 0.01;
template<class T> T Deci = 0.1;
template<class T> T Zero = 0;
template<class T> T One = 1;
template<class T> T Deca = 10.0;
template<class T> T Hecto = 100.0;
template<class T> T Kilo = 1000.0;
template<class T> T Mega = 1000000.0;
template<class T> T Giga = 1000000000.0;
template<class T> T Tera = 1000000000000.0;

template<class T> Gram<T> OneJapanYen{ 1 };
