/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:42:22 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/20 16:47:38 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	string S;
	cin >> S;

	// main

		int answer = 1;

		for (int i = 0; i < S.size(); i ++) {
			if (S.at(i) == '+') {
				answer ++;
			}
			if (S.at(i) == '-') {
				answer --;
			}

		}
	
	cout << answer << endl;
}
