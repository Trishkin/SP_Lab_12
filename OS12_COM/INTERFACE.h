#pragma once
#include <objbase.h>

#define FNAME L"SDA.OS_12.COM"
#define VINDX L"SDA.OS_12.1"
#define PRGID L"SDA.OS_12"

// {79C2A69D-2912-4EB3-9341-8496A7062BFF}
static const GUID CLSID_CA =
{ 0x79c2a69d, 0x2912, 0x4eb3, { 0x93, 0x41, 0x84, 0x96, 0xa7, 0x6, 0x2b, 0xff } };

// {5904CE78-3DFF-4846-A8A9-83C5D809EA5C}
static const GUID IID_IAdder =
{ 0x5904ce78, 0x3dff, 0x4846, { 0xa8, 0xa9, 0x83, 0xc5, 0xd8, 0x9, 0xea, 0x5c } };

interface IAdder :IUnknown {
	virtual HRESULT __stdcall Add(
		const double x,
		const double y,
		double& z
	) = 0;
	virtual HRESULT __stdcall Sub(
		const double x,
		const double y,
		double& z
	) = 0;
};

// {B035248D-597C-4B9F-BC6C-37E50E4C8130}
static const GUID IID_IMultiplier =
{ 0xb035248d, 0x597c, 0x4b9f, { 0xbc, 0x6c, 0x37, 0xe5, 0xe, 0x4c, 0x81, 0x30 } };

interface IMultiplier :IUnknown {
	virtual HRESULT __stdcall Mul(
		const double x,
		const double y,
		double& z
	) = 0;
	virtual HRESULT __stdcall Div(
		const double x,
		const double y,
		double& z
	) = 0;
};
