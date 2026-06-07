try:
    a,b,c=9,4,5
    def h(a):
        a=5
        b+=2
        c=5
        return a+b+c
    
    a,b,c=3,9,4
    print(h(b),a,b,c)
    
except: print('error')
