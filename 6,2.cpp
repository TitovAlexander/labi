#include <iostream>
#include <cstring>
#include <locale>
#include <stdlib.h>
using namespace std;

class DomesticAnimal{
protected:
    char weight[20];
    char price[50];
    char color[100];
public:
    DomesticAnimal(){
        strcpy(weight, "30 kg");
        strcpy(price, "30 0000 rubles");
        strcpy(color, "White");}
    DomesticAnimal(char* p1, char* p2, char* p3){
        strcpy(weight, p1);
        strcpy(price, p2);
        strcpy(color, p3);}
    void print(){
        cout << "Class: DomesticAnimal\n";
        cout << "Bec:   " << weight << '\n';
        cout << "Price:  " << price << '\n';
        cout << "Color:  " << color << '\n';}
};

class Cow: virtual public DomesticAnimal{
public:
    Cow(): DomesticAnimal(){}
    Cow(char* p1, char* p2, char* p3):DomesticAnimal(p1,p2,p3){}
    void print(){
        cout << "Podclass: Cow\n";
        DomesticAnimal::print();}
};

class Buffalo: virtual public DomesticAnimal{
public:
    Buffalo():DomesticAnimal(){}
    Buffalo(char* p1, char* p2, char* p3):DomesticAnimal(p1,p2,p3){}
    void print(){
        cout << "Podclass: Buffalo\n";
        DomesticAnimal::print();}
};

class Beefalo: public Cow, public Buffalo{
public:
    Beefalo(){
        strcpy(weight, "5 kg");
        strcpy(price, "10 000 rubles");
        strcpy(color, "Black");}
    Beefalo(char* p1, char* p2, char* p3){
        strcpy(weight, p1);
        strcpy(price, p2);
        strcpy(color, p3);}
    void print(){
        cout << "Podclass: Beffalo\n";
        DomesticAnimal::print();}
};

int main(){
	Buffalo c;
	Beefalo b("30 kg", "40 000 rubles", "Black-white");
	c.print();
	b.print();
}
