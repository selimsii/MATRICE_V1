***********************************************************************************************************************************************************************
**Written by: Selim Can ÖVÜR**

**IDE:Visual Studio 2022**

**Operating System:Windows 10 Pro For Workstations**

**C++ Language Standard:ISO C++14 Standard (/std:c++14)**
***********************************************************************************************************************************************************************

# MATRICE LIBRARY V1:

  **The library works as follows:**
  
1) It takes totally 4 inputs as first adress of the matrice you want to operate (denoted as: adress_type1.adress1, adress_type1.adress1d, adress_type1.adress1f, adress_type1.adress1l w.r.t matrice type), The first adress of the empty matrice that you want to print the result in (denoted as: adress_type2.adress2, adress_type2.adress2d, adress_type2.adress2f, adress_type2.adress2l w.r.t matrice type), row_number and column_number.

2) Then it calls the overloaded constructors to assign the inputs to abstracted variables. 

3) Each result is printed to the second matrice by beginning from the first adress.

4) The second adress types of **int** and **long** type of matrices are defined as float and double respectively to avoid data lost due to variable type.

5) Matrice size is not restricted with a finite number. Operations are available for any mxn sized matrice

6) MATRICE_V1 namespace is used in the library. 

  **Includes the following functions in MATRICE Class:**
 - Random Function (To fill the empty matrice with random values between +- input)<br>
 - Matrice Transpose <br>
 - Scaler Multiplication <br>
 - Vectoral Multiplication <br>
 - Elementwise Multiplication <br>
 - Summation <br>
 - Subtraction <br>
 - Sub Minor Matrice (   (m-1)x(n-1) sub minor matrice of a mxn matrice  ) <br>
 - Minor Value ( Minor Value of Sub Minor Matrice ) <br>
 - Minor Matrice ( The matrice consisting of all possible minor values ) <br>
 - Determinant <br>
 - Cofactor Matrice <br>
 - Adjugate Matrice <br>
 - Inverse Matrice <br>

**The sample code that shows the result of multiplying the scalar 8 by the Arr1 matrix is as follows.**:

```
#include <iostream>
#include "MATRICE.h"

int main() {

	float arr1[5][5] = {0};
	float arr2[5][5] = {0};
	float arr3[5][5] = {0};
	float arr4[5][5] = {0};


	
	MATRICE_V1::MATRICE matrice1(&arr1[0][0], &arr2[0][0], 5, 5);
	MATRICE_V1::MATRICE matrice2(&arr3[0][0], &arr4[0][0], 5, 5);

	matrice1.random(20);                                       //  Fills matrice2 randomly between -20 and 20
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
	*/

	matrice1.scalermultiplication(8.0);          // arr1*8
	

	cout << "The formed Matrice is:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl<< "The Result is:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
```
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
