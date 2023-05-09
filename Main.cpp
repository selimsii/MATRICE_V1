#include <iostream>
#include "MATRICE.h"

int main() {

	float arr1[4][4] = { 0 };
	float arr2[4][4] = { 0 };
	float arr3[4][4] = { 0 };
	float arr4[4][4] = { 0 };



	MATRICE_V1::MATRICE matrice1(&arr1[0][0], &arr2[0][0], 4, 4);
	MATRICE_V1::MATRICE matrice2(&arr3[0][0], &arr4[0][0], 4, 4);

	matrice1.random(10);                                       //  Fills matrice2 randomly between -20 and 20
	/*
	matrice1.adjugate_matrice();                              //  adjugate matrice of arr1
	matrice1.transpose();                                    //  transpose of arr1
	matrice1.cofactor_value(1,1);                           //  cofactor value of arr1    (except 1st row and 1st column)
	matrice1.sub_minor_matrice(1,1);                       //  sub minor matrice of arr1 (except 1st row and 1st column)
	matrice1.minor_matrice();                             //  minor matrice of arr1
	matrice1.cofactor_matrice();                         //  cofactor matrice of arr1
	matrice1.determinant();                             //  determinant of arr1
	matrice1.ewisedivision(&arr3[0][0],5,5);           //  arr1 / arr3 elementwise
	matrice1.minor_value(1,1);			              //  minor value of arr1
	matrice1.ewisemultiplication(&arr3[0][0], 5, 5); // arr1*arr3 elementwise
	matrice1.multiplication(&arr3[0][0],5,5);       // arr1*arr3 matrice multiplication
	matrice1.summation(&arr3[0][0], 5, 5);         // arr1+arr3
	matrice1.subtraction(&arr3[0][0], 5, 5);      // arr1-arr3
	matrice1.scalermultiplication(8.0);          // arr1*8
	*/

	cout << matrice1.cofactor_matrice()<<endl;                             //  cofactor matrice of arr1


	cout << "The formed Matrice is:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << "The Result is:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}