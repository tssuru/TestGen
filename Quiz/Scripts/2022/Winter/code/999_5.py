try:
    
    a,b,c=6,8,6
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(a=2,5,a=0)
    print(a,b,c)
    
except: print('error')
