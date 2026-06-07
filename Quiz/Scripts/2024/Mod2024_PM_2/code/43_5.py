try:
    def f(n):
        if n > 9:
            return f(n // 100) + 1
        else:
            return 1
    
    print(f(123456))
    
except: print('error')
