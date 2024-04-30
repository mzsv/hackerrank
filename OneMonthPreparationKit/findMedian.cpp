/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findMedian.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:28:43 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/30 20:30:41 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMedian(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() / 2];
}

int main() {
    vector<int> arr = {0, 1, 2, 4, 6, 5, 3};

    cout << findMedian(arr) << endl;
    return 0;
}
