/*  SUMMARY
    #include<algorithm> header file

    1. rotate(starting_index, rotate_about_x_index_to_left,  ending_index);
    2. reverse(starting_index, ending_index);
    3. sort(starting_index, ending_index)

    4. swap(1st_num, 2nd_num);
    5. min(1st_num, 2nd_num); min(a, min(b,c));
    6. max(1st_num, 2nd_num);

    <----In Previous Sections --->

    7. find(starting_index, ending_index, key); //returns address
        So, It Must be stored in pointer vaiable (like int *ans).

    8. binary_search(starting_index, ending_index, key) // return boolean value (true or false)
        So, It Must be stored in boolean vaiable (like bool index).

    9.  lower_bound(starting_index, ending_index, key); //returns address of element >=key
    10. upper_bound(starting_index, ending_index, key); //returns address of element  >key


    Question
    1. What is ending index ??
        Suppose this array :  arr[] = {12, 35, 45, 23, 2344 };
        
      Index:  0     1     2     3     4    5-->this is ending index (arr + n);
            ----------------------------------- 
            | 12 | 35  | 45 | 23 | 2344 |     |
            -----------------------------------

    2. How can index be obtained from two different addresses ?
        index = address1 - address2;  
        (suppose :
            address1 = 1024, address2 = 1008
            then, index = 1024 - 1008 = 3;
            Assuming 8 byte for size of one bucket for integer.
            :Understand accessing element using pointer for more clarity.
        )
        (like address1 can be obtained from lower_bound function)
        (like address2 can be obtained from upper_bound function)



    3. How to obtain freq of an element in an array ; Provided array is sorted ?

        freq = upper_bound - lower_bound;
        Here, Subtraction of two addresses gives index which is equivalent to freq of an element.

*/
