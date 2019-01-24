#pragma once
#include <cstddef>

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
/** /
enum class  CalculationConstantID : std::size_t{
	None,


};
/**/

template<class T> T StrongGravityConstant = 6.67431;
template<class T> T WeelGravityConstant = 6.67408;
template<class T> T GravityConstantMultipler = (1.0/100000000000);
template<class T> T SI_a = 9.80665 ;


template<class T> T Atto	= 0.000000000000000001;
template<class T> T Femto	= 0.000000000000001;
template<class T> T Pico	= 0.000000000001;
template<class T> T Nano	= 0.000000001;
template<class T> T Micro	= 0.000001;
template<class T> T Milli	= 0.001;
template<class T> T Centi	= 0.01;
template<class T> T Deci	= 0.1;
template<class T> T Zero	= 0;
template<class T> T One		= 1;
template<class T> T Deca	= 10.0;
template<class T> T Hecto	= 100.0;
template<class T> T Kilo	= 1000.0;
template<class T> T Mega	= 1000000.0;
template<class T> T Giga	= 1000000000.0;
template<class T> T Tera	= 1000000000000.0;
