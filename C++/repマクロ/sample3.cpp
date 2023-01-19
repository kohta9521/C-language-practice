/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample3.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:52:39 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/19 10:54:43 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i ++)

int	main() {
	int N;
	cin >> N;

	int sum = 0;
	int x;

	rep(i, N) {
		cin >> x;
		sum += x;
	}

	cout << sum << endl;
}
