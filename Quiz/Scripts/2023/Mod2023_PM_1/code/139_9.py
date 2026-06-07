try:
    a,b,c=9,1,7
    def h(a):
        a=3
        b+=2
        c=4
        return a+b+c
    
    a,b,c=2,6,9
    print(h(b),a,b,c)
    
except: print('error')
