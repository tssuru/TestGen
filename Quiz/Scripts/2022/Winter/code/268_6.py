try:
    a,b,c=7,9,1
    def h(a):
        a=5
        b=2
        c=3
        return a+b+c
    
    a,b,c=6,4,2
    print(h(b),a,b,c)
    
except: print('error')
