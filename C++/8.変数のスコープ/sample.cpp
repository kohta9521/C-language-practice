/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:38:28 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/18 10:53:19 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1
  if (p == 1) {
    int price;
    cin >> price;
  }

  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
	cout << text << "!" << endl;
  }
  int price, N;
  cin >> price >> N;
  cout << price * N << endl;
}

