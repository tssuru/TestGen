try:
    def f(n):
        if n > 9:
            f(n // 10)
        else:
            print(n % 10, end=' ')
    
    print('R', end=' ')
    f(543216)
    
except: print('error')
