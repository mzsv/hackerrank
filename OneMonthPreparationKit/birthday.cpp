/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   birthday.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:00:49 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/30 20:15:06 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int birthday(vector<int> s, int d, int m) { // sum = d, len = m
    int count = 0;
    int sum = 0;

    for (unsigned int i = 0; i < s.size() - m + 1; ++i) {
        for (unsigned int j = i; j < i + m; ++j) {
            sum += s[j];
        }
        if (sum == d) {
            ++count;
        }
        sum = 0;
    }
    return count;
}

int main() {
    vector<int> s = {2, 2, 1, 3, 2};

    cout << birthday(s, 4, 2) << endl;
    return 0;
}
