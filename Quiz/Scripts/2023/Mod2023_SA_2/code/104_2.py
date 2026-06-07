try:
    a,b,c=3,0,4
    def h(b):
        a=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=5,6,9
    print(h(b),a,b,c)
    
except: print('error')
