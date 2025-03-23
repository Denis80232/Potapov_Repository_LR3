#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Task1(int& number) {
  cout << "Введите натуральное число: ";
  cin >> number;

  while (number <= 0) {
    cout << "Число должно быть натуральным (больше нуля). Повторите ввод: ";
    cin >> number;
  }
}

void Task2(){
 int number;
  Task1(number); 
  number = abs(number); 

  if (number < 10) {
    cout << "Число " << number << " начинается и заканчивается одной и той же цифрой.\n";
    return;
  }

  string str_num = to_string(number);
  if (str_num[0] == str_num.back()) {
    cout << "Число " << number << " начинается и заканчивается одной и той же цифрой.\n";
  } else {
    cout << "Число " << number << " не начинается и не заканчивается одной и той же цифрой.\n";
  }
}

void Task3(){
int number;
  Task1(number);
  number = abs(number); 

  if (number % 2 != 0) {
    cout << "Число " << number << " заканчивается нечетной цифрой.\n";
  } else {
    cout << "Число " << number << " заканчивается четной цифрой.\n";
  }
}

int main(){
    int choice;
    cout << "Task 1. Ввод натурального числа X." << endl;
    cout << "Task 2. Проверка числа на начало и окончание на одну цифру." << endl;
    cout << "Task 3. Проверка числа на окончание на нечётную цифру." << endl;
    do{
        cout << "Please enter the number of the desired function or 0 if you want to close the app." << endl;
        switch(choice){
            case 1:
                Task1();
                break;
            case 2:
                Task2();
                break;
            case 3:
                Task3();
                break;
            default:
                if (choice != 0 or choice < 0 or choice > 3){
                    cout << "The number of the program doesn't exist. Please enter different number:" << endl;
                }
        }
    }while(choice != 0);

return 0;
}