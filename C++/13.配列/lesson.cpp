/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lesson.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:53:55 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/20 17:00:51 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int	main() {
	string str;

	str = "abcd";
	cout << str.at(0) << endl;
	cout << str.size() << endl;

	vector<int> vec;
	vec = { 25, 100, 64 };
	cout << vec.at(0) << endl;
	cout << vec.size() << endl;
}
