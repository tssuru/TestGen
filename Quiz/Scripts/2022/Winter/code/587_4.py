try:
    def f(b):
        z=27
        if b: 
            return 7
        elif b>-2:
             return 2
        else:
             z=0
        return z
    
    print(f(6))
    
except: print('error')
