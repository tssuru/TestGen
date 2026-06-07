try:
    
    a,b,c=6,9,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=0,a=1,c=4)
    print(a,b,c)
    
except: print('error')
