try:
    def h(a):
        x=78
        if a: 
            x=5
        elif a<=5:
             return 4
        else:
             x=0
        return x
    
    print(h(6))
    
except: print('error')
