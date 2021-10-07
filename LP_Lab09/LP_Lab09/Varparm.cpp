#include "Varparm.h"
using namespace std;

namespace Varparm {
	int ivarparm(int n, ...) {
		int compos = 1;
		int* ptr = &n;
		if (n == 0) return 0;
		for (int i = 1; i - 1 != ptr[0]; i++) {
			compos *= ptr[i];
		}
		return compos;
	}

	int svarparm(short n, ...) {
		int compos = 1;
		int* ptr = (int*)& n;
		if (n == 0) return 0;
		for (int i = 1; i - 1 != ptr[0]; i++) {
			compos *= ptr[i];
		}
		return compos;
	}

	double fvarparm(float n, ...) {
		double sum = (double)n;
		double* ptr = (double*)(&n + 1);
		if (n == FLT_MAX) return 0;
		for (int i = 0; ptr[i] != (double)FLT_MAX; i++) {
			sum += ptr[i];
		}
		return sum;
	}

	double dvarparm(double n, ...) {
		double sum = n;
		double* ptr = &n + 1;
		if (n == DBL_MAX) return 0;
		for (int i = 0; ptr[i] != DBL_MAX; i++) {
			sum += ptr[i];
		}
		return sum;
	}
}