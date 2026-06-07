try:
    
    a,b,c=9,8,6
    def f(a,b=9,c=7):
        print(a,b,c,end="")
    
    f(b=0,a=4,c=3)
    print(a,b,c)
    
except: print('error')
