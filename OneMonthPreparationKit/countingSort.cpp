/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countingSort.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:08:53 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/29 15:45:02 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> count(100, 0);

    for (unsigned int i = 0; i < arr.size(); ++i) {
        ++count[arr[i]];
    }
    return count;
}

int main() {
    vector<int> arr = {1, 1, 3, 2, 1};

    for (unsigned int i = 0; i < countingSort(arr).size(); ++i) {
        cout << countingSort(arr)[i] << " ";
    }
    return 0;
}
