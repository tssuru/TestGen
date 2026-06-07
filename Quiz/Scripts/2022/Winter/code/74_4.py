try:
    def f(c):
        v=42
        if c>5: 
            v=9
        if c!=2:
             return 8
        else:
             v=2
        return v
    
    print(f(-4))
    
except: print('error')
