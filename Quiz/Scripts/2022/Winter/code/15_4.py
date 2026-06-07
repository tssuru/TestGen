try:
    def g(b):
        y=14
        if b: 
            y=7
        if b>=5:
             return 2
        else:
             y=5
        return y
    
    print(g(-1))
    
except: print('error')
