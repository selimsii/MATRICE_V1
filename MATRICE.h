#ifndef MATRICE_h_INCLUDED
#define MATRICE_h_INCLUDED

#pragma once
#include <iostream>

using namespace std;

namespace MATRICE_V1{

	class MATRICE {

private:
		
	string type;

	int row_number;
	int column_number;

	union adress1 {
		int* adress1;
		float* adress1f;
		long* adress1l;
		double* adress1d;
	};
	union adress2 {
		float* adress2;
		float* adress2f;
		double* adress2d;
		double* adress2l;
	};
	
	adress1 adress_type1;
	adress2 adress_type2;

public:
	MATRICE(int* adr, float* adr2, int row_, int col_);
	MATRICE(float* adr, float* adr2, int row_, int col_);
	MATRICE(double* adr, double* adr2, int row_, int col_);
	MATRICE(long* adr, double* adr2, int row_,int col_);



	//RANDOM CREATOR
	void random(int num);
	void random(float num);
	void random(double num);
	void random(long num);


//MATRIX TRANSPOSE
public:
	void transpose();
private:
	void tp_int();
	void tp_float();
	void tp_double();
	void tp_long();
	

//MATRIX SCALER MULTIPLICATION
public:
	void scalermultiplication(double k);
	void scalermultiplication(float k);
private:
	void scm_int(float k);
	void scm_float(float k);
	void scm_double(double k);
	void scm_long(double k);

	//MATRIX MULTIPLICATION
public:
	int multiplication(int* adress_2, int row2, int column2);
	int multiplication(double* adress_2, int row2, int column2);
	int multiplication(float* adress_2, int row2, int column2);
	int multiplication(long* adress_2, int row2, int column2);
private:
	int mm_int(int* adress_2, int row2, int column2);
	int mm_int(double* adress_2, int row2, int column2);
	int mm_int(long* adress_2, int row2, int column2);
	int mm_int(float* adress_2, int row2, int column2);

	int mm_double(double* adress_2, int row2, int column2);
	int mm_double(int* adress_2, int row2, int column2);
	int mm_double(float* adress_2, int row2, int column2);
	int mm_double(long* adress_2, int row2, int column2);

	int mm_float(float* adress_2, int row2, int column2);
	int mm_float(int* adress_2, int row2, int column2);
	int mm_float(double* adress_2, int row2, int column2);
	int mm_float(long* adress_2, int row2, int column2);

	int mm_long(long* adress_2, int row2, int column2);
	int mm_long(int *adress_2,int row2,int column2);
	int mm_long(double* adress_2, int row2, int column2);
	int mm_long(float* adress_2, int row2, int column2);
public:
	//ELEMENTWISE MULTIPLICATION
	void ewisemultiplication(int* adress3, int row, int column);
	void ewisemultiplication(double* adress3, int row, int column);
	void ewisemultiplication(float* adress3, int row, int column);
	void ewisemultiplication(long* adress3, int row, int column);

	//ELEMENTWISE DIVISION
	void ewisedivision(int* adress3, int row, int column);
	void ewisedivision(double* adress3, int row, int column);
	void ewisedivision(float* adress3, int row, int column);
	void ewisedivision(long* adress3, int row, int column);

	//SUMMATION
	void summation( int* adress3, int row, int column);
	void summation( double* adress3, int row, int column);
	void summation(float* adress3, int row, int column);
	void summation( long* adress3, int row, int column);


	//SUBTRACTION
	void subtraction(int* adress3, int row, int column);
	void subtraction(double* adress3, int row, int column);
	void subtraction(float* adress3, int row, int column);
	void subtraction(long* adress3, int row, int column);

	//SUB MINOR MATRICE OF A MXM MATRICE
public:
	double sub_minor_matrice(int index_row, int index_column);

private:
	int sub_minor_matrice_int(int index_row,int index_column);
	int sub_minor_matrice_double(int index_row, int index_column);
	int sub_minor_matrice_float(int index_row, int index_column);
	int sub_minor_matrice_long(int index_row, int index_column);
	
	//MINOR VALUE
public:
	double minor_value(int index_row, int index_column);
	
	//MINOR MATRICE OF A MXM MATRICE
public:
	int minor_matrice();

private:
	int minor_matrice_int();
	double minor_matrice_double();
	float minor_matrice_float();
	long minor_matrice_long();

	
	//DETERMINANT
public:
	double determinant();

private:
	double determinant_float();
	double determinant_double();
	


public:
	//COFACTOR MATRICE OF A MXM MATRICE
	int cofactor_matrice();
private:
	int cofactor_matrice_int();
	double cofactor_matrice_double();
	float cofactor_matrice_float();
	long cofactor_matrice_long();



	//COFACTOR VALUE OF A MXM MATRICE

public:
	int cofactor_value(int index_row, int index_column);

private:
	int cofactor_value_int(int index_row,int index_column);
	double cofactor_value_double(int index_row, int index_column);
	float cofactor_value_float(int index_row, int index_column);
	long cofactor_value_long(int index_row, int index_column);

	//ADJUGATE MATRIX OF A MXM MATRICE
public:
	int adjugate_matrice();
private:
	int adjugate_matrice_int();
	double adjugate_matrice_double();
	float adjugate_matrice_float();
	long adjugate_matrice_long();

	//INVERSE MATRICE OF A MXM MATRICE
public:
	int inverse_matrice();
private:
	double inverse_matrice_double();
	float inverse_matrice_float();
	int inverse_matrice_int();
	long inverse_matrice_long();

	
	
};
}
#endif // !1MATRICE_h_INCLUDED
