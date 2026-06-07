try:
    a,b,c=8,0,2
    def h(b):
        a=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=4,6,9
    print(h(b),a,b,c)
    
except: print('error')
