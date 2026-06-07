try:
    def f(a):
        w=85
        if a: 
            return 1
        if a!=0:
             w=0
        else:
             return 5
        return w
    
    print(f(0))
except: print('error')
