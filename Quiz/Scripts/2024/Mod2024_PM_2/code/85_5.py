try:
    def f(n):
        print(n % 10, end=' ')
        if n > 9:
               f(n // 100)
        
    
    f(123456)
    
except: print('error')
