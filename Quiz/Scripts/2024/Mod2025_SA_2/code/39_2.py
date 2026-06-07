try:
    a,b,c=1,4,6
    def h(b):
        a=3
        b-=3
        c=1
        return a+b+c
    
    a,b,c=1,9,7
    print(h(b),a,b,c)
except: print('error')
