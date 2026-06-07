try:
    a,b,c=1,2,9
    def h(b):
        a-=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,1,6
    print(h(b),a,b,c)
except: print('error')
