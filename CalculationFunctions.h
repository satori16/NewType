#pragma once
#include "NewType.h"

template<class T> Newton<T> MakeNewton(Gram<T> g,Meter<T> m, Speed<T> s) { return { (m / (s*s))*g}; }
template<class T> Gravity<T> MakeGravityConstant(Gravity<T> G, Meter<T> m,Gram<T> g, Speed<T> s) { return { (G/((m*m*m)*g*100*s/100)}; }

