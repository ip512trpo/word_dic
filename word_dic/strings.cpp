#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	
	const int len = 30, strings = 5;
	const char ch = '\n';
	char mass[len][strings];
	setlocale(LC_ALL, "Russian");  
	
	ifstream fs("word_rus.txt", ios::in); 
	
	if(!fs) return 1; //���� ������ �������� �����, �� ��������� ���������
	
	for(int r = 0; r<strings; r++)
	{
		fs.getline(mass[r], len-1,ch); //��������� ������ � ������
		cout << "������ " << r+1 << " = "<< mass[r] << endl; //������ ������ �� �������
	}
	fs.close(); //��������� ����
	getch();

}
