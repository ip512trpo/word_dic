#include <iostream>
#include <fstream>
#include <conio.h>
#include <time.h>    
#include <locale.h>
#include <windows.h>

using namespace std;

int word_dic()
{
	
    SetConsoleCP(1251);
   
    const int len = 30, strings = 1; //ќписываем всю хурму
	const char ch = '\n';
	char word[20];
	char input[20];
	char mass[len][strings];
      gets(input); // считываем строку с клавиатуры 
    int len2 = strlen(input); 
	int i, k=0, q=0, m=0;
       
    ifstream fs("word_rus.txt"); // открываем файл .txt со словарем
	
	if(!fs) return 1; //≈сли ошибка открыти€ файла, то завершаем программу
	while ((q==0)&&(m!=34010)){  //условие выхода из цикла и выход при окончании поиска
        k=0; m++;
	fs.getline(word, len-1,ch);  //считываем строку

    

	for (i=0;i<len2;i++){
     if (input[i]!=word[i]){   //сравниваем по символам наши слова
           k++;
             break;   //если условаие сработало, то все прервываем и начинаем заново
                    }
      }
    if (k==0){                    //если наше условаие ни разу не сработало (k=0), то значит слово нашлось!
           q++;       
           cout << "Word found! That's right!\n"; //выводим сообщение, что все верно
           }
    }  
	fs.close(); //«акрываем файл
     
	if (m>=34010)  //если словарь кончилс€, а мы ничего не нашли, то выводим ошибку.
	     cout << "Sorry, not found!";  
	
	getch();

}

main(){
    cout << "Please, enter the word in the Russian language..." << endl <<"-->"; // ѕриветственный текст
    word_dic(); 
}

