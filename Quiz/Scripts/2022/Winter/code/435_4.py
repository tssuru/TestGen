try:
    def g(b):
        v=86
        if b: 
            v=1
        if b<=1:
             return 3
        else:
             v=6
        return v
    
    print(g(0))
    
except: print('error')
