try:
    def g(a):
        w=64
        if a: 
            return 4
        elif a==0:
             w=0
        else:
             w=7
        return w
    
    print(g(1))
    
except: print('error')
