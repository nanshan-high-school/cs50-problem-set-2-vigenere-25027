# cs50-problem-set-2-vigenere-25027
cs50-problem-set-2-vigenere-25027 created by GitHub Classroom

#include <iostream>
using namespace std;
int main() {
    string y;
    int number1 = 0, number2 = 0, answer, x, total = 0, k1 = 0;
    cout << "輸入算式:";
    cin >> y;
    for (int i = 0; y[i] >= '0'; i++) {
        number1 = number1 * 10 + y[i] - 48;
        k1 = k1 + 1;
    }
    x = y[k1];
    for (int i = k1 + 1; y[i] > 47; i++) {
        number2 = number2 * 10 + y[i] - 48;
    }
    if (x == 42) {
        answer = number1 * number2;
    }
    else if (x == 43) {
            answer = number1 + number2;
    }
    else if (x == 45) {
            answer = number1 - number2;
    }
    else if (x == 47) {
            answer = number1 / number2;
    }
    cout << answer;
    for (int y = 0; y < 10; y++) {
        total = total + answer % 10;
        answer = answer / 10;
    }
    if (total % 3 == 0) {
       cout << "是3的倍數";
    }
    else {
         cout << "不是3的倍數";
    }
}
