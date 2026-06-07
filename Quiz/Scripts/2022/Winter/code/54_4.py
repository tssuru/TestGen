try:
    def f(a):
        x=80
        if a!=2: 
            return 2
        if a<=-5:
             x=1
        else:
             return 6
        return x
    
    print(f(-3))
    
except: print('error')
