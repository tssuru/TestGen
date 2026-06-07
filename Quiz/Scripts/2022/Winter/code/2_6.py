try:
    a,b,c=0,5,6
    def h(a):
        a+=1
        b=2
        c=2
        return a+b+c
    
    a,b,c=3,9,2
    print(h(b),a,b,c)
    
except: print('error')
