try:
    def g(a):
        v=31
        if a: 
            return 2
        if a!=3:
             v=0
        else:
             return 8
        return v
    
    print(g(-6))
    
except: print('error')
