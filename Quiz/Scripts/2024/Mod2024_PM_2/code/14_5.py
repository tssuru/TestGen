try:
    def f(n):
        if n > 9:
            f(n // 10)
        print(n % 10, end=' ')
        
    
    f(543216)
    
except: print('error')
