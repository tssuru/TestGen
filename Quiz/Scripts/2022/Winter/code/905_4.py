try:
    def f(a):
        v=13
        if a!=4: 
            return 3
        if a>-3:
             v=2
        else:
             return 6
        return v
    
    print(f(2))
    
except: print('error')
