#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

template <class T>
void max_t(T x, T y) {
    cout << "Вызвана шаблоннная функция"<< endl;
    if(x>y) cout<<"Большее значение: "<<x<<endl;
		else if(y>x) cout<<"Большее значение: "<<y<<endl;
		else {cout<<"Большего значения нет!"<<endl;
		cout<<"Oни равны: "<<"(x = "<<x<<") = "<<"(y = "<<y<<")"<<endl;
		}
    cout << endl;
}
template <>
void max_t(char* p_ch1, char* p_ch2) {
    cout << "Вызвана специализированная функция" << endl;
    if(strcmp(p_ch1, p_ch2) == 0) cout << " Строки одинаковые" << endl;
    else if(strcmp(p_ch1, p_ch2) == 1) cout << " Строка 1 длиннее" << endl;
    else cout << " Строка 2 длиннее" << endl;
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    max_t<char>('a', '1');
    max_t<int>(1, 1);
    max_t<string>("Hello", "World");
    char ch1[] = "Hello, world!";
    char ch2[] = "Hello world!";
    max_t<char *>(ch1, ch2);
}

