try:
    def g(a):
        y=95
        if a!=5: 
            y=6
        if a!=0:
             return 2
        else:
             return 3
        return y
    
    print(g(-5))
    
except: print('error')
