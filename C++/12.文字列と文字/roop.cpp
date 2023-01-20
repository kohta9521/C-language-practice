/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roop.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:23:35 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/20 16:24:52 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	string str;
	cin >> str;

	int count = 0;
	for (int i = 0; i < str.size(); i ++) {
		if (str.at(i) == 'O') {
			count ++;
		}
	}

	cout << count << endl;
}
