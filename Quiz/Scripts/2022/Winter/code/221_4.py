try:
    def g(b):
        w=30
        if b<=1: 
            w=0
        if b>-5:
             return 3
        else:
             w=8
        return w
    
    print(g(1))
    
except: print('error')
