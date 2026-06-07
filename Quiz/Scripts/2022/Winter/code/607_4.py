try:
    def f(d):
        w=32
        if d!=2: 
            w=4
        elif d>=1:
             return 8
        else:
             w=7
        return w
    
    print(f(-8))
    
except: print('error')
