try:
    def f(b):
        v=58
        if b: 
            v=0
        elif b==-5:
             return 3
        else:
             v=5
        return v
    
    print(f(-4))
    
except: print('error')
