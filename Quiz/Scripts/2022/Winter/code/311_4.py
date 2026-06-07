try:
    def f(c):
        v=87
        if c<1: 
            v=8
        if c!=-1:
             v=3
        else:
             return 0
        return v
    
    print(f(-7))
    
except: print('error')
