/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:09:27 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/19 10:14:40 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	int x, a, b;
	cin >> x >> a >> b;

	// 1の出力
	x++;
	cout << x << endl;

	// (a + b) * 1.
	x *= a + b;
	cout << x << endl;

	// 掛けた値
	x *= x;
	cout << x << endl;

	//
	x --;
	cout << x << endl;
}
