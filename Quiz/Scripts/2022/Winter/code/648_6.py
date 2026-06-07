try:
    a,b,c=6,9,7
    def h(a):
        a=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=3,5,2
    print(h(b),a,b,c)
    
except: print('error')
