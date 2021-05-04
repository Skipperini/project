// lr166.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Toy {
	string name;
	float price;
public:
	Toy(string name, float price) :name(name), price(price) {}
	void Print(){
		cout << "Name: " << name << " " << "price= " << price << endl;
	}
	bool operator<(Toy &toy) {
		return name < toy.name;
	} //перевантаження оператору <  
	bool operator()(Toy& toy1, Toy& toy2) {
		return toy1.name > toy2.name;
	} //предікат
	float GetPrice() { return price; }
	string GetName() { return name; }
	bool operator==(const Toy& toy) {
		return price == toy.price;
	} // перевантаження оператору ==
};
class Sort1 {
public:
	bool operator()(Toy toy1, Toy toy2) {
		return toy1.GetName() > toy2.GetName();
	} //функтор
}; 
int main()
{
	vector<Toy> toys;
	toys.push_back(Toy("Ball", 13.4));
	toys.push_back(Toy("Car", 50.5));
	toys.push_back(Toy("Doll", 20.1));
	toys.push_back(Toy("Bear", 40.5));
	toys.push_back(Toy("Lion", 35.8));
	for (auto element : toys) {
		element.Print();
	}
	toys.insert(toys.begin()+1, Toy("Ponny", 45.6));
	cout << "sort by name:" << endl;;
	sort(toys.begin(), toys.end()); // сортування за допомогою оператору <, сортування с 2 параметрами
	for_each(toys.begin(), toys.end(), [](Toy toy) {
		toy.Print();
		}
	); // виведення елементів вектору за допомогою алгоритму for_each та лямбда виразу
	cout << "sort by name:" << endl;
	Toy toy;
	sort(toys.begin(), toys.end(), toy); //сортування за допомогою предіката
	auto iter = toys.begin();
	while (iter != toys.end()) {
		iter->Print();
		iter++;
	} // виведення елеменів вектору за допомогою ітераторів
	toys.insert(toys.begin() + 1,Toy( "Fish", 13.4)); //створення нового елементу на 2 позиції за допомогою insert
	Sort1 sortvec;
	cout << "sort by name:" << endl;
	sort(toys.begin(), toys.end(), sortvec); //сортування за допомогою функтора
	for (auto element : toys) {
		element.Print();
	}
	cout << "sort by price:" << endl;
	sort(toys.begin(), toys.end(), [](Toy& toy1, Toy& toy2) {return toy1.GetPrice() > toy2.GetPrice(); }); // сортування за домогою лямбда-виразу
	for (auto element : toys) {
		element.Print();
	}
	cout << "count ";
	cout << count(toys.begin(), toys.end(), Toy("Star", 13.4)); //використання алгоритму count для підрахування кількості елементів з  певним значенням(у даному випадку за ціною)
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
