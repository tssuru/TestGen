try:
    def f(a):
        v=31
        if a<2: 
            v=2
        elif a>=-2:
             return 6
        else:
             v=3
        return v
    
    print(f(-5))
    
except: print('error')
