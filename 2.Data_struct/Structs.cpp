//// Структуры 
//#include <iostream>
//using namespace std;
//
////constexpr auto N = 4; // Намного безопаснее
////
////struct tag_book {
////	char title[100];
////	char author[50];
////	short year;
////	short pages;
////	float price;
////};
////
////int main() {
////	setlocale(LC_ALL, "rus");
////
////	struct tag_book lib[N]{};
////	strcpy_s(lib[0].title, "Евгений Онегин");
////	strcpy_s(lib[0].author, "Пушкин А. С.");
////	lib[0].year = 2001;
////	lib[0].pages = 81;
////	lib[0].price = 145.51;
////
////	strcpy_s(lib[1].title, "Война и мир");
////	strcpy_s(lib[1].author, "Толстой Л. Н.");
////	lib[1].year = 2011;
////	lib[1].pages = 654;
////	lib[1].price = 1025.11;
////
////	lib[2] = lib[0];
////	lib[3] = lib[1];
////
////	for (int i = 0; i < N; ++i)
////		cout << lib[i].title << endl << lib[i].author 
////			<< endl << lib[i].year << endl << lib[i].pages 
////			<< endl << lib[i].price << endl << endl;
////
////
////	return 0;
////}
//
//
////constexpr auto N = 4;
////
////struct tag_fio {
////	char lastname[100];
////	char firstname[100];
////};
////
////struct tag_people {
////	struct tag_fio fio; //Вложенная стрктура
////	char job[100];
////	short old;
////};
////
////void show_struct(struct tag_people man) {
////	cout << man.fio.firstname << endl << man.fio.lastname
////		<< endl << man.job << endl << man.old << endl << endl;
////}
////
////int main() {
////	setlocale(LC_ALL, "rus");
////
////	tag_people p[N];
////
////	strcpy_s(p[0].fio.firstname, "Олег");
////	strcpy_s(p[0].fio.lastname, "Осколков");
////	strcpy_s(p[0].job, "Нету");
////	p[0].old = 28;
////
////	p[1] = p[0];
////
////	for (int i = 0; i < 2; ++i)
////		show_struct(p[i]);
////	
////	return 0;
////}
//
//
//
//struct tag_var {
//	static int vi;
//	static double vd;
//	short vs; // Автоматическая
//};
//
//int tag_var::vi = 0;
//double tag_var::vd = 0;
//
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	tag_var var{}, var2{};
//
//	var.vi = 1;
//	var.vd = 1.1;
//	var.vs = 1;
//	cout << var.vi << " " << var.vd << " " << var.vs << endl;
//
//	var2.vi = 2;
//	var2.vd = 2.2;
//	var2.vs = 2;
//	cout << var.vi << " " << var.vd << " " << var.vs << endl;
//
//	return 0;
//}