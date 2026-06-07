try:
    def f(b):
        w=47
        if b<0: 
            w=8
        elif b>-4:
             return 7
        else:
             w=0
        return w
    
    print(f(4))
    
except: print('error')
