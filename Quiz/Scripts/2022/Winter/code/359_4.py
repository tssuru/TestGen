try:
    def g(a):
        w=38
        if a: 
            w=3
        if a!=0:
             return 4
        else:
             w=6
        return w
    
    print(g(-1))
    
except: print('error')
