try:
    def f(c):
        w=87
        if c: 
            w=8
        if c<=5:
             w=4
        else:
             return 1
        return w
    
    print(f(-3))
    
except: print('error')
