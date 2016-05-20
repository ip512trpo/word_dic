#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>

using namespace std;

int word_dic(char input[20]){
    const int len = 30; //��������� ��� �����
	const char ch = '\n';
	int lenght = strlen(input); 
	char word[lenght]; 
	int i, k=0, q=0, m=0;
	
    ifstream fs("word_rus.txt"); // ��������� ���� .txt �� ��������
    if(!fs)
		return 1; //���� ������ �������� �����, �� ��������� ���������
    while ((q==0)&&(m!=93393)){  //������� ������ �� ����� � ����� ��� ��������� ������
        k=0; 
		m++;
		fs.getline(word, 30,ch);  //��������� ������
       	for (i=0;i<lenght;i++){
        	if (input[i]!=word[i]){   //���������� �� �������� ���� �����
           	k++;
           	break;   //���� �������� ���������, �� ��� ���������� � �������� ������
           }
        }
	if (k==0){                    //���� ���� �������� �� ���� �� ��������� (k=0), �� ������ ����� �������!
        q++;       
        cout << "---------------------------\nWord found! That's right!\n---------------------------\n\n"; //������� ���������, ��� ��� �����
        }
    }  
	fs.close(); //��������� ����
	if (m>93392)  //���� ������� ��������, � �� ������ �� �����, �� ������� ������.
	    cout << "---------------------------\nSorry, not found!\n---------------------------\n\n";  
	

}

int main(){
    SetConsoleCP(1251); // ���������
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
