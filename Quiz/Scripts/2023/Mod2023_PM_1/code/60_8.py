try:
    def f(b):
        z=20
        if b!=2: 
            z=7
        elif b>-4:
             z=1
        else:
             return 3
        return z
    
    print(f(7))
    
except: print('error')
