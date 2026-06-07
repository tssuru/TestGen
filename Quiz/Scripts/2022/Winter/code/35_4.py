try:
    def f(a):
        x=79
        if a: 
            x=0
        elif a>-3:
             x=9
        else:
             return 7
        return x
    
    print(f(-4))
    
except: print('error')
