try:
    def f(d):
        z=97
        if d: 
            return 8
        if d>-5:
             z=7
        else:
             return 2
        return z
    
    print(f(-4))
    
except: print('error')
