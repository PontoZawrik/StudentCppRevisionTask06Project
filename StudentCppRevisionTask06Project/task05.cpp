﻿#include "tasks.h"

/*	Task 05. Chess & Bishop [шахматный слон]
*
*	Шахматный слон (chess bishop) ходит только по диагоналям.
*	Даны две различные клетки шахматной доски, определите,
*	может ли слон попасть с первой клетки на вторую одним ходом.
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое (не забудьте про "защиту от дурака"),
*	задающие номер столбца и номер строки сначала для первой клетки (x1, y1),
*	потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 5 5			1,8 2,8 3,8 4,8 5,8 6,8 7,8 8,8
*								1,7 2,7 3,7 4,7 5,7 6,7 7,7 8,7
* *								1,6 2,6 3,6 4,6 5,6 6,6 7,6 8,6
* *								1,5 2,5 3,5 4,5 5,5 6,5 7,5 8,5
* *								1,4 2,4 3,4 4,4 5,4 6,4 7,4 8,4
* *								1,3 2,3 3,3 4,3 5,3 6,3 7,3 8,3
* *								1,2 2,2 3,2 4,2 5,2 6,2 7,2 8,2
* *								1,1 2,1 3,1 4,1 5,1 6,1 7,1 8,1
*								
*	[output 1]: true
*
*	[ input 2]: 4 4 4 8
*	[output 2]: false
*/

bool task05(int x1, int y1, int x2, int y2) {
	if (x1 > 8 || x2 > 8 || y1 > 8 || y2 > 8
		|| x1 <= 0 || x2 <= 0 || y1 <= 0 || y2 <= 0) {
		return false;
	}

	int t1 = x2 - x1 > 0 ? -(x2 - x1) : x2 - x1;
	int t2 = y2 - y2 > 0 ? -(y2 - y2) : y2 - y2;

	if (t1 == t1 && x1 != x2 && y1 != y2) {
		return true;
	}
	return false;
}