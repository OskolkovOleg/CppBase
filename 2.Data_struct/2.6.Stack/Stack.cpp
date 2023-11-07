//// Стек 
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//typedef struct {
//	char name[50];
//	short old;
//} DATA;
//
//// // Работа стека:
////typedef struct tag_obj {
////	DATA d;
////	struct tag_obj* next;
////} OBJ;
////
////OBJ* top = NULL;
////
////
////OBJ* push(DATA d) {
////	OBJ* ptr = new OBJ;
////
////	ptr->d = d;
////	ptr->next = top;
////
////	top = ptr;
////	return ptr;
////}
////
////
////void pop() {
////	if (top == NULL) return;
////	OBJ* ptr = top->next;
////
////	cout << "Объект " << top->d.name << " удален\n";
////
////	delete top;
////	top = ptr;
////}
////
////
////void show() {
////	OBJ* c = top;
////	while (c != NULL) {
////		cout << c->d.name << " " << c->d.old << endl;
////		c = c->next;
////	}
////}
////
////int main() {
////	setlocale(LC_ALL, "rus");
////
////	DATA d = { "Иван", 20 };
////	push(d);
////
////	strcpy_s(d.name, "Олег");
////	d.old = 30;
////	push(d);
////
////	strcpy_s(d.name, "Николай");
////	d.old = 50;
////	push(d);
////
////	show();
////
////	while (top != NULL) pop();
////
////	return 0;
////}
//
////// Стандартно из c++
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	stack<DATA> s;
//
//	DATA d = { "Иван", 20 };
//	s.push(d);
//
//	strcpy_s(d.name, "Олег");
//	d.old = 16;
//	s.push(d);
//
//	strcpy_s(d.name, "Сергей");
//	d.old = 60;
//	s.push(d);
//
//	cout << "Размер стека: " << s.size() << endl << endl;
//
//
//	while (!s.empty()) { // Ложь если стек не пустой
//		d = s.top();
//		cout << "Удаление объекта: " << d.name << " " << d.old << endl;
//		s.pop();
//	}
//
//	return 0;
//}