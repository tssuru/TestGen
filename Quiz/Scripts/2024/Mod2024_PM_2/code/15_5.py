try:
    def f(n):
        if n <= 9:
            print(n % 10, end=' ')
        else:
            f(n // 10)
    
    f(543216)
    
except: print('error')
