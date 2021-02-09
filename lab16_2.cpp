#include<iostream>
using namespace std;

void myString(char*&J , int N)
{
	J = new char;    
	for(int i = 0; i < N;i++) J[i] = 'A'+i;
	J[N] = 0;
}

int main()
{
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
