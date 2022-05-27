// OS12.h
#pragma once
#define OS12HANDEL void*
namespace OS12
{
	__declspec(dllexport) OS12HANDEL Init();                                // инициализация OS12
	//   if CoCreateInstance(... IID_Unknown)!= succesfull --> throw (int)HRESULT  
	namespace Adder
	{
		double __declspec(dllexport) Add(OS12HANDEL h, double x, double y);        // return x+y
		//  if QueryInteface(IID_IAdder) != succesfull -->  throw (int)HRESULT     
		double __declspec(dllexport) Sub(OS12HANDEL h, double x, double y);        // return x-y
		//  if QueryInteface(IID_IAdder) != succesfull -->  throw (int)HRESULT
	}
	namespace Multiplier
	{
		double __declspec(dllexport) Mul(OS12HANDEL h, double x, double y);        // return x*y
		//  if QueryInteface(IID_IMultiplier) != succesfull -->  throw (int)HRESULT 
		double __declspec(dllexport) Div(OS12HANDEL h, double x, double y);        // return x/y
		//  if QueryInteface(IID_IMultiplier) != succesfull -->  throw (int)HRESULT 
	}
	__declspec(dllexport) void Dispose(OS12HANDEL h);                       // завершение работы с OS12                  
}

