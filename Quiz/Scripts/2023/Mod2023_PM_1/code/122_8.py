try:
    def g(a):
        y=55
        if a: 
            y=2
        elif a<=-1:
             return 8
        else:
             return 2
        return y
    
    print(g(-9))
    
except: print('error')
