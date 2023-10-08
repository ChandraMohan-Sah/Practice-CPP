    int *starting_index = arr; //holds address of starting index of arr
    int *ending_index = arr + n;
    int *rotate_left_over_3rd_index = arr + 3;
    rotate(*starting_index,*rotate_left_over_3rd_index ,*ending_index);
