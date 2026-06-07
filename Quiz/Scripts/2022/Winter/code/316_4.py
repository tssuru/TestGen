try:
    def g(a):
        w=55
        if a>=3: 
            return 2
        if a<=4:
             w=9
        else:
             return 3
        return w
    
    print(g(3))
    
except: print('error')
