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

void Task2(int number){
  int num = abs(number); 

  if (num < 10) {
    cout << "Число " << num << " начинается и заканчивается одной и той же цифрой.\n";
    return;
  }

  string str_num = to_string(num);
  if (str_num[0] == str_num.back()) {
    cout << "Число " << num << " начинается и заканчивается одной и той же цифрой.\n";
  } else {
    cout << "Число " << num << " не начинается и не заканчивается одной и той же цифрой.\n";
  }
}

void Task3(int number){
  int num1 = abs(number); 

  if (num1 % 2 != 0) {
    cout << "Число " << num1 << " заканчивается нечетной цифрой.\n";
  } else {
    cout << "Число " << num1 << " заканчивается четной цифрой.\n";
  }
}

int main(){
    int choice;
    int number = 0;
    cout << "Task 1. Ввод натурального числа X." << endl;
    cout << "Task 2. Проверка числа на начало и окончание на одну цифру." << endl;
    cout << "Task 3. Проверка числа на окончание на нечётную цифру." << endl;
    do{
        cout << "Please enter the number of the desired function or 0 if you want to close the app." << endl;
        cin >> choice;
        switch(choice){
            case 1:
                Task1(number);
                break;
            case 2:
                Task2(number);
                break;
            case 3:
                Task3(number);
                break;
            default:
                if (choice != 0 or choice < 0 or choice > 3){
                    cout << "The number of the program doesn't exist. Please enter different number:" << endl;
                }
        }
    }while(choice != 0);

return 0;
}