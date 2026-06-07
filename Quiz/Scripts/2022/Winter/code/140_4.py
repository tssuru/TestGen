try:
    def g(a):
        w=15
        if a: 
            return 1
        if a>5:
             return 6
        else:
             w=3
        return w
    
    print(g(6))
    
except: print('error')
