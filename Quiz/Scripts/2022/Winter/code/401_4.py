try:
    def f(b):
        x=96
        if b!=0: 
            x=7
        elif b>=1:
             return 5
        else:
             return 0
        return x
    
    print(f(3))
    
except: print('error')
