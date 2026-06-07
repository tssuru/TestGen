try:
    def g(b):
        w=49
        if b>-2: 
            return 7
        if b>=0:
             w=1
        else:
             w=0
        return w
    
    print(g(-2))
    
except: print('error')
