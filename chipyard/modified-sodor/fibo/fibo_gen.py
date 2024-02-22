import math
import numpy as np

def fibonacci(n):
    if n==1 or n==2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
if __name__ == '__main__':
    # Modify your test pattern here
    n = 5
    a = np.array([1,3,2,4,5])
        
    with open('fibo_data.txt', 'w') as f_data:        
        f_data.write('int n = {};\n'.format(n))
        f_data.write('int a[{}];\n'.format(n))
        for i in range(n):
            f_data.write('a[{}] = {};\n'.format(i, a[i]))
                        #  %d{:0>8x}\n'.format(a[i]))

    with open('fibo_data_ans.txt', 'w') as f_ans:
        for i in range(n):
            # f_ans.write('{:0>8x}\n'.format(a[i]))
            f_ans.write('{:0>8x}\n'.format(fibonacci(a[i])))

             