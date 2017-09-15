#include<iostream>

using namespace std;

void iterative( int a[2][2], int b[2][2]){
	int x = 0, y = 0, z = 0;
	int c[2][2];
	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 2; y++)
		{
			c[x][y] = 0;
			for (z = 0; z < 2; z++)
				c[x][y] = c[x][y] + (a[x][z] * b[z][y]);
		}
	}
	cout << "\nThe Resultant Matrix" << endl;
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; ++j){
			cout << c[i][j] << " ";
		}
		cout << "\n" << endl;
	}
}

void strassen(int a[2][2], int b[2][2]){
	int c[2][2];
	int one = (a[0][0] + a[1][1])*(b[0][0] + b[1][1]);
	int two = (a[1][0] + a[1][1])*b[0][0];
	int three = a[0][0] * (b[0][1] - b[1][1]);
	int four = a[1][1] * (b[1][0] - b[0][0]);
	int five = (a[0][0] + a[0][1])*b[1][1];
	int six = (a[1][0] - a[0][0])*(b[0][0] + b[0][1]);
	int seven = (a[0][1] - a[1][1])*(b[1][0] + b[1][1]);
	c[0][0] =one + four - five + seven;
	c[0][1] = three + five;
	c[1][0] = two + four;
	c[1][1] = one - two + three + six;
	cout << "\nThe Resultant Matrix" << endl;
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; ++j){
			cout << c[i][j] << " ";
		}
		cout << "\n"<<endl;
	}
}


void main(){
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int choice=0;
	cout << "Please input the elements of Matrix A(2x2)" << endl;
	for (int i = 0; i<2; i++){
		for (int j = 0; j < 2; j++){
			cin >> a[i][j];
		}
	}
	cout << "\nPlease input the elements of Matrix B(2x2)" << endl;
	for (int i = 0; i<2; i++){
		for (int j = 0; j < 2; j++){
			cin >> b[i][j];
		}
	}
	cout << "\nInput 1 for Iterative method or 2 for strassen's Algorithm:";
	cin >> choice;
	if (choice = 1){
		iterative(a, b);
	}
	else if (choice = 2){
		strassen(a, b);
	}
	else{
		cout << "Invalid Input";
	}

	system("pause");
}