try:
    def f(b):
        w=10
        if b: 
            return 1
        elif b<=-2:
             w=3
        else:
             return 0
        return w
    
    print(f(-5))
    
except: print('error')
