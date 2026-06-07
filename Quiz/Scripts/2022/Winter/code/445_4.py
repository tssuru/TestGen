try:
    def f(c):
        x=60
        if c!=0: 
            x=5
        elif c<=-2:
             return 9
        else:
             x=2
        return x
    
    print(f(-1))
    
except: print('error')
