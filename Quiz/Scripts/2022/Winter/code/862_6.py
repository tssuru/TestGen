try:
    a,b,c=3,4,1
    def h(a):
        a=4
        b*=3
        c=5
        return a+b+c
    
    a,b,c=6,3,0
    print(h(b),a,b,c)
    
except: print('error')
