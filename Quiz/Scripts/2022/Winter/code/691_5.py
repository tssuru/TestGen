try:
    
    a,b,c=7,9,8
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(b=0,a=4,c=2)
    print(a,b,c)
    
except: print('error')
