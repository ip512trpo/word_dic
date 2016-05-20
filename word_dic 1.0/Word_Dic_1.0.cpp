#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>

using namespace std;

int word_dic(char input[20]){
    const int len = 30; //ќписываем всю хурму
	const char ch = '\n';
	int lenght = strlen(input); 
	char word[lenght]; 
	int i, k=0, q=0, m=0;
	
    ifstream fs("word_rus.txt"); // открываем файл .txt со словарем
    if(!fs)
		return 1; //≈сли ошибка открыти€ файла, то завершаем программу
    while ((q==0)&&(m!=93393)){  //условие выхода из цикла и выход при окончании поиска
        k=0; 
		m++;
		fs.getline(word, 30,ch);  //считываем строку
       	for (i=0;i<lenght;i++){
        	if (input[i]!=word[i]){   //сравниваем по символам наши слова
           	k++;
           	break;   //если условаие сработало, то все прервываем и начинаем заново
           }
        }
	if (k==0){                    //если наше условаие ни разу не сработало (k=0), то значит слово нашлось!
        q++;       
        cout << "---------------------------\nWord found! That's right!\n---------------------------\n\n"; //выводим сообщение, что все верно
        }
    }  
	fs.close(); //«акрываем файл
	if (m>93392)  //если словарь кончилс€, а мы ничего не нашли, то выводим ошибку.
	    cout << "---------------------------\nSorry, not found!\n---------------------------\n\n";  
	

}

int main(){
    SetConsoleCP(1251); //  одировка
    cout << "                           ..::Welcome to Word Dic 1.0!::..\n\n";
    
    char input[20];
    do{
    	cout << "Please input the word or press '0' to quit \n--->";
        cin >> input;
        word_dic(input);
		}
    while(input[0]!='0');  
        cout << "Goodbye! :)\n";
    Sleep(300);
    return EXIT_SUCCESS;
}
