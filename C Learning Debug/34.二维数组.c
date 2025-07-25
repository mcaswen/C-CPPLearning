/*
#include<stdio.h>

int doublejudge(int a[][3]);

int main() {

	
	const int size = 3;
	int a[3][3] = { 1,0,1,
					1,0,0,
					0,1,1 };

	int res = doublejudge(a);
	
	if (!res) {

		if (a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1) printf("xʤ");
		
		else if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0) printf("oʤ");
		
		else if (a[0][2] == 1 && a[1][1] == 1 && a[2][0] == 1) printf("xʤ");
		
		else if (a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0) printf("oʤ");
		
		else printf("ƽ��");

		}
	
	return 0;
	
    }

int doublejudge(int a[][3]) {

	int numofxhang = 0;
	int	numofxlie = 0;
	int numofohang = 0;
	int numofolie = 0;

	for (int i = 0; i < 3; i++) {

		numofxhang = 0; numofohang = 0; numofxlie = 0; numofolie = 0;
		
		for (int j = 0; j < 3; j++) {

			if (a[i][j] == 1) numofxhang++;
			else numofohang++;

			if (a[j][i] == 1) numofxlie++;
			else numofolie++;

		}
		if (numofxhang == 3 || numofxlie == 3) {


			printf("xʤ");
			return 1;
		}
		if (numofohang == 3 || numofolie == 3) {

			printf("oʤ");
			return 1;

		}
	}
	return 0;
}
*/