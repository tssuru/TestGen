try:
    
    a,b,c=9,7,8
    def f(a,b=6,c=6):
        print(a,b,c,end="")
    
    f(b=3,c=1,2)
    print(a,b,c)
    
except: print('error')
