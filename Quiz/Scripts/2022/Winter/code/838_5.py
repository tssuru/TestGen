try:
    
    a,b,c=9,6,8
    def f(a,b=7,c=6):
        print(a,b,c,end="")
    
    f(3,c=0,b=1)
    print(a,b,c)
    
except: print('error')
