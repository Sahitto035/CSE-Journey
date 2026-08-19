#include <iostream>
#include<cmath>

using namespace std;

template<class T>
class Number{
    private:
        T value;

    public:
        Number() {}

        Number(T value) {
            this->value = value;
        }

        ~Number() {}

        T getValue() {
            return this->value;
        }

        void setValue(T value) {
            this->value = value;
        }
        Number operatorp(Number far) {
            return Number(pow(this->value, far.getValue()));
        }
};

template<class T>
class CalculatorBase {
    public:
        virtual Number<T> add() = 0;
        virtual Number<T> sub() = 0;
        virtual Number<T> mul() = 0;
        virtual Number<T> div() = 0;

        virtual void square() = 0;
        virtual void cube() = 0;
        virtual void sqrt() = 0;
        virtual void power() = 0;
};

template<class T>
class LegacyCalculator: public CalculatorBase<T> {
    private:
        Number<T> number1;
        Number<T> number2;

    public:
        LegacyCalculator() {}

        LegacyCalculator(Number<T> number1, Number<T> number2) {
            this->number1 = number1;
            this->number2 = number2;
        }

        ~LegacyCalculator() {}

        Number<T> getNumber1() {
            return this->number1;
        }

        void setNumber1(Number<T> number1) {
            this->number1 = number1;
        }

        Number<T> getNumber2() {
            return this->number2;
        }

        void setNumber2(Number<T> number2) {
            this->number2 = number2;
        }

        Number<T> add() {
            Number<T> result(this->number1.getValue() + this->number2.getValue());
            cout << this->number1.getValue() << " + " << this->number2.getValue() << " = "
                 << result.getValue() << endl;
            return result;
        }

        Number<T> sub() {
            Number<T> result(this->number1.getValue() - this->number2.getValue());
            cout << this->number1.getValue() << " - " << this->number2.getValue() << " = "
                 << result.getValue() << endl;
            return result;
        }

        Number<T> mul() {
            Number<T> result(this->number1.getValue() * this->number2.getValue());
            cout << this->number1.getValue() << " X " << this->number2.getValue() << " = "
                 << result.getValue() << endl;
            return result;
        }

        Number<T> div() {
            Number<T> result(this->number1.getValue() / this->number2.getValue());
            cout << this->number1.getValue() << " / " << this->number2.getValue() << " = "
                 << result.getValue() << endl;
            return result;
        }
        virtual void square() {
            cout << "Scientific calculation's are not available in Legacy mode!!!~" << endl;
        }
        virtual void cube() {
            cout << "Scientific calculation's are not available in Legacy mode!!!~" << endl;
        }
        virtual void sqrt() {
            cout << "Scientific calculation's are not available in Legacy mode!!!~" << endl;
        }
        virtual void power() {
            cout << "Scientific calculation's are not available in Legacy mode!!!~" << endl;
        }

};

template<class T>
class ScientificCalculator: public CalculatorBase<T> {
    private:
        Number<T> seriesOfNumbers[5];

    public:
        ScientificCalculator() {

        }

        ScientificCalculator(Number<T>* seriesOfNumbers) {
            for(int index = 0; index < 5; index++) {
                this->seriesOfNumbers[index] = *(seriesOfNumbers + index);
            }
        }

        Number<T>* getSeriesOfNumbers() {
            return this->seriesOfNumbers;
        }

        void setSeriesOfNumbers(Number<T>* seriesOfNumbers) {
            for(int index = 0; index < 5; index++) {
                this->seriesOfNumbers[index] = *(seriesOfNumbers + index);
            }
        }

        void printSeries(string operatorSign) {
            for(int index = 0; index < 5; index++) {
                if(index != 4) {
                    cout << this->seriesOfNumbers[index].getValue() << " " << operatorSign << " ";
                }
                else {
                    cout << this->seriesOfNumbers[index].getValue() << " = ";
                }

            }
        }

        Number<T> add() {
                T sum = this->seriesOfNumbers[0].getValue();
                for(int index = 1; index < 5; index++) {
                    sum += this->seriesOfNumbers[index].getValue();
                }

                Number<T> result(sum);
                printSeries("+");
                cout << result.getValue() << endl;
                return result;
            }

        Number<T> sub() {
            T sum = this->seriesOfNumbers[0].getValue();
            for(int index = 1; index < 5; index++) {
                sum -= this->seriesOfNumbers[index].getValue();
            }

            Number<T> result(sum);
            printSeries("-");
            cout << result.getValue() << endl;
            return result;
            }

        Number<T> mul() {
            T sum = this->seriesOfNumbers[0].getValue();
            for(int index = 1; index < 5; index++) {
                sum *= this->seriesOfNumbers[index].getValue();
            }

            Number<T> result(sum);
            printSeries("X");
            cout << result.getValue() << endl;
            return result;
            }

        Number<T> div() {
            T sum = this->seriesOfNumbers[0].getValue();
            for(int index = 1; index < 5; index++) {
                sum /= this->seriesOfNumbers[index].getValue();
            }

            Number<T> result(sum);
            printSeries("/");
            cout << result.getValue() << endl;
            return result;
            }
        void square() {
            Number<T> power(2);
            for(int i = 0; i < 5; i++) {
                Number<T> result = this->seriesOfNumbers[i].operatorp(power);
                cout << this->seriesOfNumbers[i].getValue() << "p2 = " << result.getValue() << endl;
            }
        }
        void cube() {
            Number<T> power(3);
            for (int i = 0; i < 5; i++) {
                Number<T> result = this->seriesOfNumbers[i].operatorp(power);
                cout << this->seriesOfNumbers[i].getValue() << "p3 = " << result.getValue() << endl;
            }
        }
        void sqrt() {
            Number<T> power(0.5);
            for (int i = 0; i < 5; i++) {
                if (this->seriesOfNumbers[i].getValue() < 0) {
                    cout << this->seriesOfNumbers[i].getValue() << "p0.5 = Undefined" << endl;
                }else {
                    Number<T> result = this->seriesOfNumbers[i].operatorp(power);
                    cout << this->seriesOfNumbers[i].getValue() << "p0.5 = " << result.getValue() << endl;
                }
            }
        }
        void power() {
            T powerValue;
            cout << "Enter the value of the power: ";
            cin >> powerValue;
            Number<T> powObj(powerValue);
            for (int i = 0; i < 5; i++) {
                Number<T> result = this->seriesOfNumbers[i].operatorp(powObj);
                cout << this->seriesOfNumbers[i].getValue() << "p" << powerValue << " = " << result.getValue() << endl;
            }
        }

};

class CalculatorDriver {
public:
    CalculatorDriver() {

    }
    ~CalculatorDriver() {

    }

    void start() {
        generateFirstLevelMenu();
    }

    template<class T>
    void generateThirdLevelMenu(CalculatorBase<T>* calculatorBase) {
        char Choice;

        do {
            cout << "Press 'A' for Addition or 'S' for Substitution or " << endl
                 << "'M' for Multiplication or 'D' for Division or " << endl
                 << "'Q' for Square or 'C' for Cube or"<< endl
                << " 'R' for Sqrt or 'P' for Power or " << endl
                 << "'B' for Back: " << endl;
            cin >> Choice;

            if (Choice == 'A' || Choice == 'a') {
                calculatorBase->add();
            }
            else if (Choice == 'S' || Choice == 's') {
                calculatorBase->sub();
            }
            else if (Choice == 'M' || Choice == 'm') {
                calculatorBase->mul();
            }
            else if (Choice == 'D' || Choice == 'd') {
                calculatorBase->div();
            }
            else if (Choice == 'Q' || Choice == 'q') {
                calculatorBase->square();
            }
            else if (Choice == 'C' || Choice == 'c') {
                calculatorBase->cube();
            }
            else if (Choice == 'R' || Choice == 'r') {
                calculatorBase->sqrt();
            }
            else if (Choice == 'P' || Choice == 'p') {
                calculatorBase->power();
            }
            else if (Choice == 'B' || Choice == 'b') {
                cout << "Going Back to Previous Menu..." << endl;
            }
            else {
                cout << "Wrong Input." << endl;
                cout << "Please Try Again..." << endl << endl;
            }

        } while (!(Choice == 'B' || Choice == 'b'));
    }

    void generateSecondLevelMenu(char calcChoice) {
        char numberFormatChoice;

        do {
            cout << "Press 'I' for Integer or 'L' for Long or " << endl
                 << "'F' for Float or 'D' for Double or " << endl
                 << "'C' for Character or 'B' for Back: " << endl;
            cin >> numberFormatChoice;

            if (calcChoice == 'L' || calcChoice == 'l') {
                if (numberFormatChoice == 'I' || numberFormatChoice == 'i') {
                    int num1, num2;
                    cout << "Enter First Integer Number: " << endl; cin >> num1;
                    cout << "Enter Second Integer Number: " << endl; cin >> num2;
                    Number<int> number1(num1), number2(num2);
                    LegacyCalculator<int> lc(number1, number2);
                    generateThirdLevelMenu(&lc);
                }
                else if (numberFormatChoice == 'L' || numberFormatChoice == 'l') {
                    long num1, num2;
                    cout << "Enter First Long Number: " << endl; cin >> num1;
                    cout << "Enter Second Long Number: " << endl; cin >> num2;
                    Number<long> number1(num1), number2(num2);
                    LegacyCalculator<long> lc(number1, number2);
                    generateThirdLevelMenu(&lc);
                }
                else if (numberFormatChoice == 'F' || numberFormatChoice == 'f') {
                    float num1, num2;
                    cout << "Enter First Float Number: " << endl; cin >> num1;
                    cout << "Enter Second Float Number: " << endl; cin >> num2;
                    Number<float> number1(num1), number2(num2);
                    LegacyCalculator<float> lc(number1, number2);
                    generateThirdLevelMenu(&lc);
                }
                else if (numberFormatChoice == 'D' || numberFormatChoice == 'd') {
                    double num1, num2;
                    cout << "Enter First Double Number: " << endl; cin >> num1;
                    cout << "Enter Second Double Number: " << endl; cin >> num2;
                    Number<double> number1(num1), number2(num2);
                    LegacyCalculator<double> lc(number1, number2);
                    generateThirdLevelMenu(&lc);
                }
                else if (numberFormatChoice == 'C' || numberFormatChoice == 'c') {
                    char num1, num2;
                    cout << "Enter First Character Number: " << endl; cin >> num1;
                    cout << "Enter Second Character Number: " << endl; cin >> num2;
                    Number<char> number1(num1), number2(num2);
                    LegacyCalculator<char> lc(number1, number2);
                    generateThirdLevelMenu(&lc);
                }
                else if (numberFormatChoice == 'B' || numberFormatChoice == 'b') {
                    cout << "Going Back to Previous Menu..." << endl;
                }
                else {
                    cout << "Wrong Input." << endl;
                    cout << "Please Try Again..." << endl << endl;
                }
            }
            else {
                if (numberFormatChoice == 'I' || numberFormatChoice == 'i') {
                    int numSer[5];
                    Number<int> numberSeries[5];
                    cout << "Enter Five Integer Numbers: " << endl;
                    for (int index = 0; index < 5; index++) {
                        cin >> numSer[index];
                        numberSeries[index].setValue(numSer[index]);
                    }
                    ScientificCalculator<int> sc(numberSeries);
                    generateThirdLevelMenu(&sc);
                }
                else if (numberFormatChoice == 'L' || numberFormatChoice == 'l') {
                    long numSer[5];
                    Number<long> numberSeries[5];
                    cout << "Enter Five Long Numbers: " << endl;
                    for (int index = 0; index < 5; index++) {
                        cin >> numSer[index];
                        numberSeries[index].setValue(numSer[index]);
                    }
                    ScientificCalculator<long> sc(numberSeries);
                    generateThirdLevelMenu(&sc);
                }
                else if (numberFormatChoice == 'F' || numberFormatChoice == 'f') {
                    float numSer[5];
                    Number<float> numberSeries[5];
                    cout << "Enter Five Float Numbers: " << endl;
                    for (int index = 0; index < 5; index++) {
                        cin >> numSer[index];
                        numberSeries[index].setValue(numSer[index]);
                    }
                    ScientificCalculator<float> sc(numberSeries);
                    generateThirdLevelMenu(&sc);
                }
                else if (numberFormatChoice == 'D' || numberFormatChoice == 'd') {
                    double numSer[5];
                    Number<double> numberSeries[5];
                    cout << "Enter Five Double Numbers: " << endl;
                    for (int index = 0; index < 5; index++) {
                        cin >> numSer[index];
                        numberSeries[index].setValue(numSer[index]);
                    }
                    ScientificCalculator<double> sc(numberSeries);
                    generateThirdLevelMenu(&sc);
                }
                else if (numberFormatChoice == 'C' || numberFormatChoice == 'c') {
                    char numSer[5];
                    Number<char> numberSeries[5];
                    cout << "Enter Five Character Numbers: " << endl;
                    for (int index = 0; index < 5; index++) {
                        cin >> numSer[index];
                        numberSeries[index].setValue(numSer[index]);
                    }
                    ScientificCalculator<char> sc(numberSeries);
                    generateThirdLevelMenu(&sc);
                }
                else if (numberFormatChoice == 'B' || numberFormatChoice == 'b') {
                    cout << "Going Back to Previous Menu..." << endl;
                }
                else {
                    cout << "Wrong Input." << endl;
                    cout << "Please Try Again..." << endl << endl;
                }
            }
        } while (!(numberFormatChoice == 'B' || numberFormatChoice == 'b'));
    }

    void generateFirstLevelMenu() {
        char choice;

        do {
            cout << "Press 'L' for Legacy Calculator or 'S' for Scientific Calculator or "
                 << "'Q' for Quit: " << endl;
            cin >> choice;

            if (choice == 'L' || choice == 'l' || choice == 'S' || choice == 's') {
                generateSecondLevelMenu(choice);
            }
            else if (choice == 'Q' || choice == 'q') {
                cout << "The Calculator Application is Shutting Down..." << endl;
            }
            else {
                cout << "Wrong Input." << endl;
                cout << "Please Try Again..." << endl << endl;
            }

        } while (!(choice == 'Q' || choice == 'q'));
    }
};

int main() {
    CalculatorDriver cd;
    cd.start();

    return 0;
}

