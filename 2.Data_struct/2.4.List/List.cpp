//// Связанные списки list
//#include <iostream>
//#include <list>
//using namespace std;
//
//typedef struct {
//	char title[100];
//	char author[50];
//	short year;
//} BOOK;
//
////// Как оно работает:
////typedef struct tag_obj {
////	BOOK b;
////	struct tag_obj* prev, * next;
////} OBJ;
////
////OBJ* head = NULL, * tail = NULL;
////
////
////void add_obj(OBJ* obj, BOOK book) {
////	OBJ* ptr = new OBJ;
////
////	ptr->b = book;
////	ptr->prev = obj;
////	ptr->next = (obj == NULL) ? NULL : obj->next;
////
////	if (obj != NULL) {
////		obj->next = ptr;
////		if (obj->next != NULL) obj->next->prev = ptr;
////	}
////
////	if (ptr->prev == NULL) head = ptr;
////	if (ptr->next == NULL) tail = ptr;
////
////}
////
////void del_obj(OBJ* obj) {
////	if (obj == NULL) return;
////	OBJ* prev_obj = obj->prev;
////	OBJ* next_obj = obj->next;
////	
////	cout << "Удален объект " << obj->b.title << endl;
////	delete obj;
////
////	if (prev_obj != NULL) prev_obj->next = next_obj;
////	else head = next_obj;
////
////	if (next_obj != NULL) next_obj->prev = prev_obj;
////	else tail = prev_obj;
////}
////
////void show() {
////	OBJ* c = head;
////
////	while (c != NULL) {
////		cout << c->b.title << " " << c->b.author << " " << c->b.year << endl;
////		c = c->next;
////	}
////}
////
////int main() {
////	setlocale(LC_ALL, "rus");
////
////	BOOK book = { "Онегин", "Пушкин", 2000 };
////	add_obj(tail, book);
////
////	strcpy_s(book.title, "Муму");
////	strcpy_s(book.author, "Тургенев");
////	book.year = 1995;
////
////	add_obj(tail, book);
////
////	strcpy_s(book.title, "Левша");
////	strcpy_s(book.author, "Лесков");
////	book.year = 2011;
////
////	add_obj(head, book);
////
////	show();
////
////	while (head != NULL) del_obj(head);
////
////	return 0;
////}
//
//
//// Как на самом деле:
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	list <BOOK> mylist;
//
//	BOOK book = { "Онегин", "Пушкин", 2000 };
//	mylist.push_back(book);
//
//	strcpy_s(book.title, "Муму");
//	strcpy_s(book.author, "Тургенев");
//	book.year = 1995;
//	
//	mylist.push_front(book);
//	
//	strcpy_s(book.title, "Левша");
//	strcpy_s(book.author, "Лесков");
//	book.year = 2011;
//	
//	list <BOOK>::iterator it;
//	it = mylist.begin();
//	mylist.insert(++it, book);
//	
//	for (it = mylist.begin(); it != mylist.end(); ++it) {
//		book = *it;
//		cout << book.title << " " << book.author << " " << book.year << endl;
//	}
//	
//	mylist.clear();
//					
//	return 0;
//}