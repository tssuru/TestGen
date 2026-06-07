try:
    def f(n):
        print(n % 10, end=' ')
        if n > 9:
               f(n // 100)
        
    
    
    print('R', end=' ')
    f(123456)
    
except: print('error')
