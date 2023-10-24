/*
-------------------------------------------------------------------------------------------------------
Operations of iterators :-

1. begin() :- This function is used to return the beginning position of the container.

2. end() :- This function is used to return the after end position of the container.

3. advance() :- This function is used to increment the iterator position till the specified number mentioned in its arguments.

------------Not that important ------------------------

4. next() :- This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.

5. prev() :- This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.

6. inserter() :- This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.

------------------Most understand------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    1) In case of vector :
        (note vector can be accessed through index as well like vec[0])
        +-------+-----+----+------+
        |  5    |  6  | 12 | 299  |
        +-------------------------+
            |
            it - Iterator 'it' works like pointer. 'it' is pointing to first element.
            - Dereferencing of pointer gives value contained in it.
            - Here  : (*it) gives value 5.
                    : (*(it+1)) gives value 6.
                    : (*(it+2)) gives value 12.

        
    2) In case of map :

        map<int, int> ans;

        key    value
        +------+-------+
        |  12  |  13   |  <-- it : 'it' is pointing to first element of map.
        |  16  |  03   |         :  (*it) gives value. i.e |  12  |  13   | 
        |  32  |  13   |         :  (*it).first gives key. OR : it->first
        |  42  |  43   |         :  (*it).second gives value.  OR : it->second
        |  67  |  25   |
        |  19  |  13   |
        |  45  |  11   |
        +--------------+


    3) Think for pair yourself.

    4) In case of range based loops;
        --------------------------------------------------------------------------------------
        map <int,string> mp ;
        for(auto it : mp){
            cout<it.first<<"  "<<it.second<<endl;
        }

        Here; it is directly pointing to value .So no need to dereference to access value.
        Directly use to get the value.
        -------------------------------------------------------------------------------------
*/

