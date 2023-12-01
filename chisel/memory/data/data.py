import math

def fibonacci(n):
    if n==1 or n==2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

if __name__ == '__main__':
    # Modify your test pattern here
    n = 10
        
    with open('MemData.hex', 'w') as f_data:
        f_data.write('{:0>8x}\n'.format(n))

    with open('MemData_ans.txt', 'w') as f_ans:
        # f_ans.write('{:0>8x}\n'.format(n))
        f_ans.write('{}\n'.format(fibonacci(n)))