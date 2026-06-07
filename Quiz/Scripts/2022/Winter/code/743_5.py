try:
    
    a,b,c=6,8,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(a=2,1,a=0)
    print(a,b,c)
    
except: print('error')
