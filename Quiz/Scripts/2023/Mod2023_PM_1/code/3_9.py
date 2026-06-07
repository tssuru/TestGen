try:
    a,b,c=6,2,4
    def h(b):
        a=3
        b*=2
        c=5
        return a+b+c
    
    a,b,c=8,7,3
    print(h(b),a,b,c)
    
except: print('error')
