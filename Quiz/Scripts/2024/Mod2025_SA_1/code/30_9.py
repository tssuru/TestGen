try:
    a,b,c=9,7,0
    def h(a):
        a=5
        b+=2
        c=2
        return a+b+c
    
    a,b,c=2,4,9
    print(h(b),a,b,c)
except: print('error')
