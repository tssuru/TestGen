try:
    def g(b):
        y=88
        if b>4: 
            y=1
        elif b<=0:
             return 9
        else:
             y=6
        return y
    
    print(g(-3))
    
except: print('error')
