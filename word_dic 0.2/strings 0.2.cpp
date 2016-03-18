#include <iostream>
#include <fstream>
#include <conio.h>
#include <time.h>    
#include <locale.h>
#include <windows.h>

using namespace std;

int main()
{
	
      SetConsoleCP(1251);
   
    const int len = 30, strings = 1;
	const char ch = '\n';
	char word[20];
	char input[20];
	char mass[len][strings];
	
    gets(input); 
   // cout << input << endl;
    int len2 = strlen(input); 
	int i, k=0;

    	ifstream fs("word_rus.txt", ios::in); 
	
	if(!fs) return 1; //Если ошибка открытия файла, то завершаем программу
	
	fs.getline(word, len-1,ch);
	fs.close(); //Закрываем файл
    
//	cout << word << len2 << input << endl;
	for (i=0;i<len2;i++){
  if (input[i]!=word[i])
  {cout << "ERROR\n";
    k++;
   break;}
    }

   if (k==0)
     cout << "Cool!\n";
	
      /*	for(int r = 0; r<strings; r++)
	{	
        fs.getline(mass[r], len-1,ch); //Считываем строки в массив
		cout << "Строка " << r+1 << " = "<< mass[r] << endl; //Выводи строку из массива
	    }  */
	
	//cout << "Строка " << 1 << " = "<< word << endl << input;
	
	getch();

}
