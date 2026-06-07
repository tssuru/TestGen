try:
    def f(a):
        v=35
        if a!=0: 
            v=7
        elif a!=3:
             v=0
        else:
             return 8
        return v
    
    print(f(1))
    
except: print('error')
