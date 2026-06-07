try:
    def f(n):
        print(n % 2, end=' ')
        if n > 2:
            f(n // 2)
        
    
    f(16)
    
except: print('error')
