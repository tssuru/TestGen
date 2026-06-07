try:
    def g(a):
        y=49
        if a: 
            y=6
        if a>-4:
             return 5
        else:
             y=9
        return y
    
    print(g(-4))
    
except: print('error')
