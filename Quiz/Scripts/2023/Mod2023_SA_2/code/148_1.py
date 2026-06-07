try:
    a,b,c=6,6,7
    def f(a,b=9,c=8):
        print(a,b,c,end=" ")
    
    f(4,c=1,b=2)
    print(a,b,c)
    
except: print('error')
