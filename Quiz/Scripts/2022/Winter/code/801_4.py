try:
    def f(b):
        w=23
        if b: 
            w=0
        elif b>-3:
             return 2
        else:
             return 9
        return w
    
    print(f(-1))
    
except: print('error')
