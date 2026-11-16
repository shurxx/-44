#include<stdio.h>//правка1
#include<Windows.h>//правка11
//void main() {
//	printf("main() start!\n");
//
//	unsigned long long  l = 1;
//	int i = 0;
//	while (l > 0) {
//		printf("<%llu (%d)>\n", l, i);
//		l *= 2;
//		i += 1;
//	}
//	l--;
//	printf("<!!!!%llu (%d)!!!!>\n", l, i);
//
//	printf("main() finish!\n");
//}


//void main() {
//	printf("main() start!\n");
//
//	int n = 1;
//	char 		fact = 1, prevFact = 1;
//
//	while (n < 100) {
//		fact = 1;
//		int i = 1;
//		do {
//			fact = fact * i;
//			i = i + 1;
//		} while (i <= n);
//
//		printf("<%hhi (%d!) %d>\n", fact, n, (fact / prevFact));
//
//		prevFact = fact;
//
//		n += 1;
//	}
//
//	printf("main() finish!\n");
//}
//
//
//void main() {
//	printf("main() start!\n");
//
//	int n = 1;
//	long 		fact = 1, prevFact = 1;
//
//	while (n < 100) {
//		fact = 1;
//		int i = 1;
//		do {
//			fact = fact * i;
//			i = i + 1;
//		} while (i <= n);
//
//		printf("<%li (%d!) %d>\n", fact, n, (fact / prevFact));
//
//		prevFact = fact;
//
//		n += 1;
//	}
//
//	printf("main() finish!\n");
//}
//
//
//void main() {
//	printf("main() start!\n");
//
//	int n = 1;
//	long long	fact = 1, prevFact = 1;
//
//	while (n < 100) {
//		fact = 1;
//		int i = 1;
//		do {
//			fact = fact * i;
//			i = i + 1;
//		} while (i <= n);
//
//		printf("<%lli (%d!) %d>\n", fact, n, (fact / prevFact));
//
//		prevFact = fact;
//
//		n += 1;
//	}
//
//	printf("main() finish!\n");
//}
//
//
//void main() {
//	printf("main() start!\n");
//
//	float f = 1.23456789012345678901234567890;
//	int i = 0;
//	while (i < 1000) {
//
//		printf("<%60.30f (%d)>\n", f, i);
//		f *= 10;
//		i += 1;
//	}
//
//	printf("sizeof: f = %d,   i = %d", sizeof(f), sizeof(i));
//
//	printf("main() finish!\n");
//}
//
//
//void main() {
//	int sum = 0;
//	float average;
//	int grade;
//	int counter = 0;
//
//	do {
//		scanf_s("%d", &grade);
//		sum += grade;
//		counter++;
//	} while (grade != 0);
//
//	average = (float)sum / (counter - 1);
//
//	printf("average = %f", average);
//}
//
//
//void main() {
//	printf("main() start!\n");
//
//	int a;
//	int* pa;
//
//	a = 10;
//	pa = &a;
//
//	printf("val: a=%d *pa=%d pa=%p\n", a, *pa, pa);
//	printf("ptr: &a=%p &pa=%p\n", &a, &pa);
//	printf("sizeof: %d %d\n", sizeof a, sizeof(pa));
//
//	*pa = 30;
//
//	printf("val: a=%d *pa=%d pa=%p\n", a, *pa, pa);
//
//	printf("main() finish!\n");
//}
//
//
//void main() {
//	printf("main() start!\n");
//
//	int a[4];
//	a[0] = 1;
//	a[1] = 10;
//	a[2] = 100;
//	a[3] = 1000;
//
//	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
//
//	int b[5] = { 2, 20, 200, 2000, 20000 };
//	printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
//
//	printf("main() finish!\n");
//}
//
//
//
//
//struct date { int d, m, y; };
//
//void main() {
//	printf("main() start!\n");
//
//	struct date d1;
//	d1.d = 11;
//	d1.m = 3;
//	d1.y = 2022;
//
//	struct date d2 = { 31, 12, 2021 };
//
//	printf("(%02d.%02d.%d)\n", d1.d, d1.m, d1.y);
//	printf("(%02d.%02d.%d)\n", d2.d, d2.m, d2.y);
//
//	printf("main() finish!\n");
//}


//МОЙ ПРИМЕР ЧАР И ЯВНОЕ ПРИВЕДЕНИЕ(ЗДЕСЬ С, НАПРИМЕР =4, ВОСПРИНИМАЕТСЯ КАК СИМВОЛ 4, А НЕ ЦИФРА 4)
//void main() {
//	char c;
//	printf("char = %d bayt\n", (int)sizeof(char));
//	scanf_s(" %c", &c,1);
//	char c_max = 127;
//	char c_p = c_max + 1;
//	printf("char: 127 + 1 = %d\n", c_p);
//
//	float f = 3.1;
//	int sum; 
//	sum = c + (char)f;
//	printf("sum = %d\n", sum);
//
//}

//МОЙ ПРИМЕР ЛОНГ ЛОНГ
//void main() {
//	printf("main() start!\n");
//	unsigned long long l;
//	scanf_s("%llu\n", &l);
//	int i = 0;
//	while (l > 0) {
//		printf("<%llu (%d)>\n", l, i);
//		l *= 2;
//		i += 1;
//	} l--;
//	printf("<!!!!%llu (%d)!!!!>\n", l, i);
//	printf("main () finish!\n");
//}


//МОЙ ПРИМЕР ИНТ
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int buter;
//	int sec = 0;
//	printf("buter = ");
//	scanf_s("%d", &buter);
//	while (buter > 0) {
//		buter *= 2;
//		sec += 1;
//		printf("секунда %d: бутеров = %d\n", sec, buter);
//	}printf("на секунде %d вселенная задолжала %d бутеров\n", sec, buter);
//}

//МОЙ ПРИМЕР SHORT
//void main() {
//	short s;
//	printf("s = ");
//	scanf_s("%hd", &s);
//	printf("short = %d bayt\n", (int)sizeof(short));
//	
//	short s_max = 32767;
//	short s_per = s_max + 1;
//	printf("perepolnenie = %d", s_per);
//}


// МОЙ ПРИМЕР ЛОНГ и НЕЯВНОЕ ПЕРЕПОЛНЕНИЕ
//void main() {
//	long box;
//	long bilo;
//	printf("long = %ld bayt\n", (int)sizeof(long));
//	printf("Bylo = ");
//	scanf_s("%ld", &box);
//	do {
//		bilo = box;
//		box = box + 1;
//
//	} while (box > bilo);
//
//	printf("perepolnenie! bilo: %ld, stalo: %ld\n", bilo, box);
//
//	float cena = 2.5f;
//	int itog = box / cena;
//	printf("itog: %d\n", itog);
//	
//}


//МОЙ ПРИМЕР СИГНЕД ИНТ
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	signed int i;
//	signed int in = 0;
//	printf("signed int = %d bayt\n", (int)sizeof(signed int));
//	printf("введите знаковое число (signed int) = ");
//	scanf_s("%d", &i);
//	while (i < 2147483647) {
//		i += 1;
//		if (i == 2147483647) {
//			in = i;
//			break;
//		}
//	}
//	signed i_max = 2147483647;
//	int c;
//	printf("введите количество ");
//	scanf_s("%d", &c);
//	while (c > 0) {
//		signed int ip = in + c;
//		printf("ПЕРЕПОЛНЕНИЕ: %d\n", ip);
//		c--;
//	}
//	
//}


//МОЙ ПРИМЕР ДАБЛ


//МАССИВЫ
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	float t[7];
//	int i;
//	printf("введите температуру за 7 дней: \n");
//	i = 0;
//	while (i < 7) {
//		printf("день %d = ", i + 1);
//		scanf_s("%f", &t[i]);
//		i = i + 1;
//	} printf("\nтемпература за неделю: \n");
//	i = 0;
//	while (i < 7) {
//		printf("день %d = %.1f\n", i + 1, t[i]);
//		i += 1;
//	} float summa = 0;
//	i = 0;
//	while (i < 7) {
//		summa += t[i];
//		i += 1;
//	}printf("\n средняя температура: %.2f\n", summa / 7.0f);
//	float max = t[0];
//	float min = t[0];
//	i = 1;
//	while (i < 7) {
//		if (t[i] > max) {
//			max = t[i];
//		}if (t[i] < min) {
//			min = t[i];
//		}i += 1;
//	}printf("max = %1.f\n", max);
//	printf("min = %1.f\n", min);
//}

//СТРУКТУРЫ
//struct Sochinenie {
//	int soderzhanie, gramotnost;
//	float sredniy;
//};
//
//void main() {
//	struct Sochinenie s;
//	printf("грамотность 1-5: ");
//	scanf_s("%d", &s.gramotnost);
//	printf("содержание 1-5: ");
//	scanf_s("%d", &s.soderzhanie);
//
//	s.sredniy = (s.gramotnost + s.soderzhanie) / 2.0f;
//	printf("%d %d %0.1f", s.gramotnost, s.soderzhanie, s.sredniy);
//}

//ПЕРЕЧИСЛЕНИЕ
//enum Ocenka {
//	PYATERKA = 5,
//	CHETVERKA = 4,
//	TROYKA = 3,
//	DVOYKA = 2,
//};
//void main() {
//	enum Ocenka o;
//	int num;
//	printf("введите оценку 2-5: ");
//	scanf_s("%d", &num);
//
//	o = num;
//	if (o == PYATERKA) {
//		printf("СУПЕР!!!\n");
//	}if (o == CHETVERKA) {
//		printf("Хорошо!!\n");
//	}if (o == TROYKA) {
//		printf("хорошо,что сдал(а)\n");
//	}if (o == DVOYKA) {
//		printf("...\n");
//	}if (num <2 && num >5) {
//		printf("нет такой оценки");
//	}
//}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int yabloko;
	printf("введите количество яблок: ");
	scanf_s("%d", &yabloko);
	printf("положите яблоки в коробку\n");
	int* box = &yabloko;
	printf("теперь в коробке %d яблок\n", yabloko);
	printf("адрес = %p\n", box);
	printf("размер = %d", sizeof(box));


}