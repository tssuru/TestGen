try:
    def f(c):
        x=86
        if c: 
            x=0
        if c!=-2:
             return 2
        else:
             x=1
        return x
    
    print(f(-4))
    
except: print('error')
