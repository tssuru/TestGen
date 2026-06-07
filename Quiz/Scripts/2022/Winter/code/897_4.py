try:
    def f(c):
        x=94
        if c: 
            x=8
        elif c>-2:
             x=4
        else:
             return 3
        return x
    
    print(f(-2))
    
except: print('error')
