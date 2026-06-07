try:
    
    a,b,c=7,9,8
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(4,c=1,b=0)
    print(a,b,c)
    
except: print('error')
