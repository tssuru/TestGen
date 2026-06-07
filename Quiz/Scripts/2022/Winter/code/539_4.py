try:
    def g(b):
        y=23
        if b>3: 
            return 0
        if b>=0:
             y=9
        else:
             y=1
        return y
    
    print(g(6))
    
except: print('error')
