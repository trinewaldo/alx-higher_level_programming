#!/usr/bin/python3

def new_in_list(my_list, idx, element):
    if my_list:
        if idx < 0 or idx >= len(my_list):
            return my_list
        else:
            n_list = my_list.copy()
            n_list[idx] = element
            return n_list
