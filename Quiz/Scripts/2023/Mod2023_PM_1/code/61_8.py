try:
    def g(c):
        v=33
        if c: 
            v=2
        elif c>=-5:
             return 1
        else:
             return 3
        return v
    
    print(g(-3))
    
except: print('error')
