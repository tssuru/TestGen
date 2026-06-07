try:
    def f(a):
        w=52
        if a!=5: 
            w=9
        elif a>0:
             return 7
        else:
             w=5
        return w
    
    print(f(1))
    
except: print('error')
