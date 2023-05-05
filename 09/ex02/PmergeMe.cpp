/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:46:36 by jchu              #+#    #+#             */
/*   Updated: 2023/05/05 19:09:17 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PmergeMe.hpp"

void    merge(std::vector<int>& arr, int left, int mid, int right) {
    int l, r, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);
    for (l = 0; l < n1; l++)
        L[l] = arr[left + l];
    for (r = 0; r < n2; r++) 
        R[r] = arr[mid + 1 + r];

        l = 0;
        r = 0;
        k = left;
        while (l < n1 && r < n2) {
            if (L[l] <= R[r]) {
                arr[k] = L[l];
                l++;
            } else {
                arr[k] = R[r];
                r++;
            }
            k++;
        }
        
        while (l < n1) {
            arr[k] = L[l];
            k++;
            l++;
        }
        
        while (r < n2) {
            arr[k] = R[r];
            k++;
            r++;
        }
}

void    merge_sort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void    mergeInsortSortVector(std::vector<int>& vector) {
    merge_sort(vector, 0, vector.size() - 1); 
}

void    merge(std::list<int>& list, std::list<int>& left, std::list<int>& right) {
    std::list<int>::iterator l = left.begin();
    std::list<int>::iterator r = right.begin();

    while (l != left.end() && r != right.end()) {
        if (*l < *r) {
            list.push_back(*l);
            l++;
        } else {
            list.push_back(*r);
            r++;
        }
    }

    while (l != left.end()) {
        list.push_back(*l);
        l++;
    }

    while (r != right.end()) {
        list.push_back(*r);
        r++;
    }
    
}

void    mergeInsortSortList(std::list<int>& list) {
    if (list.size() < 2) {
        return;
    }

    int count = 0;
    std::list<int> left, right;
    std::list<int>::iterator it = list.begin();

    while (it != list.end()) {
        if (count < list.size() / 2) {
            left.push_back(*it);
        } else {
            right.push_back(*it);
        }
        count++;
        it++;
    }

    mergeInsortSortList(left);
    mergeInsortSortList(right);

    list.clear();
    merge(list, left, right);
}
