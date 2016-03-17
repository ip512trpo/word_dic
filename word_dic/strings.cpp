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
	
	if(!fs) return 1; //Если ошибка открытия файла, то завершаем программу
	
	for(int r = 0; r<strings; r++)
	{
		fs.getline(mass[r], len-1,ch); //Считываем строки в массив
		cout << "Строка " << r+1 << " = "<< mass[r] << endl; //Выводи строку из массива
	}
	fs.close(); //Закрываем файл
	getch();

}
