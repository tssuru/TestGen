try:
    def f(c):
        v=95
        if c: 
            return 4
        elif c>-1:
             v=9
        else:
             return 1
        return v
    
    print(f(1))
    
except: print('error')
