try:
    def f(c):
        v=20
        if c<=1: 
            return 8
        if c>-4:
             return 1
        else:
             v=6
        return v
    
    print(f(-5))
    
except: print('error')
