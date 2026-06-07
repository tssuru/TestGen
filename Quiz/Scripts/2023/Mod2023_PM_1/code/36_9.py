try:
    a,b,c=9,6,4
    def h(b):
        a*=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=7,9,5
    print(h(b),a,b,c)
    
except: print('error')
