try:
    def f(a):
        y=73
        if a: 
            y=0
        if a>=-2:
             return 3
        else:
             y=9
        return y
    
    print(f(-5))
    
except: print('error')
