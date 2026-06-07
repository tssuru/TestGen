try:
    def g(b):
        y=88
        if b==4: 
            return 8
        if b<=-4:
             y=1
        else:
             y=6
        return y
    
    print(g(2))
    
except: print('error')
