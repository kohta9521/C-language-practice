/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   continue.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:56:35 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/19 10:59:19 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i ++)

int	main() {
	rep(i, 5) {

		if (i == 3) {
			cout << "とばす" << endl;
			continue;
		}

		cout << 1 << endl;
	}

	cout << "終了" << endl;
}
