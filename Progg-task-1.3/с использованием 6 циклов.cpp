#include <iostream>
using namespace std;


#include <iostream>
#include <string>

using namespace std;
int main()
{
	int i, j, k, l, p, o;
	int chislo = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				for (int l = 0; l < 10; l++) {
					for (int p = 0; p < 10; p++) {
						for (int o = 0; o < 10; o++) {
							if (i + j + k == l + p + o)  chislo++;
						}

					}

				}

			}

		}

	}


	setlocale(LC_ALL, "Russian");
	cout << "The number of lucky tickets: " << chislo << endl;
	system("pause");
	return 0;
}
