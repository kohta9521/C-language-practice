/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:29:13 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/18 09:45:59 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	int A, B;
	string op;
	cin >> A >> op >> B;

	if (op == "+") {
		cout << A + B << endl;
	} else if (op == "-") {
		cout << A - B << endl;
	} else if (op == "*") {
		cout << A * B << endl;
	} else if (op == "/"){
		if ( B == 0) {
			cout << "error" << endl;
		} else {
			cout << A / B << endl;
		}
	} else if (op == "?") {
		cout << "error" << endl;
	} else if (op == "=") {
		cout << "error" << endl;
	} else if (op == "!") {
		cout << "error" << endl;
	}
}
