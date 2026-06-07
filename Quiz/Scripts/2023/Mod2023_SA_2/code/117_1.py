try:
    a,b,c=6,8,7
    def f(a,b=9,c=7):
        print(a,b,c,end=" ")
    
    f(0,b=3)
    print(a,b,c)
    
except: print('error')
