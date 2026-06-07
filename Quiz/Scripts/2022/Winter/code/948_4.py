try:
    def g(c):
        y=77
        if c<=-3: 
            return 0
        if c>=5:
             y=7
        else:
             return 5
        return y
    
    print(g(-2))
    
except: print('error')
