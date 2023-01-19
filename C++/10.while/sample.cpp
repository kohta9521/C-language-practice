/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:16:30 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/19 10:20:20 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	int N;
	cin >> N;

	int sum = 0;
	int x;
	int i = 0;

	while (i < N) {
		cin >> x;
		sum += x;
		i ++;
	}

	cout << sum << endl;
}
