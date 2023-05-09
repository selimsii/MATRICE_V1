#include <iostream>
#include <iomanip>
#include "MATRICE.h"

using namespace std;


MATRICE_V1::MATRICE::MATRICE(int* adr, float* adr2, int row_, int col_) {
		adress_type1.adress1 = adr;
		adress_type2.adress2 = adr2;
		row_number = row_;
		column_number = col_;
		type = "int";
	}
MATRICE_V1::MATRICE::MATRICE(float* adr, float* adr2, int row_, int col_) {
		adress_type1.adress1f = adr;
		adress_type2.adress2f = adr2;
		row_number = row_;
		column_number = col_;
		type = "float";
	}
MATRICE_V1::MATRICE::MATRICE(double* adr, double* adr2, int row_, int col_) {
		adress_type1.adress1d = adr;
		adress_type2.adress2d = adr2;
		row_number = row_;
		column_number = col_;
		type = "double";
	}
MATRICE_V1::MATRICE::MATRICE(long* adr, double* adr2, int row_, int col_) {
		adress_type1.adress1l = adr;
		adress_type2.adress2l = adr2;
		row_number = row_;
		column_number = col_;
		type = "long";
	}

	//RANDOM VALUE CREATOR
	void MATRICE_V1::MATRICE::random(int num) {
		srand(time(NULL));
		if (type == "int") {
			for (int i = 0; i < row_number*column_number; i++) {
					*(adress_type1.adress1 + i)=(rand() % (2*num+1))-num;
			}
		}
		else if (type == "float") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1f + i) = (rand() % (2*num + 1))-num;

			}
		}
		else if (type == "double") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = (rand() % (2 * num + 1)) - num;

			}
		}
		else if (type == "long") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1l + i) = (rand() % (2 * num + 1)) - num;
			}
		}
		else {
			cout << "The type must be int, float, double or long";
		}
	}
	void MATRICE_V1::MATRICE::random(long num) {
		srand(time(NULL));
		if (type == "int") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1 + i) = (rand() % (2 * num + 1)) - num;

			}
		}
		else if (type == "float") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1f + i) = (rand() % (2 * num + 1)) - num;

			}
		}
		else if (type == "double") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = (rand() % (2 * num + 1)) - num;

			}
		}
		else if (type == "long") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1l + i) = (rand() % (2 * num + 1)) - num;
			}
		}
		else {
			cout << "The type must be int, float, double or long";
		}
	}
	void MATRICE_V1::MATRICE::random(float num) {

		srand(time(NULL));
		if (type == "int") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1 + i) = rand() % (static_cast<int>(2*num+1-num));

			}
		}
		else if (type == "float") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1f + i) = rand() % (static_cast<int>(2 * num + 1 - num));

			}
		}
		else if (type == "double") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = rand() % (static_cast<int>(2 * num + 1 - num));

			}
		}
		else if (type == "long") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1l + i) = rand() % (static_cast<int>(2 * num + 1 - num));
			}
		}
		else {
			cout << "The type must be int, float, double or long";
		}

	}
	void MATRICE_V1::MATRICE::random(double num) {
		srand(time(NULL));
		if (type == "int") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1 + i) = rand() % (static_cast<int>(2 * num + 1 - num));

			}
		}
		else if (type == "float") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1f + i) = rand() % (static_cast<int>(2 * num + 1 - num));

			}
		}
		else if (type == "double") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = rand() % (static_cast<int>(2 * num + 1 - num));

			}
		}
		else if (type == "long") {
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1l + i) = rand() % (static_cast<int>(2 * num + 1 - num));
			}
		}
		else {
			cout << "The type must be int, float, double or long";
		}
	}

	//TRANSPOSE
	void MATRICE_V1::MATRICE::transpose() {

		if(type=="int"){
			tp_int();
		}
		else if (type=="double") {
			tp_double();
		}
		else if (type=="float") {
			tp_float();
		}
		else if (type=="long") {
			tp_long();
		}
		else {
			cout << "The type must be int, float, double or long";
		}
	}

	void MATRICE_V1::MATRICE::tp_int() {

		int k = 0; int y = 0; int c = 0;
		int* temp = new int[row_number * column_number];

		for (int i = 0; i < column_number; i++) {
			for (int j = 0; j < row_number; j++) {
				*(temp + k) = *(adress_type1.adress1 + c + y * column_number);
				k++;
				y++;
			}
			y = 0;
			c++;
		}
		for (int d = 0; d < row_number * column_number; d++) {
			*(adress_type2.adress2 + d) = *(temp + d);
		}
	}
	void MATRICE_V1::MATRICE::tp_float() {

		int k = 0; int y = 0; int c = 0;
		float* temp = new float[row_number * column_number];

		for (int i = 0; i < column_number; i++) {
			for (int j = 0; j < row_number; j++) {
				*(temp + k) = *(adress_type1.adress1f + c + y * column_number);
				k++;
				y++;
			}
			y = 0;
			c++;
		}
		for (int d = 0; d < row_number * column_number; d++) {
			*(adress_type2.adress2f + d) = *(temp + d);
		}
	}
	void MATRICE_V1::MATRICE::tp_double() {

		int k = 0; int y = 0; int c = 0;
		double* temp = new double[row_number * column_number];

		for (int i = 0; i < column_number; i++) {
			for (int j = 0; j < row_number; j++) {
				*(temp + k) = *(adress_type1.adress1d + c + y * column_number);
				k++;
				y++;
			}
			y = 0;
			c++;
		}
		for (int d = 0; d < row_number * column_number; d++) {
			*(adress_type2.adress2d + d) = *(temp + d);
		}
	}
	void MATRICE_V1::MATRICE::tp_long() {

		int k = 0; int y = 0; int c = 0;
		long* temp = new long[row_number * column_number];

		for (int i = 0; i < column_number; i++) {
			for (int j = 0; j < row_number; j++) {
				*(temp + k) = *(adress_type1.adress1l + c + y * column_number);
				k++;
				y++;
			}
			y = 0;
			c++;
		}
		for (int d = 0; d < row_number * column_number; d++) {
			*(adress_type2.adress2l + d) = *(temp + d);
		}
	}
	

	//SCALER MULTIPLICATION
	void MATRICE_V1::MATRICE::scalermultiplication(double k) {
		if (type == "int") {
			scm_int(k);
		}
		else if (type == "float") {
			scm_float(k);
		}
		else if (type == "double") {
			scm_double(k);
		}
		else if (type == "long") {
			scm_long(k);
		}
		else {
			cout << "The type must be int, float, double or long";
		}
	}
	void MATRICE_V1::MATRICE::scalermultiplication(float k) {
		if (type == "int") {
			scm_int(k);
		}
		else if (type == "float") {
			scm_float(k);
		}
		else if (type == "double") {
			scm_double(k);
		}
		else if (type == "long") {
			scm_long(k);
		}
		else {
			cout << "The type must be int, float, double or long";
		}
	}

	void MATRICE_V1::MATRICE::scm_int(float k){
		for (int i = 0; i < row_number*column_number; i++) {
			*(adress_type2.adress2 + i) = static_cast<float>(*(adress_type1.adress1 + i))*k;
		}
	}
	void MATRICE_V1::MATRICE::scm_double(double k) {
		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) * k;
		}
	}
	void MATRICE_V1::MATRICE::scm_float(float k) {
		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) * k;
		}
	}
	void MATRICE_V1::MATRICE::scm_long(double k) {
		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type2.adress2l + i) = static_cast<double>(*(adress_type1.adress1l + i)) *k;
		}
	}
	
	//MATRIX MULTIPLICATION
	int MATRICE_V1::MATRICE::multiplication(int* adress_2, int row2, int column2) {

		if (type == "int") {
			switch (mm_int(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "double") {
			switch (mm_double(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "float") {
			switch (mm_float(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "long") {
			switch (mm_long(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else {
			cout << "The type must be int, float, double or long";
			return 0;
		}
	
	}
	int MATRICE_V1::MATRICE::multiplication(double* adress_2, int row2, int column2) {

		if (type == "int") {
			switch (mm_int(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "double") {
			switch (mm_double(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "float") {
			switch (mm_float(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "long") {
			switch (mm_long(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else {
			cout << "The type must be int, float, double or long";
			return 0;
		}

	}
	int MATRICE_V1::MATRICE::multiplication(float* adress_2, int row2, int column2) {

		if (type == "int") {
			switch (mm_int(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "double") {
			switch (mm_double(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "float") {
			switch (mm_float(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "long") {
			switch (mm_long(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else {
			cout << "The type must be int, float, double or long";
			return 0;
		}

	}
	int MATRICE_V1::MATRICE::multiplication(long* adress_2, int row2, int column2) {

		if (type == "int") {
			switch (mm_int(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "double") {
			switch (mm_double(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "float") {
			switch (mm_float(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else if (type == "long") {
			switch (mm_long(adress_2, row2, column2)) {
			case 1:return 1; break;
			case -1:return -1; break;
			}
		}
		else {
			cout << "The type must be int, float, double or long";
			return 0;
		}

	}
	int MATRICE_V1::MATRICE::mm_int(int *adress_2,int row2,int column2){
		int y = 0; float value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1 + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2 + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_int(double* adress_2, int row2, int column2) {
		int y = 0; float value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1 + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2 + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_int(float* adress_2, int row2, int column2) {
		int y = 0; float value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1 + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2 + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_int(long* adress_2, int row2, int column2) {
		int y = 0; float value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1 + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2 + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_double(double* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1d + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2d + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_double(int* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1d + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2d + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_double(float* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1d + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2d + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_double(long* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1d + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2d + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_float(float* adress_2, int row2, int column2) {
		int y = 0; float value = 0;int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1f + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2f + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_float(int* adress_2, int row2, int column2) {
		int y = 0; float value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1f + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2f + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_float(double* adress_2, int row2, int column2) {
		int y = 0; float value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1f + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2f + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_float(long* adress_2, int row2, int column2) {
		int y = 0; float value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1f + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2f + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_long(long* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
					return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1l + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2l + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_long(int* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1l + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2l + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_long(double* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1l + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2l + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}
	int MATRICE_V1::MATRICE::mm_long(float* adress_2, int row2, int column2) {
		int y = 0; double value = 0; int selection = 0;

		if (column_number != row2) {
			return -1;
		}

		else {
			for (int k = 0; k < row_number; k++) {
				for (int i = 0; i < column2; i++) {
					selection = i % column2;
					for (int j = 0; j < column_number; j++) {
						value += *(adress_type1.adress1l + j + column_number * k) * *(adress_2 + selection + column2 * j);
					}
					*(adress_type2.adress2l + y) = value;
					y++;
					value = 0;
				}
			}
			return 1;
		}
	}


	//ELEMENTWISE MULTIPLICATION
	void MATRICE_V1::MATRICE::ewisemultiplication(int* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "The type must be int, float, double or long";
		}
		
		
	}
	void MATRICE_V1::MATRICE::ewisemultiplication(double* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::ewisemultiplication( float* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::ewisemultiplication( long* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) * *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	
	//ELEMENTWISE DIVISION
	void MATRICE_V1::MATRICE::ewisedivision( int* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::ewisedivision( double* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::ewisedivision( float* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::ewisedivision( long* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) / *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	
	//SUMMATION
	void MATRICE_V1::MATRICE::summation(int* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::summation(double* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::summation(float* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::summation(long* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) + *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	

	//SUBTRACTION
	void MATRICE_V1::MATRICE::subtraction(int* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) *- *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::subtraction(double* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::subtraction(float* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	void MATRICE_V1::MATRICE::subtraction(long* adress3, int row, int column) {
		if (type == "int") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2 + i) = *(adress_type1.adress1 + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "double") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2d + i) = *(adress_type1.adress1d + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "float") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2f + i) = *(adress_type1.adress1f + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else if (type == "long") {
			if (row_number == row && column_number == column) {
				for (int i = 0; i < row * column; i++) {
					*(adress_type2.adress2l + i) = *(adress_type1.adress1l + i) - *(adress3 + i);
				}
			}
			else {
				cout << "Indexes must have same length";
			}
		}
		else {
			cout << "Indexes must have same length";
		}
	}
	
	//SUB MINOR MATRICES OF MXM MATRICE

	double MATRICE_V1::MATRICE::sub_minor_matrice(int index_row, int index_column) {
		if(type=="int") {
			return sub_minor_matrice_int(index_row,index_column);
		}
		else if (type == "double") {
			return sub_minor_matrice_double(index_row, index_column);
		}
		else if (type=="float") {
			return sub_minor_matrice_float(index_row, index_column);
		}
		else if (type == "long") {
			return sub_minor_matrice_long(index_row, index_column);
		}
		else {
			return -1;cout << "The type must be int, float, double or long";
		}
		
	}
	int MATRICE_V1::MATRICE::sub_minor_matrice_int(int index_row,int index_column) {
		int k = 0;
		if (row_number == column_number) {
			for (int i = 0; i < row_number * column_number; i++) {
				if ((i<(index_row - 1) * row_number || i>(index_row) * row_number - 1) && i % row_number != index_column - 1) {
					*(adress_type2.adress2 + k) = *(adress_type1.adress1 + i);
					k++;
				}
				else {
					continue;
				}
			}
			return 1;
		}
		else {
			cout << "The matrice must be square matrice";
			return -1;
		}
	}
	int MATRICE_V1::MATRICE::sub_minor_matrice_double(int index_row, int index_column) {
		int k = 0;
		if (row_number == column_number) {
			for (int i = 0; i < row_number * column_number; i++) {
				if ((i<(index_row - 1) * row_number || i>(index_row) * row_number - 1) && i % row_number != index_column - 1) {
					*(adress_type2.adress2d + k) = *(adress_type1.adress1d + i);
					k++;
				}
				else {
					continue;
				}
			}
			return 1;
		}
		else {
			cout << "The matrice must be square matrice";
			return -1;
		}
	}
	int MATRICE_V1::MATRICE::sub_minor_matrice_float(int index_row, int index_column) {
		int k = 0;
		if (row_number == column_number) {
			for (int i = 0; i < row_number * column_number; i++) {
				if ((i<(index_row - 1) * row_number || i>(index_row) * row_number - 1) && i % row_number != index_column - 1) {
					*(adress_type2.adress2f + k) = *(adress_type1.adress1f + i);
					k++;
				}
				else {
					continue;
				}
			}
			return 1;
		}
		else {
			cout << "The matrice must be square matrice";
			return -1;
		}
	}
	int MATRICE_V1::MATRICE::sub_minor_matrice_long(int index_row, int index_column) {
		int k = 0;
		if (row_number == column_number) {
			for (int i = 0; i < row_number * column_number; i++) {
				if ((i<(index_row - 1) * row_number || i>(index_row) * row_number - 1) && i % row_number != index_column - 1) {
					*(adress_type2.adress2l + k) = *(adress_type1.adress1l + i);
					k++;
				}
				else {
					continue;
				}
			}
			return 1;
		}
		else {
			cout << "The matrice must be square matrice";
			return -1;
		}
	}

	
	//DETERMINANT OF A MXM MATRICE


	double MATRICE_V1::MATRICE::determinant() {

		if (type == "float") {
			return determinant_float();
		}
		else if (type == "double") {
			return determinant_double();
		}
		else if (type == "int") {

			type = "float";
			float memory = 0;

			adress_type1.adress1f = new float[row_number * column_number];
			adress_type2.adress2f = new float[row_number * column_number];

			for (int i = 0; i < row_number * column_number; i++){
				*(adress_type1.adress1f + i) = static_cast<float>(*(adress_type1.adress1 + i));
				*(adress_type2.adress2f + i) = static_cast<float>(*(adress_type2.adress2 + i));
			}

			memory = determinant_float();

			type = "int";
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1f + i) = 0;
				*(adress_type2.adress2f + i) = 0;
			}
			delete[]adress_type1.adress1f;
			delete[]adress_type2.adress2f;
			return memory;
		}
		else if (type == "long") {

			type = "double";
			double memory = 0;

			adress_type1.adress1d = new double[row_number * column_number];
			adress_type2.adress2d = new double[row_number * column_number];

			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = static_cast<double>(*(adress_type1.adress1l + i));
				*(adress_type2.adress2d + i) = static_cast<double>(*(adress_type2.adress2l + i));
			}

			memory = determinant_double();
			type = "long";

			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = 0;
				*(adress_type2.adress2d + i) = 0;
			}

			delete[]adress_type1.adress1f;
			delete[]adress_type2.adress2f;
			return memory;
		}
		else {
			return -1;
			cout << "The type must be int, float, double or long";
		}
	}
	double MATRICE_V1::MATRICE::determinant_float() {

		if (row_number != column_number) {
			cout << "The matrix must be square.\n";
			return -1;
		}

		else {

			float memory = 0;
			if (row_number == 1 && column_number == 1) { return *adress_type1.adress1f; }

			else if (row_number == 2 && column_number == 2) {
				memory = (*(adress_type1.adress1f) * *(adress_type1.adress1f + 3)) - (*(adress_type1.adress1f + 1) * *(adress_type1.adress1f + 2));
			}
			else {
				// Allocate memory for temporary matrices
				float* adress2f_temp = new float[(column_number - 1) * (column_number - 1)];
				float* adress1f_temp = new float[(column_number - 1) * (column_number - 1)];


				for (int i = 0; i < row_number; i++) {
					// Create sub-matrix and copy its contents into a 1D array
					sub_minor_matrice(1, i + 1);
					for (int j = 0; j < (column_number - 1) * (column_number - 1); j++) {
						*(adress1f_temp + j) = *(adress_type2.adress2f + j);
					}
					// Create temporary matrix object and calculate its determinant
					MATRICE sub_object(adress1f_temp, adress2f_temp, row_number - 1, column_number - 1);
					float det = sub_object.determinant();

					// Add the (i,j) element times its cofactor to the determinant
					if (i % 2 == 0) {
						memory += *(adress_type1.adress1f + i) * det;
					}
					else {
						memory -= *(adress_type1.adress1f + i) * det;
					}
				}
				for (int i = 0; i < row_number * column_number; i++) {
					*(adress_type2.adress2f + i) = 0;
				}
				// Deallocate memory for temporary matrices
				delete[] adress1f_temp;
				delete[] adress2f_temp;
			}
			return memory;
		}
	}
	double MATRICE_V1::MATRICE::determinant_double() {

		if (row_number != column_number) {
			cout << "The matrix must be square.\n";
			return -1;
		}
		else {

			double memory = 0;
			if (row_number == 1 && column_number == 1) { return *adress_type1.adress1d; }

			else if (row_number == 2 && column_number == 2) {
				memory = (*(adress_type1.adress1d) * *(adress_type1.adress1d + 3)) - (*(adress_type1.adress1d + 1) * *(adress_type1.adress1d + 2));
			}
			else {
				// Allocate memory for temporary matrices
				double* adress2d_temp = new double[(column_number - 1) * (column_number - 1)];
				double* adress1d_temp = new double[(column_number - 1) * (column_number - 1)];


				for (int i = 0; i < row_number; i++) {
					// Create sub-matrix and copy its contents into a 1D array
					sub_minor_matrice(1, i + 1);
					for (int j = 0; j < (column_number - 1) * (column_number - 1); j++) {
						*(adress1d_temp + j) = *(adress_type2.adress2d + j);
					}
					// Create temporary matrix object and calculate its determinant
					MATRICE sub_object(adress1d_temp, adress2d_temp, row_number - 1, column_number - 1);
					double det = sub_object.determinant();

					// Add the (i,j) element times its cofactor to the determinant
					if (i % 2 == 0) {
						memory += *(adress_type1.adress1d + i) * det;
					}
					else {
						memory -= *(adress_type1.adress1d + i) * det;
					}
				}
				for (int i = 0; i < row_number * column_number; i++) {
					*(adress_type2.adress2d + i) = 0;
				}
				// Deallocate memory for temporary matrices
				delete[] adress1d_temp;
				delete[] adress2d_temp;
			}
			return memory;

		}
}


	//MINOR VALUE OF NXN MATRICE



	double MATRICE_V1::MATRICE::minor_value(int index_row, int index_column) {
		if (type == "double" || type == "long" || type == "float" || type == "int") {

			double* ad_1d = new double[(row_number - 1) * (column_number - 1)];
			double* ad_2d = new double[(row_number - 1) * (column_number - 1)];

			double minor_value = 0;

			//CALLING SUB MINOR MATRICE BEFORE CALCULATING THE MINOR VALUE OF THE MATRICE
			sub_minor_matrice(index_row, index_column);

			
			if (type == "double") {
				//Writing the values into another (m-1)x(m-1) ad_1d
				for (int i = 0; i < (row_number - 1) * (column_number - 1); i++) {
					*(ad_1d + i) = (*(adress_type2.adress2d + i));
				}
				//Reseting the mxm adress_type2.adress2d since the sub_minor_matrice filled it
				for (int i = 0; i < (row_number) * (column_number); i++) {
					*(adress_type2.adress2d + i) = 0;
				}
			}
			else if (type == "float") {
				//Writing the values into another (m-1)x(m-1) ad_1d
				for (int i = 0; i < (row_number - 1) * (column_number - 1); i++) {
					*(ad_1d + i) = static_cast<double>(*(adress_type2.adress2f + i));
				}
				//Reseting the mxm adress_type2.adress2f since the sub_minor_matrice filled it
				for (int i = 0; i < (row_number) * (column_number); i++) {
					*(adress_type2.adress2f + i) = 0;
				}
			}
			else if (type == "long") {
				//Writing the values into another (m-1)x(m-1) ad_1d
				for (int i = 0; i < (row_number - 1) * (column_number - 1); i++) {
					*(ad_1d + i) = static_cast<double>(*(adress_type2.adress2l + i));
				}
				//Reseting the mxm adress_type2.adress2l since the sub_minor_matrice filled it
				for (int i = 0; i < (row_number) * (column_number); i++) {
					*(adress_type2.adress2l + i) = 0;
				}
			}
			else if (type == "int") {
				//Writing the values into another (m-1)x(m-1) ad_1d
				for (int i = 0; i < (row_number - 1) * (column_number - 1); i++) {
					*(ad_1d + i) = static_cast<double>(*(adress_type2.adress2 + i));
				}
				//Reseting the mxm adress_type2.adress2 since the sub_minor_matrice filled it
				for (int i = 0; i < (row_number) * (column_number); i++) {
					*(adress_type2.adress2 + i) = 0;
				}
			}
			else {
				cout << "Type must be float, double, int or long";
			}

			//CREATING TEMPORARY MATRICE OBJECT TO CALCULATE SUB DETERMINANT
			MATRICE sub(ad_1d, ad_2d, row_number - 1, column_number - 1);

			minor_value= sub.determinant();

			delete[] ad_1d;
			delete[] ad_2d;
			

			return minor_value;
		}
		else {
			return -1;
			cout << "Type must be float, double, int or long";
		}

	}




	//MINOR MATRICE OF NXN MATRICE
	int MATRICE_V1::MATRICE::minor_matrice() {
		if (type == "double") {
			return minor_matrice_double();
		}
		else if (type == "float") {
			return minor_matrice_float();
		}
		else if (type == "long") {
			return minor_matrice_long();
		}
		else if (type == "int") {
			return minor_matrice_int();
		}
		else {
			cout << "Type must be float, double, int or long";
		}
	}

	int MATRICE_V1::MATRICE::minor_matrice_int() {
		int* temp = new int[row_number * column_number];

		if (row_number == column_number) {
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(temp + i * (row_number)+j) = minor_value(i + 1, j + 1);
				}
			}
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(adress_type2.adress2 + i * (row_number)+j) = *(temp + i * (row_number)+j);
				}
			}
			delete[] temp;
			return 1;
		}
		else {
			cout << "The row length and column length must match";
			return -1;
		}
	}

	float MATRICE_V1::MATRICE::minor_matrice_float() {
		float* temp = new float[row_number * column_number];

		if (row_number == column_number) {
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(temp + i * (row_number)+j) = minor_value(i + 1, j + 1);
				}
			}
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(adress_type2.adress2f + i * (row_number)+j) = *(temp + i * (row_number)+j);
				}
			}
			delete[] temp;
			return 1;
		}
		else {
			cout << "The row length and column length must match";
			return -1;
		}
	}
	double MATRICE_V1::MATRICE::minor_matrice_double() {
		double* temp = new double[row_number * column_number];

		if (row_number == column_number) {
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(temp + i * (row_number)+j) = minor_value(i + 1, j + 1);
				}
			}
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(adress_type2.adress2d + i * (row_number)+j) = *(temp + i * (row_number)+j);
				}
			}
			delete[] temp;
			return 1;
		}
		else {
			cout << "The row length and column length must match";
			return -1;
		}
	}
	long MATRICE_V1::MATRICE::minor_matrice_long() {
		long* temp = new long[row_number * column_number];

		if (row_number == column_number) {
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(temp + i * (row_number)+j) = minor_value(i + 1, j + 1);
				}
			}
			for (int i = 0; i < row_number; i++) {
				for (int j = 0; j < row_number; j++) {
					*(adress_type2.adress2l + i * (row_number)+j) = *(temp + i * (row_number)+j);
				}
			}
			delete[] temp;
			return 1;
		}
		else {
			cout << "The row length and column length must match";
			return -1;
		}
	}
	
	//COFACTOR MATRICE
	int MATRICE_V1::MATRICE::cofactor_matrice() {
		if (row_number == column_number) {
			if (type == "double") {
				return cofactor_matrice_double();
			}
			else if (type == "float") {
				return cofactor_matrice_float();
			}
			else if (type == "long") {
				return cofactor_matrice_long();
			}
			else if (type == "int") {
				return cofactor_matrice_int();
			}
			else {
				return -1;
				cout << "Type must be float, double, int or long";
			}
		}
		else {
			cout << "MATRICE must be a square matrice";
			return -1;
		}

	}
	int MATRICE_V1::MATRICE::cofactor_matrice_int() {

		minor_matrice();

		for (int i = 0; i < row_number; i++) {
			for (int j = 0; j < column_number; j++) {
				*(adress_type2.adress2 + i * row_number + j) *= pow(-1, (i + 1 + j + 1));
			}
		}
		return 1;
	}
	double MATRICE_V1::MATRICE::cofactor_matrice_double() {

		minor_matrice();

		for (int i = 0; i < row_number; i++) {
			for (int j = 0; j < column_number; j++) {
				*(adress_type2.adress2d + i * row_number + j) *= pow(-1, (i + 1 + j + 1));
			}
		}
		return 1;
	}
	float MATRICE_V1::MATRICE::cofactor_matrice_float() {
		minor_matrice();
		for (int i = 0; i < row_number; i++) {
			for (int j = 0; j < column_number; j++) {
				*(adress_type2.adress2f + i * row_number + j) *= pow(-1, (i + 1 + j + 1));
			}
		}
		return 1;
	}
	long MATRICE_V1::MATRICE::cofactor_matrice_long() {
		minor_matrice();

		for (int i = 0; i < row_number; i++) {
			for (int j = 0; j < column_number; j++) {
				*(adress_type2.adress2l + i * row_number + j) *= pow(-1, (i + 1 + j + 1));
			}
		}
		return 1;
	}

	//COFACTOR VALUE OF A MXM MATRICE
	int MATRICE_V1::MATRICE::cofactor_value(int index_row, int index_column) {
		if (row_number == column_number) {
			if (type == "double") {
				return cofactor_value_double(index_row,index_column);
			}
			else if (type == "float") {
				return cofactor_value_float(index_row,index_column);
			}
			else if (type == "long") {
				return cofactor_value_long(index_row,index_column);
			}
			else if (type == "int") {
				return cofactor_value_int(index_row,index_column);
			}
			else {
				return -1;
				cout << "Type must be float, double, int or long";
			}
		}
		else {
			cout << "MATRICE must be a square matrice";
			return -1;
		}
	}
	int MATRICE_V1::MATRICE::cofactor_value_int(int index_row, int index_column) {
		return pow(-1,index_column + index_row) * minor_value(index_row,index_column);
	}
	double MATRICE_V1::MATRICE::cofactor_value_double(int index_row, int index_column) {
		return pow(-1, index_column + index_row) * minor_value(index_row, index_column);
	}
	float MATRICE_V1::MATRICE::cofactor_value_float(int index_row, int index_column) {
		return pow(-1, index_column + index_row) * minor_value(index_row, index_column);
	}
	long MATRICE_V1::MATRICE::cofactor_value_long(int index_row, int index_column) {
		return pow(-1, index_column + index_row) * minor_value(index_row, index_column);
	}
	
	//ADJUGATE MATRIX OF A MXM MATRICE
	int MATRICE_V1::MATRICE::adjugate_matrice() {
		if (row_number == column_number) {
			if (type == "double") {
				return adjugate_matrice_double();
			}
			else if (type == "float") {
				return adjugate_matrice_float();
			}
			else if (type == "long") {
				return adjugate_matrice_long();
			}
			else if (type == "int") {
				return adjugate_matrice_int();
			}
			else {
				return -1;
				cout << "Type must be float, double, int or long";
			}
		}
		else {
			cout << "MATRICE must be a square matrice";
			return -1;
		}
	}
	int MATRICE_V1::MATRICE::adjugate_matrice_int() {

		cofactor_matrice();
		int* temp = new int[row_number * column_number];

		for (int i = 0; i < row_number * column_number; i++) {
			*(temp + i) = *(adress_type1.adress1+i);
			*(adress_type1.adress1+i) = *(adress_type2.adress2+i);
		}
		transpose();
		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1 + i) = *(temp + i);
		}
		delete[] temp;
		return 1;
	}
	double MATRICE_V1::MATRICE::adjugate_matrice_double() {

		cofactor_matrice();
		double* temp = new double[row_number * column_number];

		for (int i = 0; i < row_number * column_number; i++) {
			*(temp + i) = *(adress_type1.adress1d + i);
			*(adress_type1.adress1d + i) = *(adress_type2.adress2d + i);
		}
		transpose();
		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1d + i) = *(temp + i);
		}
		delete[] temp;
		return 1;
	}
	float MATRICE_V1::MATRICE::adjugate_matrice_float() {

		cofactor_matrice();
		float* temp = new float[row_number * column_number];

		for (int i = 0; i < row_number * column_number; i++) {
			*(temp + i) = *(adress_type1.adress1f + i);
			*(adress_type1.adress1f + i) = *(adress_type2.adress2f + i);
		}
		transpose();
		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1f + i) = *(temp + i);
		}
		delete[] temp;
		return 1;
	}
	long MATRICE_V1::MATRICE::adjugate_matrice_long() {

		cofactor_matrice();
		long* temp = new long[row_number * column_number];

		for (int i = 0; i < row_number * column_number; i++) {
			*(temp + i) = *(adress_type1.adress1l + i);
			*(adress_type1.adress1l + i) = *(adress_type2.adress2l + i);
		}
		transpose();
		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1l + i) = *(temp + i);
		}
		delete[] temp;
		return 1;
	}
	
	//INVERSE MATRICE
	int MATRICE_V1::MATRICE::inverse_matrice(){
		if (row_number == column_number) {
			if (type == "double") {
				return inverse_matrice_double();
			}
			else if (type == "float") {
				return inverse_matrice_float();
			}
			else if (type == "long") {
				return inverse_matrice_long();
			}
			else if (type == "int") {
				return inverse_matrice_int();
			}
			else {
				return -1;
				cout << "Type must be float, double, int or long";
			}
		}
		else {
			cout << "MATRICE must be a square matrice";
			return -1;
		}
}

	double MATRICE_V1::MATRICE::inverse_matrice_double() {

		double x = 0;

			x = determinant();
			adjugate_matrice();
			double* temp = new double[row_number * column_number];
			for (int i = 0; i < row_number * column_number; i++) {
				*(temp + i) = *(adress_type1.adress1d + i);
			}
			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = *(adress_type2.adress2d + i);
			};
			scalermultiplication(1 / x);

			for (int i = 0; i < row_number * column_number; i++) {
				*(adress_type1.adress1d + i) = *(temp + i);
			}
			delete[]temp;

		return 1;
	}
	float MATRICE_V1::MATRICE::inverse_matrice_float() {

		float x = 0;
		x = determinant();
		adjugate_matrice();

		
		float* temp = new float[row_number * column_number];
		for (int i = 0; i < row_number * column_number; i++) {
			*(temp + i) = *(adress_type1.adress1f + i);
		}

		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1f + i) = *(adress_type2.adress2f + i);
		};
		scalermultiplication(1 / x);

		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1f + i) = *(temp + i);
		}
		delete[]temp;
		return 1;
	}
	int MATRICE_V1::MATRICE::inverse_matrice_int() {
		float x = 0;
		x = determinant();
		adjugate_matrice();


		float* temp = new float[row_number * column_number];
		for (int i = 0; i < row_number * column_number; i++) {
			*(temp + i) = *(adress_type1.adress1 + i);
		}

		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1 + i) = *(adress_type2.adress2 + i);
		}
		scalermultiplication(1 / x);

		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1 + i) = *(temp + i);
		}
		delete[]temp;
		return 1;
	}
	long MATRICE_V1::MATRICE::inverse_matrice_long() {
		double x = 0;
		x = determinant();
		adjugate_matrice();


		double* temp = new double[row_number * column_number];
		for (int i = 0; i < row_number * column_number; i++) {
			*(temp + i) = *(adress_type1.adress1l + i);
		}

		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1l + i) = *(adress_type2.adress2l + i);
		};
		scalermultiplication(1 / x);

		for (int i = 0; i < row_number * column_number; i++) {
			*(adress_type1.adress1l + i) = *(temp + i);
		}
		delete[]temp;
		return 1;
	}


	