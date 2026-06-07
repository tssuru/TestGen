try:
    def f(n):
        if n > 9:
                f(n // 100)
        print(n % 10, end=' ')
        
    
    f(987654)
    
except: print('error')
