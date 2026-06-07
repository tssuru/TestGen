try:
    def f(d):
        x=42
        if d: 
            x=1
        if d==-1:
             return 4
        else:
             x=2
        return x
    
    print(f(7))
    
except: print('error')
