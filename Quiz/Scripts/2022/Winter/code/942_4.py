try:
    def f(c):
        v=91
        if c: 
            return 3
        if c>=-2:
             v=1
        else:
             v=2
        return v
    
    print(f(0))
    
except: print('error')
