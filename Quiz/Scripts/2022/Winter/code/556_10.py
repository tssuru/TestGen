try:
    def f(n):
        if n <= 9:
            print(n % 10, end=' ')
        else:
            f(n // 10)
    
    print('R', end=' ')
    f(987651)
    
except: print('error')
