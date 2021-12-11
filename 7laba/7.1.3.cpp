#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

template <class T>
void max_t(T x, T y) {
    cout << "������� ���������� �������"<< endl;
    if(x>y) cout<<"������� ��������: "<<x<<endl;
		else if(y>x) cout<<"������� ��������: "<<y<<endl;
		else {cout<<"�������� �������� ���!"<<endl;
		cout<<"O�� �����: "<<"(x = "<<x<<") = "<<"(y = "<<y<<")"<<endl;
		}
    cout << endl;
}
template <>
void max_t(char* p_ch1, char* p_ch2) {
    cout << "������� ������������������ �������" << endl;
    if(strcmp(p_ch1, p_ch2) == 0) cout << " ������ ����������" << endl;
    else if(strcmp(p_ch1, p_ch2) == 1) cout << " ������ 1 �������" << endl;
    else cout << " ������ 2 �������" << endl;
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

