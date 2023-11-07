//// ���� 
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
//// // ������ �����:
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
////	cout << "������ " << top->d.name << " ������\n";
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
////	DATA d = { "����", 20 };
////	push(d);
////
////	strcpy_s(d.name, "����");
////	d.old = 30;
////	push(d);
////
////	strcpy_s(d.name, "�������");
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
////// ���������� �� c++
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	stack<DATA> s;
//
//	DATA d = { "����", 20 };
//	s.push(d);
//
//	strcpy_s(d.name, "����");
//	d.old = 16;
//	s.push(d);
//
//	strcpy_s(d.name, "������");
//	d.old = 60;
//	s.push(d);
//
//	cout << "������ �����: " << s.size() << endl << endl;
//
//
//	while (!s.empty()) { // ���� ���� ���� �� ������
//		d = s.top();
//		cout << "�������� �������: " << d.name << " " << d.old << endl;
//		s.pop();
//	}
//
//	return 0;
//}