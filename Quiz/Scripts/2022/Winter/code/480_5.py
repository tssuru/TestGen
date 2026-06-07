try:
    
    a,b,c=8,8,9
    def f(a,b=6,c=7):
        print(a,b,c,end="")
    
    f(a=3,5,a=0)
    print(a,b,c)
    
except: print('error')
