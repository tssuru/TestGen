try:
    def g(b):
        w=55
        if b: 
            return 1
        if b>=4:
             w=9
        else:
             return 8
        return w
    
    print(g(4))
    
except: print('error')
