try:
    a,b,c=9,6,5
    def h(a):
        a*=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,1,4
    print(h(b),a,b,c)
    
except: print('error')
