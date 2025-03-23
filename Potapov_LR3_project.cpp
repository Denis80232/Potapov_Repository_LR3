#include <iostream>

using namespace std;

void Task1(){
    int x;
    cout << "Введите натуральное число X: " << endl;
    cin >> x;
}

void Task2(){
    //разрабатывается...
}

void Task3(){
    //разрабатывается
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