#include "Varparm.h"
#include "Call.h"

using namespace std;
using namespace Varparm;
using namespace Call;

int defaultparm(int x1, int x2, int x3, int x4, int x5, int x6=0, int x7=0 ) {
	if (x6 != NULL && x7 != NULL) {
		return (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 7;
	}
	else{ return (x1 + x2 + x3 + x4 + x5) / 5; }
}

int main() {
	setlocale(LC_ALL, "RU");

	int ipar1 = ivarparm(5);
	int ipar2 = ivarparm(7, 17);
	int ipar3 = ivarparm(5, 3, 17);
	int ipar7 = ivarparm(6, 9, 1, 4, 11, 2, 8);
	cout <<" ~~~~~~~~~~~~~~~ivarparm~~~~~~~~~~~~~~~ " << endl;
	cout << "ivarparm c 1 элментом: " << ipar1 << endl;
	cout << "ivarparm c 2 элментоами: " << ipar2 << endl;
	cout << "ivarparm c 3 элментами: " << ipar3 << endl;
	cout << "ivarparm c 7 элментами: " << ipar7 << endl << endl;

	int spar1 = svarparm(0);
	int spar2 = svarparm(1, 5);
	int spar3 = svarparm(2, 2, 5);
	int spar7 = svarparm(6, 5, 3, 4, 1, 2, 7);
	cout << " ~~~~~~~~~~~~~~~svarparm~~~~~~~~~~~~~~~ " << endl;
	cout << "svarparm c 1 элментом: " << spar1 << endl;
	cout << "svarparm c 2 элментоами: " << spar2 << endl;
	cout << "svarparm c 3 элментами: " << spar3 << endl;
	cout << "svarparm c 7 элментами: " << spar7 << endl << endl;

	double fpar1 = fvarparm(FLT_MAX);
	double fpar2 = fvarparm(1.45, FLT_MAX);
	double fpar3 = fvarparm(2.84, 15.4, FLT_MAX);
	double fpar7 = fvarparm(6.74, 42.35, 91.15, 4.6, 5.24, 2.0, FLT_MAX);
	cout << " ~~~~~~~~~~~~~~~fvarparm~~~~~~~~~~~~~~~ " << endl;
	cout << "fvarparm c 1 элментом: " << fpar1 << endl;
	cout << "fvarparm c 2 элментоами: " << fpar2 << endl;
	cout << "fvarparm c 3 элментами: " << fpar3 << endl;
	cout << "fvarparm c 7 элментами: " << fpar7 << endl << endl;
	cout << " ~~~~~~~~~~~~~~~dvarparm~~~~~~~~~~~~~~~ " << endl;
	double dpar1 = dvarparm(DBL_MAX);
	double dpar2 = dvarparm(1.45, DBL_MAX);
	double dpar3 = dvarparm(2.84, 15.4, DBL_MAX);
	double dpar7 = dvarparm(6.74, 42.35, 1.15, 4.6, 25.24, 2.0, DBL_MAX);
	cout << "dvarparm c 1 элментом: " << dpar1 << endl;
	cout << "dvarparm c 2 элментоами: " << dpar2 << endl;
	cout << "dvarparm c 3 элментами: " << dpar3 << endl;
	cout << "dvarparm c 7 элментами: " << dpar7 << endl << endl;


	int c1 = 2, c2 = 4, c3 = 5;
	int call1 = cdevl(c1, c2, c3);
	int call2 = cstd(2, 4, c3);
	int call3 = cfst(2, 4, 5);
	cout << " ~~~~~~~~~~~~~~~cdevl, cstd,cfst~~~~~~~~~~~~~~~ " << endl;
	cout << "cdevl = " << call1 << endl;
	cout << "cstd = " << call2 << endl;
	cout << "cfst = " << call3 << endl << endl;

	float defaultparm1 = defaultparm(1, 7, 3, 4, 5);
	float defaultparm2 = defaultparm(3, 9, 8, 4, 5, 6, 7);
	cout << " ~~~~~~~~~~~~~~~defaultparm~~~~~~~~~~~~~~~ " << endl;
	cout << "defaultparm с 5-ю элементами  = " << defaultparm1 << endl;
	cout << "defaultparm с 7-ю элементами  = " << defaultparm2 << endl;

	system("pause");
	return 0;
}

