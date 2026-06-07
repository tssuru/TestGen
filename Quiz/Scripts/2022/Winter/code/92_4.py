try:
    def g(b):
        w=81
        if b: 
            w=7
        elif b!=-3:
             w=8
        else:
             return 3
        return w
    
    print(g(5))
    
except: print('error')
