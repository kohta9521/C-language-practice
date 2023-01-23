/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:33:56 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/23 18:37:00 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

	// 関数定義
	int my_min(int x, int y) {
		if (x < y) {
			return x;
		}
		else {
			return y;
		}
	}

int	main() {
	int answer = my_min(10, 5);
	cout << answer << endl;
}

