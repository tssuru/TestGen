try:
    def f(c):
        w=27
        if c: 
            w=5
        if c<=0:
             return 3
        else:
             return 0
        return w
    
    print(f(-7))
    
except: print('error')
