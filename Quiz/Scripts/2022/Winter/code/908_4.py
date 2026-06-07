try:
    def g(a):
        y=75
        if a>=5: 
            y=0
        if a<2:
             return 4
        else:
             y=8
        return y
    
    print(g(5))
    
except: print('error')
