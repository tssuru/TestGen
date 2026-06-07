try:
    a,b,c=7,7,9
    def f(a,b=8,c=6):
        print(a,b,c,end=" ")
    
    f(b=2,c=1,0)
    print(a,b,c)
    
except: print('error')
