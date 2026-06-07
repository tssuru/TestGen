try:
    
    a,b,c=6,9,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(c=1,c=0,b=4)
    print(a,b,c)
    
except: print('error')
