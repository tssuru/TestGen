try:
    def f(c):
        x=56
        if c: 
            return 7
        if c==-4:
             x=9
        else:
             return 5
        return x
    
    print(f(3))
    
except: print('error')
