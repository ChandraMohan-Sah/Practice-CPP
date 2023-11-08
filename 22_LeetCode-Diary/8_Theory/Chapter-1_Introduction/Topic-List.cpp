/*---------------  Introduction ----------------------

    1.C++ Code Templates 
        -Importance of #include ?
        -Imporatance of using namespace std ?
        -What does it mean ?
            g++ -std=c++11 -O2 -Wall test.cpp -o test

    2.Input and Output
        -Standard Streams 
            cin , cout , getline(cin, s)
        
        - "\n" works faster than endl
        - C functions scanf and printf are an alternative to the C++ standard streams. 
            They are usually a bit faster.
        - See -->{ 1_amount_of_data.cpp }
        - I/O from file ; See --->{ 2_IO_from_file.cpp }

    
    3.Working With Numbers 
        -Integers ----->{ See: 3_integers_overflow.cpp}
        -Modular Arithmetics ---->{ See: 4_modulo_operation.cpp }
        -Floating Point Numbers  ----->{ See: 5_floating_Point_Precision.cpp}
    
    4.Shortening Codes
        -using typedef ----->{ See: 6_Shortening_typedef.cpp}
        -using Macros ----->{ See: 7_Shortening_macros.cpp}

    5.Mathmatics ----->{ See: 8_sumation.cpp}

        -Sum to N formula     [1,2,3,4......N]
        -Sum of Squares till N      [1^2 +2^2 +3^2 +. . . +n^2]
        -Arithmetic Progression Sum     [3,7,11,15,.....]
        -Geometric Progression Sum     [3,6,12,24,.....]

    6.Set Theory ----->{ See: 9_set_theory.cpp}
        -Intersection
        -Union
        -Complement
        -Difference
        -Subset
    
    7.Boolean Logic [Either True or False] --->{ See: 10_boolean_logic.cpp}
        -Negation !
        -Conjunction ^
        -Disjunction ∨
        -Implication =>
        -Equivalence <=>
        -Quantifier 
        -Predicate

    8.Function --->{ See: 11_basic_function.cpp}

        -Rounds the number x down to an integer : 3/2 = 1
        -Rounds the number x up to an integer : 3/2 = 2
        - min() , max()
        -Factorial 
        -Fibonacci
        -Binet's Formula 
    
    9.Logarithms [V.V.Imp] =>Read it  ---->{ See: 12_logarithms.cpp}

        -A useful property of logarithms is that logk(x) equals the number of times 
            we have to divide x by k before we reach the number 1.

        -For example, log2(32) = 5 because 5 divisions by 2 are needed:
            32 →16 →8 →4 →2 →1

        -Logarithm of a product , quotient.

        -Useful formulas

        -Another property of logarithms is that the number of digits of an
        integer x in base b is [logb(x) +1]. For example, the representation 
        of 123 in base 2 is 1111011 and [log2(123) +1] = 7.

------------------------------------------------------------------------------------
*/