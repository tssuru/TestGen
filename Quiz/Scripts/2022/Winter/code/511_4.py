try:
    def f(b):
        z=48
        if b: 
            z=1
        elif b<4:
             return 6
        else:
             z=8
        return z
    
    print(f(-4))
    
except: print('error')
