import dis

matrix_a = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

matrix_b = [
    [1, 1, 1],
    [2, 2, 2],
    [3, 3, 3]
]

result_matrix = [
    [0, 0, 0],
    [0, 0, 0],
    [0, 0, 0]
]


def matrix_mult():
    for i in xrange(len(matrix_a)):
        for j in xrange(len(matrix_b[0])):
            for k in xrange(len(matrix_b)):
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j]


def main():
    matrix_mult()
    print result_matrix
    print dis.dis(matrix_mult)

if __name__ == '__main__':
    main()


"""
Output:


[[14, 14, 14], [32, 32, 32], [50, 50, 50]]
 23           0 SETUP_LOOP             128 (to 131)
              3 LOAD_GLOBAL              0 (xrange)
              6 LOAD_GLOBAL              1 (len)
              9 LOAD_GLOBAL              2 (matrix_a)
             12 CALL_FUNCTION            1
             15 CALL_FUNCTION            1
             18 GET_ITER            
        >>   19 FOR_ITER               108 (to 130)
             22 STORE_FAST               0 (i)

 24          25 SETUP_LOOP              99 (to 127)
             28 LOAD_GLOBAL              0 (xrange)
             31 LOAD_GLOBAL              1 (len)
             34 LOAD_GLOBAL              3 (matrix_b)
             37 LOAD_CONST               1 (0)
             40 BINARY_SUBSCR       
             41 CALL_FUNCTION            1
             44 CALL_FUNCTION            1
             47 GET_ITER            
        >>   48 FOR_ITER                75 (to 126)
             51 STORE_FAST               1 (j)

 25          54 SETUP_LOOP              66 (to 123)
             57 LOAD_GLOBAL              0 (xrange)
             60 LOAD_GLOBAL              1 (len)
             63 LOAD_GLOBAL              3 (matrix_b)
             66 CALL_FUNCTION            1
             69 CALL_FUNCTION            1
             72 GET_ITER            
        >>   73 FOR_ITER                46 (to 122)
             76 STORE_FAST               2 (k)

 26          79 LOAD_GLOBAL              4 (result_matrix)
             82 LOAD_FAST                0 (i)
             85 BINARY_SUBSCR       
             86 LOAD_FAST                1 (j)
             89 DUP_TOPX                 2
             92 BINARY_SUBSCR       
             93 LOAD_GLOBAL              2 (matrix_a)
             96 LOAD_FAST                0 (i)
             99 BINARY_SUBSCR       
            100 LOAD_FAST                2 (k)
            103 BINARY_SUBSCR       
            104 LOAD_GLOBAL              3 (matrix_b)
            107 LOAD_FAST                2 (k)
            110 BINARY_SUBSCR       
            111 LOAD_FAST                1 (j)
            114 BINARY_SUBSCR       
            115 BINARY_MULTIPLY     
            116 INPLACE_ADD         
            117 ROT_THREE           
            118 STORE_SUBSCR        
            119 JUMP_ABSOLUTE           73
        >>  122 POP_BLOCK           
        >>  123 JUMP_ABSOLUTE           48
        >>  126 POP_BLOCK           
        >>  127 JUMP_ABSOLUTE           19
        >>  130 POP_BLOCK           
        >>  131 LOAD_CONST               0 (None)
            134 RETURN_VALUE        
None

"""
