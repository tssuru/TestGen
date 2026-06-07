try:
    def f(b):
        z=78
        if b: 
            return 4
        if b<=-5:
             return 7
        else:
             z=0
        return z
    
    print(f(7))
    
except: print('error')
