try:
    a,b,c=3,2,5
    def h(a):
        a*=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=1,9,6
    print(h(b),a,b,c)
    
except: print('error')
