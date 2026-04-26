my_list = ['a', 'b', 'c', 'a', 'd', 'a']
print("Original List:", my_list)
if 'a' in my_list:
    my_list.remove('a')   
    print("After removing first occurrence of 'a':", my_list)
else:
    print("'a' not found in the list")