try:
    def f(a):
        v=83
        if a>0: 
            return 2
        if a!=2:
             v=1
        else:
             v=7
        return v
    
    print(f(-2))
    
except: print('error')
