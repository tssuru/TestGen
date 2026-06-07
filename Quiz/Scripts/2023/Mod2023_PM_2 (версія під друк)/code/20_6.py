try:
    def f(n):
        if n > 2:
            f(n // 2)
        else:
            print(n % 2, end=' ')
    
    f(16)
    
except: print('error')
