/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:22:32 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/19 10:30:07 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	int A, B;
	cin >> A >> B;

	// プログラム内容
	// 変数の設定
	int i = 0;

	// Aの行の記述
	cout << "A:";
	while (i < A) {
		cout << "]";
		i ++;
	}
	cout << endl;

	// Bの行の記述
	int o = 0;
	cout  << "B:";
	while (o < B) {
		cout << "]";
		o ++;
	}
	cout << endl;
}
