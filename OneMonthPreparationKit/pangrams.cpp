/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pangrams.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:58:24 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/30 14:16:58 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

string pangrams(string s) {
    unordered_set<char> set;

    for (unsigned int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) {
            set.insert(tolower(s[i]));
        }
    }
    return set.size() == 26 ? "pangram" : "not pangram";
}

int main() {
    string s = "We promptly judged antique ivory buckles for the next prize";

    cout << pangrams(s) << endl;
    return 0;
}
