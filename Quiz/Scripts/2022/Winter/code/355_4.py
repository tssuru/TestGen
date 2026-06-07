try:
    def f(b):
        v=54
        if b>=-1: 
            return 3
        elif b!=-2:
             v=2
        else:
             return 8
        return v
    
    print(f(-3))
    
except: print('error')
