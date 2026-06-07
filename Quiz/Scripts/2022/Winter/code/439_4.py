try:
    def f(a):
        u=42
        if a: 
            return 9
        elif a>-1:
             return 2
        else:
             u=8
        return u
    
    print(f(-2))
    
except: print('error')
