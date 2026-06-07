try:
    def g(d):
        x=79
        if d: 
            return 9
        elif d!=4:
             x=3
        else:
             return 7
        return x
    
    print(g(-1))
    
except: print('error')
