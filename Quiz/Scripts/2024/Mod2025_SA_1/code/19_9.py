try:
    a,b,c=2,1,6
    def h(a):
        a-=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,9,0
    print(h(b),a,b,c)
except: print('error')
