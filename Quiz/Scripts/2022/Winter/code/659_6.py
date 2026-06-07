try:
    a,b,c=9,3,6
    def h(a):
        a=1
        b+=4
        c=3
        return a+b+c
    
    a,b,c=1,4,0
    print(h(b),a,b,c)
    
except: print('error')
