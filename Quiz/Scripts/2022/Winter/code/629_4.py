try:
    def f(c):
        y=74
        if c: 
            y=8
        if c==0:
             return 3
        else:
             y=5
        return y
    
    print(f(-2))
    
except: print('error')
