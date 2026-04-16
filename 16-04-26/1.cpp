#include <iostream>
#include <string>
#include <stdexcept>  

using namespace std;

void ErrorHandling(double a, double b){
    if (b == 0) {
        throw invalid_argument("Деление на ноль!");
    }
    if (a == 67 || b == 67) {
        throw "six seven";
    }
}

double divide(double a, double b) {
    return a / b;
}

int main(){
    double a, b;
    int i;
    while (true){ 
        if(i>0){
        int choice;
        cout << "Хотите продолжить? 1. Да 2. Нет\n";
        cin >> choice;
        if(choice == 2){
            break;
        }
        }

        cout << "Введите два целых числа: ";
        cin >> a >> b;
        try{
            double res = divide(a,b);
            ErrorHandling(a,b);
            cout << "Результат: "<< res << endl;
            break;
        }
        catch (const invalid_argument& message) {   
            cout << "Ошибка invalid_argument: "<< message.what() << endl;
        }

        catch (...){
            cout << "Неизвестная ошибка " << endl;
        }
        i++;
    }
}
