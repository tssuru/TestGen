try:
    def h(c):
        x=99
        if c>=0: 
            return 5
        elif c<3:
             x=4
        else:
             return 6
        return x
    
    print(h(-9))
    
except: print('error')
