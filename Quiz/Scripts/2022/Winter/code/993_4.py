try:
    def f(c):
        w=23
        if c==3: 
            w=9
        elif c>0:
             return 8
        else:
             w=0
        return w
    
    print(f(9))
    
except: print('error')
