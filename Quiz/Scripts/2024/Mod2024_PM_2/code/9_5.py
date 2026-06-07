try:
    def f(n):
        if n > 9:
            return f(n // 10) + 1
        else:
            return 1
    
    print(f(123456))
    
except: print('error')
