try:
    def f(a):
        y=55
        if a<=-4: 
            y=5
        if a>-2:
             y=4
        else:
             return 3
        return y
    
    print(f(1))
    
except: print('error')
