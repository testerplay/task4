    #include <iostream>
    #include <Windows.h>
    #include <cmath>
    using namespace std;

    void TrianglePS(double a, double& P, double& S) {
        P = 3 * a; // обчислення периметру
        S = (a * a * sqrt(3)) / 4; // обчислення площі
    }

    int main() {

        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        ///Proc 4

        double side1 = 5.0; // перша сторона
        double side2 = 7.0; // друга сторона
        double side3 = 9.0; // третя сторона

        double perimeter, area;

        // Обчислення параметрів для першого трикутника
        TrianglePS(side1, perimeter, area);
        cout << "Трикутник зі стороною " << side1 << " має периметр " << perimeter << " і площу " << area << endl;

        // Обчислення параметрів для другого трикутника
        TrianglePS(side2, perimeter, area);
        cout << "Трикутник зі стороною " << side2 << " має периметр " << perimeter << " і площу " << area << endl;

        // Обчислення параметрів для третього трикутника
        TrianglePS(side3, perimeter, area);
        cout << "Трикутник зі стороною " << side3 << " має периметр " << perimeter << " і площу " << area << endl;


        ///Bool 17

        int number;

        cout << "Введіть ціле додатне число: ";
        cin >> number;

        // Перевірка на непарність та тризначність числа
        bool isOdd = number % 2 != 0;
        bool isThreeDigits = number >= 100 && number <= 999;

        if (isOdd && isThreeDigits) {
            cout << "Введене число " << number << " є непарним тризначним числом." << endl;
        }
        else {
            cout << "Введене число не є непарним тризначним числом." << endl;
        }

        /// integrer 23

        int N;

        cout << "Введіть кількість секунд, що минули з початку доби: ";
        cin >> N;

        // Знаходження залишку від ділення на 3600 та поділ на 60 для отримання хвилин
        int remainingSeconds = N % 3600;
        int minutes = remainingSeconds / 60;

        cout << "З початку останньої години минуло " << minutes << " повних хвилин." << endl;

         


         return 0;
    }
