try:
    a,b,c=6,9,8
    def f(a,b,c=7):
        print(a,b,c,end=" ")
    
    f(b=2,a=0,c=1)
    print(a,b,c)
    
except: print('error')
