#pragma once

#ifdef FIGURE_EXPORTS
#define FIGURE_API __declspec(dllexport)
#else
#define FIGURE_API __declspec(dllimport)
#endif

#include <iostream>

class Triangle
{
public:
	FIGURE_API Triangle(int a, int b, int c, int A, int B, int C);
	FIGURE_API int get_a();
	FIGURE_API int get_b();
	FIGURE_API int get_c();
	FIGURE_API int get_A();
	FIGURE_API int get_B();
	FIGURE_API int get_C();
	FIGURE_API std::string get_name();

	FIGURE_API virtual void print_info();

protected:
	int a_, b_, c_, A_, B_, C_;
	std::string name;
};

