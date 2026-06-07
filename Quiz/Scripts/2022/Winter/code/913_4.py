try:
    def f(b):
        x=33
        if b: 
            x=6
        elif b>-1:
             return 1
        else:
             x=5
        return x
    
    print(f(-9))
    
except: print('error')
