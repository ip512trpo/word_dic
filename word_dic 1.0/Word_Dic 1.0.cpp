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
   
    const int len = 30, strings = 1; //��������� ��� �����
	const char ch = '\n';
	char word[20];
	char input[20];
	char mass[len][strings];
      gets(input); // ��������� ������ � ���������� 
    int len2 = strlen(input); 
	int i, k=0, q=0, m=0;
       
    ifstream fs("word_rus.txt"); // ��������� ���� .txt �� ��������
	
	if(!fs) return 1; //���� ������ �������� �����, �� ��������� ���������
	while ((q==0)&&(m!=34010)){  //������� ������ �� ����� � ����� ��� ��������� ������
        k=0; m++;
	fs.getline(word, len-1,ch);  //��������� ������

    

	for (i=0;i<len2;i++){
     if (input[i]!=word[i]){   //���������� �� �������� ���� �����
           k++;
             break;   //���� �������� ���������, �� ��� ���������� � �������� ������
                    }
      }
    if (k==0){                    //���� ���� �������� �� ���� �� ��������� (k=0), �� ������ ����� �������!
           q++;       
           cout << "Word found! That's right!\n"; //������� ���������, ��� ��� �����
           }
    }  
	fs.close(); //��������� ����
     
	if (m>=34010)  //���� ������� ��������, � �� ������ �� �����, �� ������� ������.
	     cout << "Sorry, not found!";  
	
	getch();

}

main(){
    cout << "Please, enter the word in the Russian language..." << endl <<"-->"; // �������������� �����
    word_dic(); 
}

